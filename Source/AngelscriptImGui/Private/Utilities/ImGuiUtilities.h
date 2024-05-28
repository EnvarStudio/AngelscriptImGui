// Copyright Envar Games AB. All Rights Reserved.

#pragma once

#include "imgui.h"

#include "AngelscriptBinds.h"
#include "AngelscriptBinds/Helper_PODType.h"

#if WITH_EDITOR
#include "AngelscriptDocs.h"
#endif

FORCEINLINE ImVec2 ToImGui(const FVector2f& Vector)
{
	return ImVec2(Vector.X, Vector.Y);
}

FORCEINLINE FVector2f ToUnreal(const ImVec2& Vector)
{
	return FVector2f(Vector.x, Vector.y);
}

FORCEINLINE ImVec2 ToImGui(const FVector2D& Vector)
{
	return ImVec2(Vector.X, Vector.Y);
}

FORCEINLINE ImVec4 ToImGui(const FVector4& Vector)
{
	return ImVec4(Vector.X, Vector.Y, Vector.Z, Vector.W);
}

FORCEINLINE ImVec4 ToImGui(const FColor& Color)
{
	return ToImGui(FVector4(Color));
}

FORCEINLINE const char* ToImGui(const FString& String)
{
	return StringCast<ANSICHAR>(*String).Get();
}

struct FImGuiEnumType final : public TAngelscriptPODType<int32>
{
	FString Typename;

	explicit FImGuiEnumType(const FString& InTypename) : Typename(InTypename)
	{
	}

	virtual bool IsPrimitive() const override
	{
		return true;
	}

	virtual FString GetAngelscriptTypeName() const override
	{
		return Typename;
	}

	virtual FString GetAngelscriptDeclaration(const FAngelscriptTypeUsage& Usage,
											  EAngelscriptDeclarationMode Mode) const override
	{
		switch (Mode)
		{
		case EAngelscriptDeclarationMode::MemberVariable:
		case EAngelscriptDeclarationMode::MemberVariable_InContainer:
		case EAngelscriptDeclarationMode::FunctionArgument:
		case EAngelscriptDeclarationMode::FunctionReturnValue:
			return TEXT("int32");
		default:
			return Typename;
		}
	}

	virtual bool GetDebuggerValue(const FAngelscriptTypeUsage& Usage, void* Address,
								  struct FDebuggerValue& Value) const override
	{
		Value.Type = Usage.GetAngelscriptDeclaration();
		Value.Usage = Usage;
		Value.Value = LexToString(Usage.ResolvePrimitive<int32>(Address));
		Value.bHasMembers = false;
		return true;
	}

	virtual bool GetCppForm(const FAngelscriptTypeUsage& Usage, FAngelscriptType::FCppForm& OutCppForm) const override
	{
		OutCppForm.bIsPrimitive = true;
		OutCppForm.CppType = TEXT("int");
		return true;
	}

	virtual void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override
	{
		new(DestinationPtr) int32(0);
	}
};

FORCEINLINE void ImGuiEnum(const FString& InTypeName, const FString& Documentation)
{
	FBindFlags Flags;
	Flags.bPOD = true;
	Flags.ExtraFlags |= asOBJ_BASICMATHTYPE;

	auto FImGuiEnum_ = FAngelscriptBinds::ValueClass<FImGuiEnumType>(InTypeName, Flags);
	FAngelscriptType::Register(MakeShared<FImGuiEnumType>(InTypeName));
#if WITH_EDITOR
	FAngelscriptDocs::AddUnrealDocumentationForType(FImGuiEnum_.GetTypeInfo()->GetTypeId(), Documentation);
#endif

	FImGuiEnum_.Constructor(FString::Printf(TEXT("void f(const %ls& Other)"), *InTypeName),
	[](int32* Address, const int32& Other)
	{
		new(Address) int32(Other);
	});
	SCRIPT_TRIVIAL_NATIVE_CONSTRUCTOR(FImGuiEnum_, StringCast<ANSICHAR>(*InTypeName).Get());

	FImGuiEnum_.Method(FString::Printf(TEXT("%ls& opAssign(const %ls& Other)"), *InTypeName, *InTypeName),
	[](int32& This, const int32& Other)
	{
		This = Other;
		return This;
	});
	SCRIPT_TRIVIAL_NATIVE_ASSIGNMENT(FImGuiEnum_, StringCast<ANSICHAR>(*InTypeName).Get());

	FImGuiEnum_.Method(FString::Printf(TEXT("%ls opCom() const"), *InTypeName), [](const int32& This)
	{
		return ~This;
	});

	FImGuiEnum_.Method(FString::Printf(TEXT("bool opEquals(const %ls& Other) const"), *InTypeName),
	[](const int32& This, const int32 Other)
	{
		return This == Other;
	});

	FImGuiEnum_.Method(FString::Printf(TEXT("%ls opOr(const %ls& Other) const"), *InTypeName, *InTypeName),
	[](const int32& This, const int32& Other)
	{
		return This | Other;
	});

	FImGuiEnum_.Method(FString::Printf(TEXT("%ls opOrAssign(const %ls& Other)"), *InTypeName, *InTypeName),
	[](int32& This, const int32 Other)
	{
		return This |= Other;
	});

	FImGuiEnum_.Method(FString::Printf(TEXT("%ls opAnd(const %ls& Other) const"), *InTypeName, *InTypeName),
	[](const int32& This, const int32 Other)
	{
		return This & Other;
	});

	FImGuiEnum_.Method(FString::Printf(TEXT("%ls opAndAssign(const %ls& Other)"), *InTypeName, *InTypeName),
	[](int32& This, const int32 Other)
	{
		return This &= Other;
	});
}

#define IMGUI_QUOTE(Value) #Value
#define IMGUI_ENUM(Type, Documentation)\
	ImGuiEnum(TEXT(IMGUI_QUOTE(E ## Type)),TEXT(Documentation));\
	FAngelscriptBinds::FNamespace Type ## Namespace(IMGUI_QUOTE(E ## Type))
#define IMGUI_ENUM_VALUE(Type, Name, Suffix)\
	static Type Name = Type ## _ ## Name ## Suffix;\
	FAngelscriptBinds::BindGlobalVariable(IMGUI_QUOTE(E ## Type Name), &Name)

struct FStringArrayToPtrHelper
{
	FStringArrayToPtrHelper(const TArray<FString>& Strings)
	{
		Array.Reserve(32 * Strings.Num());
		CharPtrArray.Reserve(Strings.Num());

		SIZE_T Offset = 0;
		for (const auto& String : Strings)
		{
			const auto MaxLen = String.Len() + 1;
			if (Offset + MaxLen >= Array.GetAllocatedSize())
			{
				Array.Reserve(Array.GetAllocatedSize() * 2);
			}
			FCStringAnsi::Strncpy(Array.GetData() + Offset, StringCast<ANSICHAR>(*String).Get(), MaxLen);
			CharPtrArray.Add(reinterpret_cast<ANSICHAR*>(Offset));
			Offset += MaxLen;
		}
		for (auto& StrPtr : CharPtrArray)
		{
			StrPtr += reinterpret_cast<SIZE_T>(Array.GetData());
		}
	}

	const char** GetPtr()
	{
		return CharPtrArray.GetData();
	}

private:
	TArray<ANSICHAR> Array;
	TArray<const char*> CharPtrArray;
};
