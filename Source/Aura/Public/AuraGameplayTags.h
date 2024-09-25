// CopyRight Aura

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * AuraGameplayTags
 *
 * Singleton Containing Native Gameplay Tags
 */

struct FAuraGameplayTags
{
public:
 static const FAuraGameplayTags& Get() {return GameplayTags;}
 static void InitializeNativeGameplayTags();

protected:


private:
 static FAuraGameplayTags GameplayTags;
};
