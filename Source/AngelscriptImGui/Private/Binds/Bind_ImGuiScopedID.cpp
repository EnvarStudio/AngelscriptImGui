// Copyright Envar Games AB. All Rights Reserved.

#include "AngelscriptBinds.h"
#include "GameFramework/Actor.h"
#include "Utilities/ImGuiScopedID.h"

const FAngelscriptBinds::FBind Bind_ImGuiScopedID(FAngelscriptBinds::EOrder::Late, []
{
	auto FImGuiScopedID_ = FAngelscriptBinds::ExistingClass("FImGuiScopedID");

	FImGuiScopedID_.Constructor("void f(const int IntID)", [](FHitResult* Address, const int IntID)
	{
		new(Address) FImGuiScopedID(IntID);
	});
	FImGuiScopedID_.Constructor("void f(const FString& IntID)", [](FHitResult* Address, const FString& StringID)
	{
		new(Address) FImGuiScopedID(StringID);
	});
});
