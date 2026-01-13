// Copyright Envar Games AB. All Rights Reserved.

#include "AngelscriptBinds.h"
#include "Utilities/ImGuiUtilities.h"

struct FImGuiScopedID
{
	explicit FImGuiScopedID(const FString& StringID)
	{
		ImGui::PushID(IMGUI_STRING(StringID));
	}

	explicit FImGuiScopedID(const int IntID)
	{
		ImGui::PushID(IntID);
	}

	~FImGuiScopedID()
	{
		ImGui::PopID();
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ImGuiScopedID([]
{
	// ReSharper disable once CppUE4CodingStandardNamingViolationWarning
	auto FImGuiScopedID_ = FAngelscriptBinds::ValueClass<FImGuiScopedID>("FImGuiScopedID", FBindFlags());

	FImGuiScopedID_.Constructor("void f(const int IntID)", [](FImGuiScopedID* Address, const int IntID)
	{
		new(Address) FImGuiScopedID(IntID);
	});
	FImGuiScopedID_.Constructor("void f(const FString& IntID)", [](FImGuiScopedID* Address, const FString& StringID)
	{
		new(Address) FImGuiScopedID(StringID);
	});
	FImGuiScopedID_.Destructor("void f()", [](FImGuiScopedID* Counter)
	{
		Counter->~FImGuiScopedID();
	});
});
