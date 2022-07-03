// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildable.h"
#include "Components/SceneComponent.h"
#include "FGSwatchGroup.h"

void UFGSignificantNetworkRCO::GetLifetimeReplicatedProps(::TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGSignificantNetworkRCO, mForceNetField_UFGSignificantNetworkRemoteCallObject);
}
void UFGSignificantNetworkRCO::Server_RequestDecoratorSignificantComponents_Implementation(AFGBuildable* actor, AFGPlayerController* controller) { }
void UFGSignificantNetworkRCO::Server_RemoveDecoratorSignificantComponents_Implementation(AFGBuildable* actor, AFGPlayerController* controller) { }
#if WITH_EDITOR
void AFGBuildable::CheckForErrors() { Super::CheckForErrors(); }
#endif 
#if STATS
#endif 
#if WITH_EDITOR
void AFGBuildable::SetBuildableDisplayName(TSubclassOf< AFGBuildable > inClass, FText displayName) { }
#endif 
void AFGBuildable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildable, mColorSlot);
	DOREPLIFETIME(AFGBuildable, mCustomizationData);
	DOREPLIFETIME(AFGBuildable, mBuildEffectInstignator);
	DOREPLIFETIME(AFGBuildable, mDidFirstTimeUse);
	DOREPLIFETIME(AFGBuildable, mNetConstructionID);
	DOREPLIFETIME(AFGBuildable, mBuiltWithRecipe);
	DOREPLIFETIME(AFGBuildable, mOriginalBuildableVariant);
}
void AFGBuildable::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) { }
AFGBuildable::AFGBuildable() : Super() {
	this->mHologramClass = nullptr;
	this->mDisplayName = INVTEXT("");
	this->mDescription = INVTEXT("");
	this->MaxRenderDistance = -1.0;
	this->mHighlightVector.X = 0.0;
	this->mHighlightVector.Y = 0.0;
	this->mHighlightVector.Z = 0.0;
	this->mDecoratorClass = nullptr;
	this->mFactoryTickFunction.TickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.bTickEvenWhenPaused = false;
	this->mFactoryTickFunction.bCanEverTick = false;
	this->mFactoryTickFunction.bStartWithTickEnabled = true;
	this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true;
	this->mFactoryTickFunction.TickInterval = 0.0;
	this->mColorSlot = 0;
	this->mCustomizationData.SwatchDesc = nullptr;
	this->mCustomizationData.PatternDesc = nullptr;
	this->mCustomizationData.MaterialDesc = nullptr;
	this->mCustomizationData.SkinDesc = nullptr;
	this->mCustomizationData.OverrideColorData.Metallic = 0.0;
	this->mCustomizationData.OverrideColorData.Roughness = 0.0;
	this->mCustomizationData.PatternRotation = 0;
	this->mCustomizationData.ColorSlot = 0;
	this->mCustomizationData.NeedsSkinUpdate = false;
	this->mCustomizationData.HasPower = 0;
	this->mDefaultSwatchCustomizationOverride = nullptr;
	this->mSwatchGroup = UFGSwatchGroup_Standard::StaticClass();
	this->mAllowColoring = true;
	this->mFactorySkinClass = nullptr;
	this->mBuildEffectTemplate = nullptr;
	this->mDismantleEffectTemplate = nullptr;
	this->mActiveBuildEffect = nullptr;
	this->mBuildEffectInstignator = nullptr;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mSkipBuildEffect = false;
	this->mBuildEffectSpeed = 0.0;
	this->mForceNetUpdateOnRegisterPlayer = false;
	this->mToggleDormancyOnInteraction = false;
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->mHighlightParticleSystemTemplate = nullptr;
	this->mHighlightParticleSystemComponent = nullptr;
	this->mDidFirstTimeUse = false;
	this->mShouldShowHighlight = false;
	this->mShouldShowAttachmentPointVisuals = false;
	this->mCreateClearanceMeshRepresentation = true;
	this->mInteractWidgetClass = nullptr;
	this->mIsUseable = false;
	this->mBuiltWithRecipe = nullptr;
	this->mOriginalBuildableVariant = nullptr;
	this->mBuildTimeStamp = 0.0;
	this->mClearanceComponent = nullptr;
	this->mComplexClearanceComponent = nullptr;
	this->mHideOnBuildEffectStart = false;
	this->mShouldModifyWorldGrid = true;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicates = true;
	this->NetDormancy = ENetDormancy::DORM_Initial;
	this->NetCullDistanceSquared = 5625000000.0;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGBuildable::Serialize(FArchive& ar) { Super::Serialize(ar); }
void AFGBuildable::OnConstruction(const FTransform& transform) { }
void AFGBuildable::BeginPlay() { }
void AFGBuildable::EndPlay(const EEndPlayReason::Type endPlayReason) { }
void AFGBuildable::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion) { }
void AFGBuildable::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion) { }
void AFGBuildable::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion) { }
void AFGBuildable::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion) { }
void AFGBuildable::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects) { }
bool AFGBuildable::NeedTransform_Implementation() { return bool(); }
bool AFGBuildable::ShouldSave_Implementation() const { return bool(); }
void AFGBuildable::SetCustomizationData_Implementation(const FFactoryCustomizationData& customizationData) { }
void AFGBuildable::SetCustomizationData_Native(const FFactoryCustomizationData& customizationData) { }
void AFGBuildable::ApplyCustomizationData_Implementation(const FFactoryCustomizationData& customizationData) { }
void AFGBuildable::ApplyCustomizationData_Native(const FFactoryCustomizationData& customizationData) { }
TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > AFGBuildable::GetActiveSkin_Native() { return TSubclassOf<UFGFactoryCustomizationDescriptor_Skin>(); }
TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > AFGBuildable::GetActiveSkin_Implementation() { return TSubclassOf<UFGFactoryCustomizationDescriptor_Skin>(); }
bool AFGBuildable::GetCanBeColored_Implementation() { return bool(); }
void AFGBuildable::StartIsAimedAtForColor_Implementation(AFGCharacterPlayer* byCharacter, bool isValid) { }
void AFGBuildable::StopIsAimedAtForColor_Implementation(AFGCharacterPlayer* byCharacter) { }
void AFGBuildable::UpdateUseState_Implementation(AFGCharacterPlayer* byCharacter, const FVector& atLocation, UPrimitiveComponent* componentHit, FUseState& out_useState) const { }
void AFGBuildable::OnUse_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state) { }
void AFGBuildable::OnUseStop_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state) { }
bool AFGBuildable::IsUseable_Implementation() const { return bool(); }
void AFGBuildable::StartIsLookedAt_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state) { }
FText AFGBuildable::GetLookAtDecription_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state) const { return FText(); }
void AFGBuildable::StopIsLookedAt_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state) { }
void AFGBuildable::RegisterInteractingPlayer_Implementation(AFGCharacterPlayer* player) { }
void AFGBuildable::UnregisterInteractingPlayer_Implementation(AFGCharacterPlayer* player) { }
void AFGBuildable::EnablePrimaryTickFunctions(bool enable) { }
void AFGBuildable::TickFactory(float dt, ELevelTick TickType) { }
void AFGBuildable::Factory_Tick(float dt) { }
bool AFGBuildable::CanDismantle_Implementation() const { return bool(); }
void AFGBuildable::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const { }
FVector AFGBuildable::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const { return FVector(); }
void AFGBuildable::PreUpgrade_Implementation() { }
void AFGBuildable::Upgrade_Implementation(AActor* newActor) { }
void AFGBuildable::Dismantle_Implementation() { }
void AFGBuildable::StartIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter) { }
void AFGBuildable::StopIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter) { }
void AFGBuildable::GetChildDismantleActors_Implementation(TArray< AActor* >& out_ChildDismantleActors) const { }
void AFGBuildable::StartIsLookedAtForConnection(AFGCharacterPlayer* byCharacter, UFGCircuitConnectionComponent* overlappingConnection) { }
void AFGBuildable::StopIsLookedAtForConnection(AFGCharacterPlayer* byCharacter) { }
TSubclassOf< class UFGItemDescriptor > AFGBuildable::GetBuiltWithDescriptor() const { return TSubclassOf<class UFGItemDescriptor>(); }
void AFGBuildable::TurnOffAndDestroy() { }
bool AFGBuildable::GetPoolHandleInitialState() const { return bool(); }
bool AFGBuildable::CreateDecoratorSignificantComponents(AFGPlayerController* controller) { return bool(); }
void AFGBuildable::ConfigureDynamicDecoratorComponent(USceneComponent* newComponent) { }
void AFGBuildable::TryRemoveDecoratorSignificantComponents(AFGPlayerController* controller) { }
void AFGBuildable::RemoveDecoratorSignificantComponents() { }
const TArray< class UMeshComponent* >& AFGBuildable::GetMainMeshes() { return *(new TArray< class UMeshComponent* >); }
void AFGBuildable::DisplayDebug(UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos) { }
void AFGBuildable::Stat_Cost(TArray< FItemAmount >& out_amount) const { }
void AFGBuildable::Stat_StockInventory(TArray< FItemAmount >& out_amount) const { }
void AFGBuildable::PlayBuildEffects(AActor* inInstigator) { }
void AFGBuildable::ExecutePlayBuildEffects() { }
void AFGBuildable::OnBuildEffectFinished() { }
void AFGBuildable::PlayDismantleEffects_Implementation() { }
void AFGBuildable::OnDismantleEffectFinished() { }
UFGMaterialEffect_Build* AFGBuildable::GetActiveBuildEffect() { return nullptr; }
bool AFGBuildable::CanBeSampled_Implementation() const { return bool(); }
void AFGBuildable::ShowHighlightEffect() { }
void AFGBuildable::RemoveHighlightEffect() { }
void AFGBuildable::SetHiddenIngameAndHideInstancedMeshes(bool hide) { }
TSubclassOf< AFGBuildable > AFGBuildable::GetBuildableClassFromRecipe(TSubclassOf<  UFGRecipe > inRecipe) { return TSubclassOf<AFGBuildable>(); }
UFGClearanceComponent* AFGBuildable::GetClearanceComponent() { return nullptr; }
UFGComplexClearanceComponent* AFGBuildable::SpawnComplexClearanceComponent() { return nullptr; }
void AFGBuildable::DestroyComplexClearanceComponent() { }
uint8 AFGBuildable::GetNumPowerConnections() const { return uint8(); }
uint8 AFGBuildable::GetNumFactoryConnections() const { return uint8(); }
uint8 AFGBuildable::GetNumFactoryOuputConnections() const { return uint8(); }
void AFGBuildable::GetAttachmentPoints(TArray< const FFGAttachmentPoint* >& out_points) const { }
void AFGBuildable::CreateAttachmentPointsFromComponents(TArray< FFGAttachmentPoint >& out_points, AActor* owner) const { }
bool AFGBuildable::ShouldBeConsideredForBase_Implementation() { return bool(); }
void AFGBuildable::Native_OnMaterialInstancesUpdated() { }
int32 AFGBuildable::GetCostMultiplierForLength(float totalLength, float costSegmentLength) { return int32(); }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Swatch > AFGBuildable::GetDefaultSwatchCustomizationOverride(UObject* worldContext) { return TSubclassOf<class UFGFactoryCustomizationDescriptor_Swatch>(); }
void AFGBuildable::OnSkinCustomizationApplied_Implementation(TSubclassOf<  UFGFactoryCustomizationDescriptor_Skin > skin) { }
void AFGBuildable::PlayConstructSound_Implementation() { }
void AFGBuildable::PlayDismantleSound_Implementation() { }
void AFGBuildable::RegisterInteractingPlayerWithCircuit(AFGCharacterPlayer* player) { }
void AFGBuildable::UnregisterInteractingPlayerWithCircuit(AFGCharacterPlayer* player) { }
void AFGBuildable::OnReplicatingDetailsChanged() { }
bool AFGBuildable::Factory_PeekOutput_Implementation(const  UFGFactoryConnectionComponent* connection, TArray< FInventoryItem >& out_items, TSubclassOf< UFGItemDescriptor > type) const { return bool(); }
bool AFGBuildable::Factory_GrabOutput_Implementation(UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type) { return bool(); }
uint8 AFGBuildable::MaxNumGrab(float delta) const { return uint8(); }
uint8 AFGBuildable::EstimatedMaxNumGrab_Threadsafe(float estimatedDeltaTime) const { return uint8(); }
bool AFGBuildable::VerifyDefaults(FString& out_message) { return bool(); }
void AFGBuildable::GetDismantleRefundReturns(TArray< FInventoryStack >& out_returns) const { }
int32 AFGBuildable::GetDismantleRefundReturnsMultiplier() const { return int32(); }
void AFGBuildable::GetDismantleInventoryReturns(TArray< FInventoryStack >& out_returns) const { }
void AFGBuildable::TogglePendingDismantleMaterial(bool enabled) { }
void AFGBuildable::ApplySkinData(TSubclassOf< UFGFactoryCustomizationDescriptor_Skin > newSkinDesc) { }
void AFGBuildable::ApplyMeshPrimitiveData(const FFactoryCustomizationData& customizationData) { }
void AFGBuildable::ApplyHasPowerCustomData() { }
void AFGBuildable::SetDidFirstTimeUse(bool didUse) { }
TArray< UStaticMeshComponent* > AFGBuildable::CreateBuildEffectProxyComponents() { return TArray<UStaticMeshComponent*>(); }
void AFGBuildable::DestroyBuildEffectProxyComponents() { }
void AFGBuildable::OnRep_CustomizationData() { }
void AFGBuildable::CreateFactoryStatID() const { }
void AFGBuildable::SetReplicateDetails(bool replicateDetails) { }
bool AFGBuildable::CheckFactoryConnectionComponents(FString& out_message) { return bool(); }
void AFGBuildable::OnRep_DidFirstTimeUse() { }
FOnReplicationDetailActorStateChange AFGBuildable::OnBuildableReplicationDetailActorStateChange = FOnReplicationDetailActorStateChange();
FOnRegisteredPlayerChanged AFGBuildable::OnRegisterPlayerChange = FOnRegisteredPlayerChanged();
