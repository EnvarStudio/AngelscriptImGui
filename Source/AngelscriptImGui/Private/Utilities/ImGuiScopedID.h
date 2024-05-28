// Copyright Envar Games AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ImGuiScopedID.generated.h"

USTRUCT(BlueprintType)
struct ANGELSCRIPTIMGUI_API FImGuiScopedID
{
	GENERATED_BODY()

	FImGuiScopedID() {}
	FImGuiScopedID(const FString& StringID);
	FImGuiScopedID(const int IntID);

	~FImGuiScopedID();

private:
	bool bHasPushedID = false;
};
