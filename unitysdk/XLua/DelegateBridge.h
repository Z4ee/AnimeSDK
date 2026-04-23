#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/ChapterRecordUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/InGameTeamSlotUiData.h"
#include "unitysdk/RPG/Client/ActivityModule_ActivityType.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoRarityData.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoWorldData.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/Struct_2_8B48740F46FC53FC.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_3.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/XLua/DelegateBridgeBase.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_337;
class Class_0_16E4307DCC419505_338;
class Class_0_16E4307DCC419505_339;
class Class_0_16E4307DCC419505_341;
class Class_0_16E4307DCC419505_342;
class Class_0_16E4307DCC419505_343;
class Class_0_16E4307DCC419505_344;
class Class_1_2CF43CF3CB5182D0;
class Class_1_303D5A33D1401D59;
class Class_1_43BD383C98B4C0C5_102;
class Class_1_43BD383C98B4C0C5_103;
class Class_1_47EB23CB5C4B2615_31;
class Class_1_5469D397DAE62876;
class Class_1_7D41D5D948382242;
class Class_1_7E9AC8675DA072FB;
class Class_1_9C8BB23B0435A836;
class Class_1_B1050BB558D637BF;
class Class_1_BEB73AACF0CDA957;
class Class_1_D0948460F4810867;
class Class_1_D17272E82AE804C2_320;
class Class_1_D17272E82AE804C2_321;
class Class_1_D17272E82AE804C2_323;
class Class_1_D6D8D891CDDE5DED;
class Class_1_E3A8B05AA1BBEE81;
class Class_1_EA80EBCE663FE95A;
class Class_1_F59C8DF29FF9694F;
class Class_2_BD898AE9C0E88E25;
class Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53;
class Class_2_E6C0556C909C8254;
class Class_3_1C169A0F2ACF26E7;
namespace Google::Protobuf { class ByteString; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace InControl { class InputDevice; }
namespace Proto { class ItemCost; }
namespace Proto { class StrongChallengeAvatar; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class ActivityHotCoreRewardData; }
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class AetherDivideGymDataItem; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class AssistData; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarEnhancedHint; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BookContentData; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace RPG::Client { class CakeRaceHandbookCatItem; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class ChenLingBattleDeckData; }
namespace RPG::Client { class ChenLingPrivilege; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueSubMissionReplayDataItem; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerCheersGuestCommentData; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::Client { class EvolveBuildScMixData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace RPG::Client { class FateHandbookHouguItem; }
namespace RPG::Client { class FateHandbookReijuItem; }
namespace RPG::Client { class FightFestCoachSkill; }
namespace RPG::Client { class FightFestPhase; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class GachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace RPG::Client { class GridFightDivisionLevelReward; }
namespace RPG::Client { class GridFightDivisionStageConfig; }
namespace RPG::Client { class GridFightEnemyDifficultyLvConfig; }
namespace RPG::Client { class GridFightEquipCategoryInfoConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeConfig; }
namespace RPG::Client { class GridFightGameFormationEditor_EditEvent; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTutorialStageConfig; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class IResidentActivityPanelData; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class LightConeRecommendData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoRogueHexChessBoardItem; }
namespace RPG::Client { class MonoSceneObjClickHint; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MultipleDropData; }
namespace RPG::Client { class NPCWarningTipConfig; }
namespace RPG::Client { class NewsTickerItem; }
namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class ParkourRank; }
namespace RPG::Client { class PenaconyEndmostChronicleEvent; }
namespace RPG::Client { class PlanetFesCardData; }
namespace RPG::Client { class PlanetFesMiniGameBingoRewardLevel; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace RPG::Client { class PlanetFesThemeData; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }
namespace RPG::Client { class PlanetFesTradingCardExchangeHistoryItem; }
namespace RPG::Client { class PlanetFesTradingCardOfferItem; }
namespace RPG::Client { class PlayerBoardInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PopupMenuProxy_Option; }
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueMagicAreaDataItem; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::Client { class RogueTournArchiveData; }
namespace RPG::Client { class RogueTournAreaDataItem; }
namespace RPG::Client { class RogueTournHexData; }
namespace RPG::Client { class RoleTrialActivityData; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SettledPunkLordData; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class SuitRecommendAvatarData; }
namespace RPG::Client { class SuperDropDown; }
namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::Client { class SwordTrainingEndingDataItem; }
namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class TarotBookCard; }
namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookClue; }
namespace RPG::Client { class TarotBookDeleteData; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { class UIBubbleItem; }
namespace RPG::Client { class UIBubbleManager; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client { class VirtualRankChimeraTeam; }
namespace RPG::Client { class WheelItem; }
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::Client::ActivityIdleLive { class AmphoreusTarotData; }
namespace RPG::Client::ActivityIdleLive { class CaptainData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAdvTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaPoolConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatForceRefreshEvent; }
namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace RPG::Client::DiceCombat { class DiceCombatPerformanceBattleEvent; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Promises { class ExceptionEventArgs; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::SwordTraining { class SwordTrainingCandidatePartnerAbilityData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::GameCore { class ActivityFightGroupRow; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventurePlayerRow; }
namespace RPG::GameCore { class AdventurePlayerRow_AdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class AvatarPromotionRow; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BuffConfig; }
namespace RPG::GameCore { class CEBattlePresetConfig; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class DialogueGroupRow; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class ItemComefromRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace RPG::GameCore { class MapEntryRow; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { class MissionCondition; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace RPG::GameCore { class PerformanceSkipOverrideRow; }
namespace RPG::GameCore { class PlaneEventRow; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class RewardRow; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace RPG::GameCore { class RogueDLCMainStoryRewardRow; }
namespace RPG::GameCore { class RogueImageRow; }
namespace RPG::GameCore { class RogueNousAeonCrossRow; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace RPG::GameCore { class TextmapRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace RPG::GameCore { class VoiceConfigRow; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace SuperScrollView { class LoopFlexibleGridView; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class MemberInfo; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class IBeginDragHandler; }
namespace UnityEngine::EventSystems { class ICancelHandler; }
namespace UnityEngine::EventSystems { class IDeselectHandler; }
namespace UnityEngine::EventSystems { class IDragHandler; }
namespace UnityEngine::EventSystems { class IDropHandler; }
namespace UnityEngine::EventSystems { class IEndDragHandler; }
namespace UnityEngine::EventSystems { class IIgnoreHandler; }
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Toggle; }
namespace XLua { class LuaBase; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaTable; }

#define XLUA_DELEGATEBRIDGE_ACTION_OFFSET UNITYSDK_OFFSET(0x1120DD10)
#define XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x11201410)
#define XLUA_DELEGATEBRIDGE_PCALL_OFFSET UNITYSDK_OFFSET(0x111C0070)
#define XLUA_DELEGATEBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x111FCB40)
#define XLUA_DELEGATEBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1120DA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET UNITYSDK_OFFSET(0x11110A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET UNITYSDK_OFFSET(0x11122E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET UNITYSDK_OFFSET(0x11123220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET UNITYSDK_OFFSET(0x11123500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET UNITYSDK_OFFSET(0x11123730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET UNITYSDK_OFFSET(0x11123A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET UNITYSDK_OFFSET(0x11123D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET UNITYSDK_OFFSET(0x11123F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET UNITYSDK_OFFSET(0x11124280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET UNITYSDK_OFFSET(0x11124560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET UNITYSDK_OFFSET(0x11124790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET UNITYSDK_OFFSET(0x111122D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET UNITYSDK_OFFSET(0x11124AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET UNITYSDK_OFFSET(0x11124CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET UNITYSDK_OFFSET(0x11124FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET UNITYSDK_OFFSET(0x111251F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET UNITYSDK_OFFSET(0x11125510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET UNITYSDK_OFFSET(0x111257F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET UNITYSDK_OFFSET(0x11125A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET UNITYSDK_OFFSET(0x11125D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET UNITYSDK_OFFSET(0x11125F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET UNITYSDK_OFFSET(0x11126210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET UNITYSDK_OFFSET(0x111125E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET UNITYSDK_OFFSET(0x11126540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET UNITYSDK_OFFSET(0x11126900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET UNITYSDK_OFFSET(0x11126C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET UNITYSDK_OFFSET(0x11126E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET UNITYSDK_OFFSET(0x111270D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET UNITYSDK_OFFSET(0x11127480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET UNITYSDK_OFFSET(0x111276B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET UNITYSDK_OFFSET(0x11127A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET UNITYSDK_OFFSET(0x11127D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET UNITYSDK_OFFSET(0x11127F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET UNITYSDK_OFFSET(0x111128A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET UNITYSDK_OFFSET(0x11128260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET UNITYSDK_OFFSET(0x11128540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET UNITYSDK_OFFSET(0x11128770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET UNITYSDK_OFFSET(0x111289A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET UNITYSDK_OFFSET(0x11128CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET UNITYSDK_OFFSET(0x11128F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET UNITYSDK_OFFSET(0x111291C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET UNITYSDK_OFFSET(0x111293F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET UNITYSDK_OFFSET(0x11129680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET UNITYSDK_OFFSET(0x111299F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET UNITYSDK_OFFSET(0x11112B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET UNITYSDK_OFFSET(0x11129D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET UNITYSDK_OFFSET(0x11129F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET UNITYSDK_OFFSET(0x1112A180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET UNITYSDK_OFFSET(0x1112A420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET UNITYSDK_OFFSET(0x1112A6E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET UNITYSDK_OFFSET(0x1112A910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET UNITYSDK_OFFSET(0x1112ABB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET UNITYSDK_OFFSET(0x1112ADE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET UNITYSDK_OFFSET(0x1112B180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET UNITYSDK_OFFSET(0x1112B3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET UNITYSDK_OFFSET(0x11112E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET UNITYSDK_OFFSET(0x1112B6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET UNITYSDK_OFFSET(0x1112B8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET UNITYSDK_OFFSET(0x1112BC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET UNITYSDK_OFFSET(0x1112BE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET UNITYSDK_OFFSET(0x1112C0F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET UNITYSDK_OFFSET(0x1112C320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET UNITYSDK_OFFSET(0x1112C600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET UNITYSDK_OFFSET(0x1112C830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET UNITYSDK_OFFSET(0x1112CA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET UNITYSDK_OFFSET(0x1112CCF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET UNITYSDK_OFFSET(0x11113150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET UNITYSDK_OFFSET(0x1112CFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET UNITYSDK_OFFSET(0x1112D260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET UNITYSDK_OFFSET(0x1112D490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET UNITYSDK_OFFSET(0x1112D6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET UNITYSDK_OFFSET(0x1112D9E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET UNITYSDK_OFFSET(0x1112DD10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET UNITYSDK_OFFSET(0x1112DFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET UNITYSDK_OFFSET(0x1112E220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET UNITYSDK_OFFSET(0x1112E540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET UNITYSDK_OFFSET(0x1112E770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET UNITYSDK_OFFSET(0x111134C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET UNITYSDK_OFFSET(0x1112EA50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET UNITYSDK_OFFSET(0x1112EC80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET UNITYSDK_OFFSET(0x1112EFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET UNITYSDK_OFFSET(0x1112F1D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET UNITYSDK_OFFSET(0x1112F470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET UNITYSDK_OFFSET(0x1112F710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET UNITYSDK_OFFSET(0x1112F9F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET UNITYSDK_OFFSET(0x1112FC20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET UNITYSDK_OFFSET(0x1112FF40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET UNITYSDK_OFFSET(0x11130220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET UNITYSDK_OFFSET(0x111137D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET UNITYSDK_OFFSET(0x11130450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET UNITYSDK_OFFSET(0x11130770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET UNITYSDK_OFFSET(0x11130A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET UNITYSDK_OFFSET(0x11130C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET UNITYSDK_OFFSET(0x11130FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET UNITYSDK_OFFSET(0x111311D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET UNITYSDK_OFFSET(0x11131480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET UNITYSDK_OFFSET(0x111316B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET UNITYSDK_OFFSET(0x111319D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET UNITYSDK_OFFSET(0x11131C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET UNITYSDK_OFFSET(0x11113B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET UNITYSDK_OFFSET(0x11131E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET UNITYSDK_OFFSET(0x111320D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET UNITYSDK_OFFSET(0x111323B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET UNITYSDK_OFFSET(0x111325E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET UNITYSDK_OFFSET(0x111328C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET UNITYSDK_OFFSET(0x11132AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET UNITYSDK_OFFSET(0x11132E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET UNITYSDK_OFFSET(0x111330F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET UNITYSDK_OFFSET(0x11133320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET UNITYSDK_OFFSET(0x11133640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET UNITYSDK_OFFSET(0x11113E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET UNITYSDK_OFFSET(0x11110CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET UNITYSDK_OFFSET(0x11133920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET UNITYSDK_OFFSET(0x11133B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET UNITYSDK_OFFSET(0x11133E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET UNITYSDK_OFFSET(0x111340A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET UNITYSDK_OFFSET(0x11134490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET UNITYSDK_OFFSET(0x11134770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET UNITYSDK_OFFSET(0x111349A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET UNITYSDK_OFFSET(0x11134CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET UNITYSDK_OFFSET(0x11134FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET UNITYSDK_OFFSET(0x111351D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET UNITYSDK_OFFSET(0x11114170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET UNITYSDK_OFFSET(0x111354F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET UNITYSDK_OFFSET(0x111357D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET UNITYSDK_OFFSET(0x11135A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET UNITYSDK_OFFSET(0x11135D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET UNITYSDK_OFFSET(0x11135F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET UNITYSDK_OFFSET(0x111361C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET UNITYSDK_OFFSET(0x11136440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET UNITYSDK_OFFSET(0x11136670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET UNITYSDK_OFFSET(0x111368A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET UNITYSDK_OFFSET(0x11136CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET UNITYSDK_OFFSET(0x11114490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET UNITYSDK_OFFSET(0x11137030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET UNITYSDK_OFFSET(0x11137310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET UNITYSDK_OFFSET(0x111375E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET UNITYSDK_OFFSET(0x11137810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET UNITYSDK_OFFSET(0x11137A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET UNITYSDK_OFFSET(0x11137D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET UNITYSDK_OFFSET(0x11137F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET UNITYSDK_OFFSET(0x11138270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET UNITYSDK_OFFSET(0x111385F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET UNITYSDK_OFFSET(0x11138820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET UNITYSDK_OFFSET(0x11114710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET UNITYSDK_OFFSET(0x11138A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET UNITYSDK_OFFSET(0x11138DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET UNITYSDK_OFFSET(0x11139190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET UNITYSDK_OFFSET(0x111393C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET UNITYSDK_OFFSET(0x111395F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET UNITYSDK_OFFSET(0x111398F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET UNITYSDK_OFFSET(0x11139B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET UNITYSDK_OFFSET(0x11139DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET UNITYSDK_OFFSET(0x1113A0D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET UNITYSDK_OFFSET(0x1113A300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET UNITYSDK_OFFSET(0x11114980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET UNITYSDK_OFFSET(0x1113A620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET UNITYSDK_OFFSET(0x1113A900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET UNITYSDK_OFFSET(0x1113AB30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET UNITYSDK_OFFSET(0x1113AE50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET UNITYSDK_OFFSET(0x1113B0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET UNITYSDK_OFFSET(0x1113B380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET UNITYSDK_OFFSET(0x1113B660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET UNITYSDK_OFFSET(0x1113B890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET UNITYSDK_OFFSET(0x1113BBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET UNITYSDK_OFFSET(0x1113BE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET UNITYSDK_OFFSET(0x11114C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET UNITYSDK_OFFSET(0x1113C0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET UNITYSDK_OFFSET(0x1113C3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET UNITYSDK_OFFSET(0x1113C610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET UNITYSDK_OFFSET(0x1113C880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET UNITYSDK_OFFSET(0x1113CB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET UNITYSDK_OFFSET(0x1113CD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET UNITYSDK_OFFSET(0x1113D0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET UNITYSDK_OFFSET(0x1113D390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET UNITYSDK_OFFSET(0x1113D5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET UNITYSDK_OFFSET(0x1113D8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET UNITYSDK_OFFSET(0x11115020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET UNITYSDK_OFFSET(0x1113DC20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET UNITYSDK_OFFSET(0x1113DEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET UNITYSDK_OFFSET(0x1113E230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET UNITYSDK_OFFSET(0x1113E510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET UNITYSDK_OFFSET(0x1113E740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET UNITYSDK_OFFSET(0x1113EA60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET UNITYSDK_OFFSET(0x1113ED70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET UNITYSDK_OFFSET(0x1113F050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET UNITYSDK_OFFSET(0x1113F280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET UNITYSDK_OFFSET(0x1113F5A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET UNITYSDK_OFFSET(0x11115350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET UNITYSDK_OFFSET(0x1113F7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET UNITYSDK_OFFSET(0x1113FA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET UNITYSDK_OFFSET(0x1113FCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET UNITYSDK_OFFSET(0x1113FFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET UNITYSDK_OFFSET(0x111401E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET UNITYSDK_OFFSET(0x111404C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET UNITYSDK_OFFSET(0x111406F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET UNITYSDK_OFFSET(0x11140A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET UNITYSDK_OFFSET(0x11140CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET UNITYSDK_OFFSET(0x11140F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET UNITYSDK_OFFSET(0x11115660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET UNITYSDK_OFFSET(0x11141240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET UNITYSDK_OFFSET(0x11141490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET UNITYSDK_OFFSET(0x111416C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET UNITYSDK_OFFSET(0x111419F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET UNITYSDK_OFFSET(0x11141CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET UNITYSDK_OFFSET(0x11141F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET UNITYSDK_OFFSET(0x11142220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET UNITYSDK_OFFSET(0x11142450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET UNITYSDK_OFFSET(0x11142680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET UNITYSDK_OFFSET(0x111428B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET UNITYSDK_OFFSET(0x111158C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET UNITYSDK_OFFSET(0x11142AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET UNITYSDK_OFFSET(0x11142D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET UNITYSDK_OFFSET(0x11143050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET UNITYSDK_OFFSET(0x111432D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET UNITYSDK_OFFSET(0x11143660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET UNITYSDK_OFFSET(0x11143940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET UNITYSDK_OFFSET(0x11143B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET UNITYSDK_OFFSET(0x11143E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET UNITYSDK_OFFSET(0x111441D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET UNITYSDK_OFFSET(0x11144400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET UNITYSDK_OFFSET(0x11115B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET UNITYSDK_OFFSET(0x11110ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET UNITYSDK_OFFSET(0x111446E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET UNITYSDK_OFFSET(0x11144910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET UNITYSDK_OFFSET(0x11144C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET UNITYSDK_OFFSET(0x11144FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET UNITYSDK_OFFSET(0x11145290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET UNITYSDK_OFFSET(0x11145530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET UNITYSDK_OFFSET(0x11145760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET UNITYSDK_OFFSET(0x11145990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET UNITYSDK_OFFSET(0x11145C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET UNITYSDK_OFFSET(0x11145F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET UNITYSDK_OFFSET(0x11115FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET UNITYSDK_OFFSET(0x11146130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET UNITYSDK_OFFSET(0x11146450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET UNITYSDK_OFFSET(0x111466C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET UNITYSDK_OFFSET(0x111469A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET UNITYSDK_OFFSET(0x11146BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET UNITYSDK_OFFSET(0x11146EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET UNITYSDK_OFFSET(0x11147240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET UNITYSDK_OFFSET(0x111474E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET UNITYSDK_OFFSET(0x11147900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET UNITYSDK_OFFSET(0x11147BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET UNITYSDK_OFFSET(0x11116590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET UNITYSDK_OFFSET(0x11147E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET UNITYSDK_OFFSET(0x11148130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET UNITYSDK_OFFSET(0x11148410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET UNITYSDK_OFFSET(0x11148640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET UNITYSDK_OFFSET(0x11148960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET UNITYSDK_OFFSET(0x11148C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET UNITYSDK_OFFSET(0x11148E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET UNITYSDK_OFFSET(0x11149190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET UNITYSDK_OFFSET(0x11149470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET UNITYSDK_OFFSET(0x111496A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET UNITYSDK_OFFSET(0x11116A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET UNITYSDK_OFFSET(0x111499C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET UNITYSDK_OFFSET(0x11149BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET UNITYSDK_OFFSET(0x11149ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET UNITYSDK_OFFSET(0x1114A1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET UNITYSDK_OFFSET(0x1114A3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET UNITYSDK_OFFSET(0x1114A700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET UNITYSDK_OFFSET(0x1114A930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET UNITYSDK_OFFSET(0x1114ABD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET UNITYSDK_OFFSET(0x1114AEB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET UNITYSDK_OFFSET(0x1114B0E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET UNITYSDK_OFFSET(0x11116F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET UNITYSDK_OFFSET(0x1114B400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET UNITYSDK_OFFSET(0x1114B6E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET UNITYSDK_OFFSET(0x1114B910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET UNITYSDK_OFFSET(0x1114BC30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET UNITYSDK_OFFSET(0x1114BF10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET UNITYSDK_OFFSET(0x1114C140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET UNITYSDK_OFFSET(0x1114C460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET UNITYSDK_OFFSET(0x1114C740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET UNITYSDK_OFFSET(0x1114C970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET UNITYSDK_OFFSET(0x1114CC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET UNITYSDK_OFFSET(0x11117410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET UNITYSDK_OFFSET(0x1114CF70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET UNITYSDK_OFFSET(0x1114D1A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET UNITYSDK_OFFSET(0x1114D4C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET UNITYSDK_OFFSET(0x1114D7A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET UNITYSDK_OFFSET(0x1114D9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET UNITYSDK_OFFSET(0x1114DCF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET UNITYSDK_OFFSET(0x1114DFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET UNITYSDK_OFFSET(0x1114E260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET UNITYSDK_OFFSET(0x1114E490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET UNITYSDK_OFFSET(0x1114E770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET UNITYSDK_OFFSET(0x111177E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET UNITYSDK_OFFSET(0x1114E9A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET UNITYSDK_OFFSET(0x1114ECC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET UNITYSDK_OFFSET(0x1114EFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET UNITYSDK_OFFSET(0x1114F1D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET UNITYSDK_OFFSET(0x1114F4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET UNITYSDK_OFFSET(0x1114F7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET UNITYSDK_OFFSET(0x1114FA00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET UNITYSDK_OFFSET(0x1114FD20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET UNITYSDK_OFFSET(0x1114FFE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET UNITYSDK_OFFSET(0x111502A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET UNITYSDK_OFFSET(0x11117C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET UNITYSDK_OFFSET(0x11150580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET UNITYSDK_OFFSET(0x111507B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET UNITYSDK_OFFSET(0x11150AD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET UNITYSDK_OFFSET(0x11150DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET UNITYSDK_OFFSET(0x11150FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET UNITYSDK_OFFSET(0x11151300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET UNITYSDK_OFFSET(0x11151650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET UNITYSDK_OFFSET(0x111518F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET UNITYSDK_OFFSET(0x11151D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET UNITYSDK_OFFSET(0x11152000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET UNITYSDK_OFFSET(0x11117F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET UNITYSDK_OFFSET(0x11152240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET UNITYSDK_OFFSET(0x11152570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET UNITYSDK_OFFSET(0x11152880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET UNITYSDK_OFFSET(0x11152C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET UNITYSDK_OFFSET(0x11152F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET UNITYSDK_OFFSET(0x11153130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET UNITYSDK_OFFSET(0x11153450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET UNITYSDK_OFFSET(0x11153730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET UNITYSDK_OFFSET(0x11153960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET UNITYSDK_OFFSET(0x11153C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET UNITYSDK_OFFSET(0x11118230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET UNITYSDK_OFFSET(0x11153F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET UNITYSDK_OFFSET(0x11154190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET UNITYSDK_OFFSET(0x111544B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET UNITYSDK_OFFSET(0x11154790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET UNITYSDK_OFFSET(0x111549C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET UNITYSDK_OFFSET(0x11154CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET UNITYSDK_OFFSET(0x11154FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET UNITYSDK_OFFSET(0x111551F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET UNITYSDK_OFFSET(0x11155510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET UNITYSDK_OFFSET(0x11155820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET UNITYSDK_OFFSET(0x11118530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET UNITYSDK_OFFSET(0x11111130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET UNITYSDK_OFFSET(0x11155AA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET UNITYSDK_OFFSET(0x11155CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET UNITYSDK_OFFSET(0x11155F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET UNITYSDK_OFFSET(0x11156250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET UNITYSDK_OFFSET(0x11156530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET UNITYSDK_OFFSET(0x11156760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET UNITYSDK_OFFSET(0x11156A80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET UNITYSDK_OFFSET(0x11156D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET UNITYSDK_OFFSET(0x11156F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET UNITYSDK_OFFSET(0x111572B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET UNITYSDK_OFFSET(0x11118720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET UNITYSDK_OFFSET(0x11157530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET UNITYSDK_OFFSET(0x11157810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET UNITYSDK_OFFSET(0x11157A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET UNITYSDK_OFFSET(0x11157D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET UNITYSDK_OFFSET(0x11158040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET UNITYSDK_OFFSET(0x11158270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET UNITYSDK_OFFSET(0x11158590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET UNITYSDK_OFFSET(0x11158870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET UNITYSDK_OFFSET(0x11158AA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET UNITYSDK_OFFSET(0x11158DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET UNITYSDK_OFFSET(0x11118950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET UNITYSDK_OFFSET(0x111590A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET UNITYSDK_OFFSET(0x111592D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET UNITYSDK_OFFSET(0x111595F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET UNITYSDK_OFFSET(0x11159820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET UNITYSDK_OFFSET(0x11159B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET UNITYSDK_OFFSET(0x11159D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET UNITYSDK_OFFSET(0x1115A050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET UNITYSDK_OFFSET(0x1115A330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET UNITYSDK_OFFSET(0x1115A560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET UNITYSDK_OFFSET(0x1115A880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET UNITYSDK_OFFSET(0x11118B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET UNITYSDK_OFFSET(0x1115AB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET UNITYSDK_OFFSET(0x1115AD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET UNITYSDK_OFFSET(0x1115B0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET UNITYSDK_OFFSET(0x1115B390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET UNITYSDK_OFFSET(0x1115B5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET UNITYSDK_OFFSET(0x1115B8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET UNITYSDK_OFFSET(0x1115BB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET UNITYSDK_OFFSET(0x1115BDF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET UNITYSDK_OFFSET(0x1115C020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET UNITYSDK_OFFSET(0x1115C340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET UNITYSDK_OFFSET(0x11118D80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET UNITYSDK_OFFSET(0x1115C590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET UNITYSDK_OFFSET(0x1115C870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET UNITYSDK_OFFSET(0x1115CAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET UNITYSDK_OFFSET(0x1115CDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET UNITYSDK_OFFSET(0x1115D0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET UNITYSDK_OFFSET(0x1115D310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET UNITYSDK_OFFSET(0x1115D670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET UNITYSDK_OFFSET(0x1115D950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET UNITYSDK_OFFSET(0x1115DB80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET UNITYSDK_OFFSET(0x1115DEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET UNITYSDK_OFFSET(0x111190B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET UNITYSDK_OFFSET(0x1115E180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET UNITYSDK_OFFSET(0x1115E3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET UNITYSDK_OFFSET(0x1115E6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET UNITYSDK_OFFSET(0x1115E9B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET UNITYSDK_OFFSET(0x1115EBE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET UNITYSDK_OFFSET(0x1115EF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET UNITYSDK_OFFSET(0x1115F1E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET UNITYSDK_OFFSET(0x1115F410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET UNITYSDK_OFFSET(0x1115F730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET UNITYSDK_OFFSET(0x1115FA10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET UNITYSDK_OFFSET(0x11119350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET UNITYSDK_OFFSET(0x1115FC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET UNITYSDK_OFFSET(0x1115FF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET UNITYSDK_OFFSET(0x11160240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET UNITYSDK_OFFSET(0x11160470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET UNITYSDK_OFFSET(0x11160790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET UNITYSDK_OFFSET(0x111609C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET UNITYSDK_OFFSET(0x11160BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET UNITYSDK_OFFSET(0x11160ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET UNITYSDK_OFFSET(0x11161100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET UNITYSDK_OFFSET(0x11161420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET UNITYSDK_OFFSET(0x11119660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET UNITYSDK_OFFSET(0x11161700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET UNITYSDK_OFFSET(0x11161930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET UNITYSDK_OFFSET(0x11161C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET UNITYSDK_OFFSET(0x11161F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET UNITYSDK_OFFSET(0x11162160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET UNITYSDK_OFFSET(0x11162480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET UNITYSDK_OFFSET(0x11162760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET UNITYSDK_OFFSET(0x11162990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET UNITYSDK_OFFSET(0x11162CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET UNITYSDK_OFFSET(0x11162F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET UNITYSDK_OFFSET(0x111198D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET UNITYSDK_OFFSET(0x111631B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET UNITYSDK_OFFSET(0x11163560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET UNITYSDK_OFFSET(0x11163880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET UNITYSDK_OFFSET(0x11163B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET UNITYSDK_OFFSET(0x11163D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET UNITYSDK_OFFSET(0x111640B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET UNITYSDK_OFFSET(0x11164390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET UNITYSDK_OFFSET(0x111645C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET UNITYSDK_OFFSET(0x111648E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET UNITYSDK_OFFSET(0x11164BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET UNITYSDK_OFFSET(0x11119B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET UNITYSDK_OFFSET(0x11164DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET UNITYSDK_OFFSET(0x11165110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET UNITYSDK_OFFSET(0x11165500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET UNITYSDK_OFFSET(0x11165750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET UNITYSDK_OFFSET(0x11165980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET UNITYSDK_OFFSET(0x11165CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET UNITYSDK_OFFSET(0x11165FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET UNITYSDK_OFFSET(0x111662D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET UNITYSDK_OFFSET(0x11166500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET UNITYSDK_OFFSET(0x11166820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET UNITYSDK_OFFSET(0x11119D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET UNITYSDK_OFFSET(0x11111360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET UNITYSDK_OFFSET(0x11166B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET UNITYSDK_OFFSET(0x11166D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET UNITYSDK_OFFSET(0x11167050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET UNITYSDK_OFFSET(0x111672F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET UNITYSDK_OFFSET(0x111675D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET UNITYSDK_OFFSET(0x11167800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET UNITYSDK_OFFSET(0x11167B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET UNITYSDK_OFFSET(0x11167EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET UNITYSDK_OFFSET(0x11168190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET UNITYSDK_OFFSET(0x111683C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET UNITYSDK_OFFSET(0x1111A050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET UNITYSDK_OFFSET(0x111686E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET UNITYSDK_OFFSET(0x111689C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET UNITYSDK_OFFSET(0x11168BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET UNITYSDK_OFFSET(0x11168F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET UNITYSDK_OFFSET(0x111691F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET UNITYSDK_OFFSET(0x11169420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET UNITYSDK_OFFSET(0x11169740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET UNITYSDK_OFFSET(0x11169A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET UNITYSDK_OFFSET(0x11169C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET UNITYSDK_OFFSET(0x11169F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET UNITYSDK_OFFSET(0x1111A2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET UNITYSDK_OFFSET(0x1116A1C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET UNITYSDK_OFFSET(0x1116A410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET UNITYSDK_OFFSET(0x1116A660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET UNITYSDK_OFFSET(0x1116A8B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET UNITYSDK_OFFSET(0x1116AB00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET UNITYSDK_OFFSET(0x1116AD50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET UNITYSDK_OFFSET(0x1116AFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET UNITYSDK_OFFSET(0x1116B1F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET UNITYSDK_OFFSET(0x1116B440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET UNITYSDK_OFFSET(0x1116B690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET UNITYSDK_OFFSET(0x1111A620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET UNITYSDK_OFFSET(0x1116B8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET UNITYSDK_OFFSET(0x1116BB30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET UNITYSDK_OFFSET(0x1116BD80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET UNITYSDK_OFFSET(0x1116BFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET UNITYSDK_OFFSET(0x1116C220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET UNITYSDK_OFFSET(0x1116C470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET UNITYSDK_OFFSET(0x1116C6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET UNITYSDK_OFFSET(0x1116C910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET UNITYSDK_OFFSET(0x1116CBF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET UNITYSDK_OFFSET(0x1116CE20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET UNITYSDK_OFFSET(0x1111A9C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET UNITYSDK_OFFSET(0x1116D140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET UNITYSDK_OFFSET(0x1116D420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET UNITYSDK_OFFSET(0x1116D650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET UNITYSDK_OFFSET(0x1116D970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET UNITYSDK_OFFSET(0x1116DC50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET UNITYSDK_OFFSET(0x1116DE80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET UNITYSDK_OFFSET(0x1116E160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET UNITYSDK_OFFSET(0x1116E390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET UNITYSDK_OFFSET(0x1116E6B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET UNITYSDK_OFFSET(0x1116E990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET UNITYSDK_OFFSET(0x1111AD00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET UNITYSDK_OFFSET(0x1116EBC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET UNITYSDK_OFFSET(0x1116EEE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET UNITYSDK_OFFSET(0x1116F1C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET UNITYSDK_OFFSET(0x1116F3F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET UNITYSDK_OFFSET(0x1116F710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET UNITYSDK_OFFSET(0x1116F9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET UNITYSDK_OFFSET(0x1116FC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET UNITYSDK_OFFSET(0x1116FF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET UNITYSDK_OFFSET(0x11170200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET UNITYSDK_OFFSET(0x11170430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET UNITYSDK_OFFSET(0x1111AFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET UNITYSDK_OFFSET(0x11170750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET UNITYSDK_OFFSET(0x11170A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET UNITYSDK_OFFSET(0x11170C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET UNITYSDK_OFFSET(0x11170F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET UNITYSDK_OFFSET(0x11171260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET UNITYSDK_OFFSET(0x11171490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET UNITYSDK_OFFSET(0x111717B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET UNITYSDK_OFFSET(0x11171A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET UNITYSDK_OFFSET(0x11171CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET UNITYSDK_OFFSET(0x11171FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET UNITYSDK_OFFSET(0x1111B1D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET UNITYSDK_OFFSET(0x111722C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET UNITYSDK_OFFSET(0x111724F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET UNITYSDK_OFFSET(0x11172810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET UNITYSDK_OFFSET(0x11172AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET UNITYSDK_OFFSET(0x11172D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET UNITYSDK_OFFSET(0x11173040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET UNITYSDK_OFFSET(0x11173350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET UNITYSDK_OFFSET(0x111735B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET UNITYSDK_OFFSET(0x11173950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET UNITYSDK_OFFSET(0x11173C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET UNITYSDK_OFFSET(0x1111B470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET UNITYSDK_OFFSET(0x11173E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET UNITYSDK_OFFSET(0x11174180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET UNITYSDK_OFFSET(0x11174460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET UNITYSDK_OFFSET(0x11174690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET UNITYSDK_OFFSET(0x111749B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET UNITYSDK_OFFSET(0x11174C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET UNITYSDK_OFFSET(0x11174F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET UNITYSDK_OFFSET(0x11175160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET UNITYSDK_OFFSET(0x11175480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET UNITYSDK_OFFSET(0x11175760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET UNITYSDK_OFFSET(0x1111B6A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET UNITYSDK_OFFSET(0x11175990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET UNITYSDK_OFFSET(0x11175CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET UNITYSDK_OFFSET(0x11175F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET UNITYSDK_OFFSET(0x111761C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET UNITYSDK_OFFSET(0x111764E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET UNITYSDK_OFFSET(0x111767C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET UNITYSDK_OFFSET(0x111769F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET UNITYSDK_OFFSET(0x11176D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET UNITYSDK_OFFSET(0x11176FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET UNITYSDK_OFFSET(0x11177220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET UNITYSDK_OFFSET(0x1111B940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET UNITYSDK_OFFSET(0x11111640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET UNITYSDK_OFFSET(0x11177540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET UNITYSDK_OFFSET(0x11177820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET UNITYSDK_OFFSET(0x11177A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET UNITYSDK_OFFSET(0x11177D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET UNITYSDK_OFFSET(0x11178050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET UNITYSDK_OFFSET(0x11178280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET UNITYSDK_OFFSET(0x111BFD00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET UNITYSDK_OFFSET(0x111C0240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET UNITYSDK_OFFSET(0x111C0470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET UNITYSDK_OFFSET(0x111C0820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET UNITYSDK_OFFSET(0x1111BBF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET UNITYSDK_OFFSET(0x111C0B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET UNITYSDK_OFFSET(0x111C0D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET UNITYSDK_OFFSET(0x111C1050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET UNITYSDK_OFFSET(0x111C1330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET UNITYSDK_OFFSET(0x111C1560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET UNITYSDK_OFFSET(0x111C1880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET UNITYSDK_OFFSET(0x111C1B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET UNITYSDK_OFFSET(0x111C1D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET UNITYSDK_OFFSET(0x111C20B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET UNITYSDK_OFFSET(0x111C2390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET UNITYSDK_OFFSET(0x1111BE50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET UNITYSDK_OFFSET(0x111C25C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET UNITYSDK_OFFSET(0x111C28E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET UNITYSDK_OFFSET(0x111C2BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET UNITYSDK_OFFSET(0x111C2DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET UNITYSDK_OFFSET(0x111C3110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET UNITYSDK_OFFSET(0x111C33F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET UNITYSDK_OFFSET(0x111C3620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET UNITYSDK_OFFSET(0x111C3940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET UNITYSDK_OFFSET(0x111C3B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET UNITYSDK_OFFSET(0x111C3DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET UNITYSDK_OFFSET(0x1111C080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET UNITYSDK_OFFSET(0x111C4080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET UNITYSDK_OFFSET(0x111C4360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET UNITYSDK_OFFSET(0x111C45B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET UNITYSDK_OFFSET(0x111C4800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET UNITYSDK_OFFSET(0x111C4AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET UNITYSDK_OFFSET(0x111C4D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET UNITYSDK_OFFSET(0x111C5030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET UNITYSDK_OFFSET(0x111C53D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET UNITYSDK_OFFSET(0x111C56B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET UNITYSDK_OFFSET(0x111C58E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET UNITYSDK_OFFSET(0x1111C360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET UNITYSDK_OFFSET(0x111C5C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET UNITYSDK_OFFSET(0x111C5EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET UNITYSDK_OFFSET(0x111C6110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET UNITYSDK_OFFSET(0x111C6430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET UNITYSDK_OFFSET(0x111C6710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET UNITYSDK_OFFSET(0x111C6940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET UNITYSDK_OFFSET(0x111C6C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET UNITYSDK_OFFSET(0x111C6F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET UNITYSDK_OFFSET(0x111C7170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET UNITYSDK_OFFSET(0x111C7490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET UNITYSDK_OFFSET(0x1111C5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET UNITYSDK_OFFSET(0x111C7770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET UNITYSDK_OFFSET(0x111C79A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET UNITYSDK_OFFSET(0x111C7CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET UNITYSDK_OFFSET(0x111C7FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET UNITYSDK_OFFSET(0x111C81D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET UNITYSDK_OFFSET(0x111C84F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET UNITYSDK_OFFSET(0x111C8720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET UNITYSDK_OFFSET(0x111C8A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET UNITYSDK_OFFSET(0x111C8C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET UNITYSDK_OFFSET(0x111C8F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET UNITYSDK_OFFSET(0x1111C830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET UNITYSDK_OFFSET(0x111C94D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET UNITYSDK_OFFSET(0x111C97B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET UNITYSDK_OFFSET(0x111C99E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET UNITYSDK_OFFSET(0x111C9D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET UNITYSDK_OFFSET(0x111C9FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET UNITYSDK_OFFSET(0x111CA210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET UNITYSDK_OFFSET(0x111CA530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET UNITYSDK_OFFSET(0x111CA760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET UNITYSDK_OFFSET(0x111CAA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET UNITYSDK_OFFSET(0x111CAD60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET UNITYSDK_OFFSET(0x1111CAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET UNITYSDK_OFFSET(0x111CAF90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET UNITYSDK_OFFSET(0x111CB2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET UNITYSDK_OFFSET(0x111CB590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET UNITYSDK_OFFSET(0x111CB7C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET UNITYSDK_OFFSET(0x111CBAE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET UNITYSDK_OFFSET(0x111CBE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET UNITYSDK_OFFSET(0x111CC210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET UNITYSDK_OFFSET(0x111CC4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET UNITYSDK_OFFSET(0x111CC720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET UNITYSDK_OFFSET(0x111CCA40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET UNITYSDK_OFFSET(0x1111CD60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET UNITYSDK_OFFSET(0x111CCD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET UNITYSDK_OFFSET(0x111CD030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET UNITYSDK_OFFSET(0x111CD410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET UNITYSDK_OFFSET(0x111CD6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET UNITYSDK_OFFSET(0x111CD920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET UNITYSDK_OFFSET(0x111CDC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET UNITYSDK_OFFSET(0x111CDE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET UNITYSDK_OFFSET(0x111CE0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET UNITYSDK_OFFSET(0x111CE2D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET UNITYSDK_OFFSET(0x111CE500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET UNITYSDK_OFFSET(0x1111D020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET UNITYSDK_OFFSET(0x111CE7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET UNITYSDK_OFFSET(0x111CEA10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET UNITYSDK_OFFSET(0x111CED30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET UNITYSDK_OFFSET(0x111CF1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET UNITYSDK_OFFSET(0x111CF490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET UNITYSDK_OFFSET(0x111CF6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET UNITYSDK_OFFSET(0x111CF9E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET UNITYSDK_OFFSET(0x111CFCC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET UNITYSDK_OFFSET(0x111CFEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET UNITYSDK_OFFSET(0x111D0210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET UNITYSDK_OFFSET(0x1111D350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET UNITYSDK_OFFSET(0x111118B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET UNITYSDK_OFFSET(0x111D04F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET UNITYSDK_OFFSET(0x111D0720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET UNITYSDK_OFFSET(0x111D0A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET UNITYSDK_OFFSET(0x111D0C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET UNITYSDK_OFFSET(0x111D0F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET UNITYSDK_OFFSET(0x111D1180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET UNITYSDK_OFFSET(0x111D14A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET UNITYSDK_OFFSET(0x111D1780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET UNITYSDK_OFFSET(0x111D19B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET UNITYSDK_OFFSET(0x111D1CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET UNITYSDK_OFFSET(0x1111D6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET UNITYSDK_OFFSET(0x111D1FB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET UNITYSDK_OFFSET(0x111D21E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET UNITYSDK_OFFSET(0x111D2500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET UNITYSDK_OFFSET(0x111D27E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET UNITYSDK_OFFSET(0x111D2A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET UNITYSDK_OFFSET(0x111D2D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET UNITYSDK_OFFSET(0x111D3010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET UNITYSDK_OFFSET(0x111D3240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET UNITYSDK_OFFSET(0x111D3560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET UNITYSDK_OFFSET(0x111D3840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET UNITYSDK_OFFSET(0x1111D920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET UNITYSDK_OFFSET(0x111D3A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET UNITYSDK_OFFSET(0x111D3D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET UNITYSDK_OFFSET(0x111D4070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET UNITYSDK_OFFSET(0x111D42A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET UNITYSDK_OFFSET(0x111D45C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET UNITYSDK_OFFSET(0x111D48A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET UNITYSDK_OFFSET(0x111D4AD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET UNITYSDK_OFFSET(0x111D4DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET UNITYSDK_OFFSET(0x111D50B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET UNITYSDK_OFFSET(0x111D5390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET UNITYSDK_OFFSET(0x1111DB50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET UNITYSDK_OFFSET(0x111D55C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET UNITYSDK_OFFSET(0x111D58E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET UNITYSDK_OFFSET(0x111D5BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET UNITYSDK_OFFSET(0x111D5DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET UNITYSDK_OFFSET(0x111D6110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET UNITYSDK_OFFSET(0x111D63F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET UNITYSDK_OFFSET(0x111D6620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET UNITYSDK_OFFSET(0x111D6940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET UNITYSDK_OFFSET(0x111D6C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET UNITYSDK_OFFSET(0x111D6E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET UNITYSDK_OFFSET(0x1111DE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET UNITYSDK_OFFSET(0x111D7170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET UNITYSDK_OFFSET(0x111D7450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET UNITYSDK_OFFSET(0x111D7680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET UNITYSDK_OFFSET(0x111D79A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET UNITYSDK_OFFSET(0x111D7C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET UNITYSDK_OFFSET(0x111D7EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET UNITYSDK_OFFSET(0x111D81D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET UNITYSDK_OFFSET(0x111D84F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET UNITYSDK_OFFSET(0x111D8800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET UNITYSDK_OFFSET(0x111D8AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET UNITYSDK_OFFSET(0x1111E110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET UNITYSDK_OFFSET(0x111D8D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET UNITYSDK_OFFSET(0x111D9030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET UNITYSDK_OFFSET(0x111D9310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET UNITYSDK_OFFSET(0x111D9540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET UNITYSDK_OFFSET(0x111D9860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET UNITYSDK_OFFSET(0x111D9B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET UNITYSDK_OFFSET(0x111D9D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET UNITYSDK_OFFSET(0x111DA090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET UNITYSDK_OFFSET(0x111DA3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET UNITYSDK_OFFSET(0x111DA660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET UNITYSDK_OFFSET(0x1111E340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET UNITYSDK_OFFSET(0x111DAA10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET UNITYSDK_OFFSET(0x111DACF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET UNITYSDK_OFFSET(0x111DAF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET UNITYSDK_OFFSET(0x111DB240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET UNITYSDK_OFFSET(0x111DB520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET UNITYSDK_OFFSET(0x111DB750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET UNITYSDK_OFFSET(0x111DBA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET UNITYSDK_OFFSET(0x111DBD50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET UNITYSDK_OFFSET(0x111DBF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET UNITYSDK_OFFSET(0x111DC2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET UNITYSDK_OFFSET(0x1111E5E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET UNITYSDK_OFFSET(0x111DC580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET UNITYSDK_OFFSET(0x111DC7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET UNITYSDK_OFFSET(0x111DCAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET UNITYSDK_OFFSET(0x111DCDB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET UNITYSDK_OFFSET(0x111DCFE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET UNITYSDK_OFFSET(0x111DD300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET UNITYSDK_OFFSET(0x111DD5E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET UNITYSDK_OFFSET(0x111DD810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET UNITYSDK_OFFSET(0x111DDB30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET UNITYSDK_OFFSET(0x111DDE10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET UNITYSDK_OFFSET(0x1111E8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET UNITYSDK_OFFSET(0x111DE040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET UNITYSDK_OFFSET(0x111DE360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET UNITYSDK_OFFSET(0x111DE640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET UNITYSDK_OFFSET(0x111DE870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET UNITYSDK_OFFSET(0x111DEB90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET UNITYSDK_OFFSET(0x111DEE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET UNITYSDK_OFFSET(0x111DF0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET UNITYSDK_OFFSET(0x111DF3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET UNITYSDK_OFFSET(0x111DF6A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET UNITYSDK_OFFSET(0x111DF8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET UNITYSDK_OFFSET(0x1111EC70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET UNITYSDK_OFFSET(0x111DFBF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET UNITYSDK_OFFSET(0x111DFEE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET UNITYSDK_OFFSET(0x111E01C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET UNITYSDK_OFFSET(0x111E03F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET UNITYSDK_OFFSET(0x111E0710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET UNITYSDK_OFFSET(0x111E0A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET UNITYSDK_OFFSET(0x111E0CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET UNITYSDK_OFFSET(0x111E1090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET UNITYSDK_OFFSET(0x111E1350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET UNITYSDK_OFFSET(0x111E1610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET UNITYSDK_OFFSET(0x1111EEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET UNITYSDK_OFFSET(0x11111B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET UNITYSDK_OFFSET(0x111E18F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET UNITYSDK_OFFSET(0x111E1B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET UNITYSDK_OFFSET(0x111E1E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET UNITYSDK_OFFSET(0x111E2070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET UNITYSDK_OFFSET(0x111E2350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET UNITYSDK_OFFSET(0x111E2580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET UNITYSDK_OFFSET(0x111E28A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET UNITYSDK_OFFSET(0x111E2BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET UNITYSDK_OFFSET(0x111E2DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET UNITYSDK_OFFSET(0x111E3140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET UNITYSDK_OFFSET(0x1111F0D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET UNITYSDK_OFFSET(0x111E3420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET UNITYSDK_OFFSET(0x111E3650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET UNITYSDK_OFFSET(0x111E3970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET UNITYSDK_OFFSET(0x111E3C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET UNITYSDK_OFFSET(0x111E3E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET UNITYSDK_OFFSET(0x111E41A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET UNITYSDK_OFFSET(0x111E43F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET UNITYSDK_OFFSET(0x111E46D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET UNITYSDK_OFFSET(0x111E4900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET UNITYSDK_OFFSET(0x111E4C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET UNITYSDK_OFFSET(0x1111F300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET UNITYSDK_OFFSET(0x111E4E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET UNITYSDK_OFFSET(0x111E5170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET UNITYSDK_OFFSET(0x111E5450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET UNITYSDK_OFFSET(0x111E5680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET UNITYSDK_OFFSET(0x111E59A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET UNITYSDK_OFFSET(0x111E5C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET UNITYSDK_OFFSET(0x111E5EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET UNITYSDK_OFFSET(0x111E61D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET UNITYSDK_OFFSET(0x111E64B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET UNITYSDK_OFFSET(0x111E66E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET UNITYSDK_OFFSET(0x1111F690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET UNITYSDK_OFFSET(0x111E6A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET UNITYSDK_OFFSET(0x111E6D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET UNITYSDK_OFFSET(0x111E6F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET UNITYSDK_OFFSET(0x111E72A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET UNITYSDK_OFFSET(0x111E75F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET UNITYSDK_OFFSET(0x111E7890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET UNITYSDK_OFFSET(0x111E7CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET UNITYSDK_OFFSET(0x111E7F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET UNITYSDK_OFFSET(0x111E81C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET UNITYSDK_OFFSET(0x111E84E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET UNITYSDK_OFFSET(0x1111FA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET UNITYSDK_OFFSET(0x111E87F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET UNITYSDK_OFFSET(0x111E8A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET UNITYSDK_OFFSET(0x111E8DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET UNITYSDK_OFFSET(0x111E9010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET UNITYSDK_OFFSET(0x111E9240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET UNITYSDK_OFFSET(0x111E9550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET UNITYSDK_OFFSET(0x111E9890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET UNITYSDK_OFFSET(0x111E9B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET UNITYSDK_OFFSET(0x111E9F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET UNITYSDK_OFFSET(0x111EA2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET UNITYSDK_OFFSET(0x1111FC70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET UNITYSDK_OFFSET(0x111EA4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET UNITYSDK_OFFSET(0x111EA810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET UNITYSDK_OFFSET(0x111EAB50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET UNITYSDK_OFFSET(0x111EAE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET UNITYSDK_OFFSET(0x111EB0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET UNITYSDK_OFFSET(0x111EB3F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET UNITYSDK_OFFSET(0x111EB730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET UNITYSDK_OFFSET(0x111EBA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET UNITYSDK_OFFSET(0x111EBCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET UNITYSDK_OFFSET(0x111EC000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET UNITYSDK_OFFSET(0x1111FFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET UNITYSDK_OFFSET(0x111EC340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET UNITYSDK_OFFSET(0x111EC680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET UNITYSDK_OFFSET(0x111EC900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET UNITYSDK_OFFSET(0x111ECC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET UNITYSDK_OFFSET(0x111ECFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET UNITYSDK_OFFSET(0x111ED330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET UNITYSDK_OFFSET(0x111ED560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET UNITYSDK_OFFSET(0x111ED890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET UNITYSDK_OFFSET(0x111EDBD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET UNITYSDK_OFFSET(0x111EDF10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET UNITYSDK_OFFSET(0x11120330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET UNITYSDK_OFFSET(0x111EE240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET UNITYSDK_OFFSET(0x111EE580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET UNITYSDK_OFFSET(0x111EE8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET UNITYSDK_OFFSET(0x111EEAF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET UNITYSDK_OFFSET(0x111EEE20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET UNITYSDK_OFFSET(0x111EF160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET UNITYSDK_OFFSET(0x111EF4A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET UNITYSDK_OFFSET(0x111EF6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET UNITYSDK_OFFSET(0x111EFA30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET UNITYSDK_OFFSET(0x111EFD70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET UNITYSDK_OFFSET(0x111205D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET UNITYSDK_OFFSET(0x111F00B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET UNITYSDK_OFFSET(0x111F02E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET UNITYSDK_OFFSET(0x111F0640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET UNITYSDK_OFFSET(0x111F0980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET UNITYSDK_OFFSET(0x111F0CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET UNITYSDK_OFFSET(0x111F0FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET UNITYSDK_OFFSET(0x111F1330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET UNITYSDK_OFFSET(0x111F1670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET UNITYSDK_OFFSET(0x111F18A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET UNITYSDK_OFFSET(0x111F1BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET UNITYSDK_OFFSET(0x11120960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET UNITYSDK_OFFSET(0x111F1F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET UNITYSDK_OFFSET(0x111F2250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET UNITYSDK_OFFSET(0x111F2480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET UNITYSDK_OFFSET(0x111F27E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET UNITYSDK_OFFSET(0x111F2B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET UNITYSDK_OFFSET(0x111F2E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET UNITYSDK_OFFSET(0x111F3090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET UNITYSDK_OFFSET(0x111F33C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET UNITYSDK_OFFSET(0x111F3700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET UNITYSDK_OFFSET(0x111F3A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET UNITYSDK_OFFSET(0x11120CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET UNITYSDK_OFFSET(0x11111DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET UNITYSDK_OFFSET(0x111F3C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET UNITYSDK_OFFSET(0x111F3FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET UNITYSDK_OFFSET(0x111F42E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET UNITYSDK_OFFSET(0x111F4620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET UNITYSDK_OFFSET(0x111F4950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET UNITYSDK_OFFSET(0x111F4C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET UNITYSDK_OFFSET(0x111F4FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET UNITYSDK_OFFSET(0x111F5270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET UNITYSDK_OFFSET(0x111F55A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET UNITYSDK_OFFSET(0x111F5960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET UNITYSDK_OFFSET(0x111210F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET UNITYSDK_OFFSET(0x111F5D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET UNITYSDK_OFFSET(0x111F5F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET UNITYSDK_OFFSET(0x111F62B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET UNITYSDK_OFFSET(0x111F65F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET UNITYSDK_OFFSET(0x111F6930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET UNITYSDK_OFFSET(0x111F6BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP916_OFFSET UNITYSDK_OFFSET(0x111F6F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP917_OFFSET UNITYSDK_OFFSET(0x111F72C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP918_OFFSET UNITYSDK_OFFSET(0x111F7680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP919_OFFSET UNITYSDK_OFFSET(0x111F7960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET UNITYSDK_OFFSET(0x11121320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP920_OFFSET UNITYSDK_OFFSET(0x111F7B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP921_OFFSET UNITYSDK_OFFSET(0x111F7EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP922_OFFSET UNITYSDK_OFFSET(0x111F80E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP923_OFFSET UNITYSDK_OFFSET(0x111F83C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP924_OFFSET UNITYSDK_OFFSET(0x111F85F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP925_OFFSET UNITYSDK_OFFSET(0x111F8910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP926_OFFSET UNITYSDK_OFFSET(0x111F8D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP927_OFFSET UNITYSDK_OFFSET(0x111F8F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP928_OFFSET UNITYSDK_OFFSET(0x111F9250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP929_OFFSET UNITYSDK_OFFSET(0x111F9480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET UNITYSDK_OFFSET(0x11121720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP930_OFFSET UNITYSDK_OFFSET(0x111F9700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP931_OFFSET UNITYSDK_OFFSET(0x111F9980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP932_OFFSET UNITYSDK_OFFSET(0x111F9BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP933_OFFSET UNITYSDK_OFFSET(0x111F9DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP934_OFFSET UNITYSDK_OFFSET(0x111FA100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP935_OFFSET UNITYSDK_OFFSET(0x111FA3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP936_OFFSET UNITYSDK_OFFSET(0x111FA610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP937_OFFSET UNITYSDK_OFFSET(0x111FA8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP938_OFFSET UNITYSDK_OFFSET(0x111FAB20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP939_OFFSET UNITYSDK_OFFSET(0x111FAE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET UNITYSDK_OFFSET(0x111219C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP940_OFFSET UNITYSDK_OFFSET(0x111FB150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP941_OFFSET UNITYSDK_OFFSET(0x111FB380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP942_OFFSET UNITYSDK_OFFSET(0x111FB640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP943_OFFSET UNITYSDK_OFFSET(0x111FB870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP944_OFFSET UNITYSDK_OFFSET(0x111FBBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP945_OFFSET UNITYSDK_OFFSET(0x111FBDE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP946_OFFSET UNITYSDK_OFFSET(0x111FC110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP947_OFFSET UNITYSDK_OFFSET(0x111FC340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP948_OFFSET UNITYSDK_OFFSET(0x111FC590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP949_OFFSET UNITYSDK_OFFSET(0x111FC830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET UNITYSDK_OFFSET(0x11121D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET UNITYSDK_OFFSET(0x111220E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET UNITYSDK_OFFSET(0x11122330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET UNITYSDK_OFFSET(0x11122560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET UNITYSDK_OFFSET(0x11122890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET UNITYSDK_OFFSET(0x11122C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET UNITYSDK_OFFSET(0x11112040)

namespace XLua
{
	inline static constexpr unsigned int DelegateBridge_TypeDefinitionIndex = 46298;

	class DelegateBridge : public ::XLua::DelegateBridgeBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x6B5E0);
		}
		static ::Il2CppArray<::XLua::DelegateBridge*>** StaticGet_DelegateBridgeList()
		{
			return (::Il2CppArray<::XLua::DelegateBridge*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x6B5E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SubMissionExcelTable_IndexKey_RPG_GameCore_SubMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnGeneralNotifyDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_IntPtr()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerEnterHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGridData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerExitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_UIBubbleManager_RPG_Client_UIBubbleItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint_RPG_PoolList_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Transform_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11ED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11ED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_LeaveFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_TMPro_TMP_TextInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TriggerEffectParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaEnv_CustomLoader()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_AllChunkDownloadComplete()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillTreeExcelTable_IndexKey_RPG_GameCore_AvatarSkillTreeRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12000);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IMapObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12008);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12010);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12018);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateSingle()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12020);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12028);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12030);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12038);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_IComparer_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12040);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12048);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleTask()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12050);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12058);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGoReceiveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12060);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12068);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12070);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12078);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_MemberFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_Assembly_string_bool_System_Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2Int_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FiveDimGameTransferScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_RPG_GameCore_GameEntity_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet3_XLua_LuaTable_int_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IMoveHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState_RPG_GameCore_EntityReviveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_VirtualRankChimeraTeam_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Cancel2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PlaneEventExcelTable_IndexKey_RPG_GameCore_PlaneEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SpecialAvatarExcelTable_IndexKey_RPG_GameCore_SpecialAvatarRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightConsumableItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnServerConnectedDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDropHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_EnterFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IBeginDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkCardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_AssemblyName_System_Reflection_Assembly()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_TeamType_RPG_GameCore_TeamType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchPlayRecord()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDown2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournHexData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TriggerPerformanceEndParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_RewardExcelTable_IndexKey_RPG_GameCore_RewardRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_DiceCombatPerformanceBattleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_UI_ILayoutElement_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightCone3D_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CharacterInputData_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MazeBuffExcelTable_IndexKey_RPG_GameCore_MazeBuffRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12590);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISelectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopFlexibleGridView_int_SuperScrollView_LoopFlexibleGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ChessRogueBoardCellDataItem_RPG_Client_MonoRogueHexChessBoardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaDLL_lua_CSFunction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnNewParticleEmissionEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_Promises_ExceptionEventArgs()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopGridView_int_int_int_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarPromotionExcelTable_IndexKey_RPG_GameCore_AvatarPromotionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_SpriteAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_ActivityIdleLive_IdleLiveProtocolEventArgs()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_GraphEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_RPG_GameCore_SubMissionState_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchCancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_OverUIElementHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_RPG_GameCore_FixPoint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PSSessionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_EventCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_AdvertisingIdentifierCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IUpdateSelectedHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListView2_int_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_SkeletonRendererDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IInitializePotentialDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_RectTransform_ReapplyDrivenProperties()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TextmapExcelTable_IndexKey_RPG_GameCore_TextmapRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIFollow3DTarget()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_FontAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterSkillExcelTable_IndexKey_RPG_GameCore_MonsterSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Exception()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateMultiple()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_MVector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingBlock()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGo_EstimatedTimeParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopStaggeredGridView_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BGMCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightTutorialStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerClickHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_Match3_Match3GameState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect_RPG_Client_TriggerEffectCallbackParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIFollow3DTarget_PostProcessDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_object_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_EnviromentSystem_EnviromentClip_OnEnvironmentClipLoadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_SuperDropDown_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_FiveDim_MiniGameEventReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_UINavigation_UINavigationArea_FirstSelectableDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_GameCore_ScreenTransferReason_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchOutHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGameModifier_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_UI_InputField_OnValidateInput()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_UpdateBonesDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IScrollHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_CharacterInputData_UnityEngine_Vector3_UnityEngine_Vector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IIgnoreHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_HandleResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_InputDevice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_FlexibleGridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightForgeConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PenaconyEndmostChronicleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_BindingSourceType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_AsyncCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ICancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_VoiceConfigExcelTable_IndexKey_RPG_GameCore_VoiceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnSceneOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_XLua_LuaEnv_XLua_LuaBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameGradeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Camera_CameraCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12ED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12ED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ActivityAlley_AlleyPackComponent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_ICommand()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_AxisEventData_UnityEngine_UI_Selectable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_uint_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_UnityEngine_SkinnedMeshRenderer_UnityEngine_Mesh()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_AsyncOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PayProductResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnParticleEmissionBeginEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MessageItemExcelTable_IndexKey_RPG_GameCore_MessageItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameModifier()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Toggle_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13000);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13008);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13010);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13018);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13020);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13028);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13030);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13038);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13040);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13048);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13050);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightDivisionLevelConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13058);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13060);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13068);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13070);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13078);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarServantSkillExcelTable_IndexKey_RPG_GameCore_AvatarServantSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_Google_Protobuf_ByteString()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_MonitoringCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_UI_Graphic_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightEnemyDifficultyLvConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_RPG_Client_ActivityModule_ActivityType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StatusExcelTable_IndexKey_RPG_GameCore_StatusRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_NotifyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceSkipOverrideExcelTable_IndexKey_RPG_GameCore_PerformanceSkipOverrideRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_StaticListViewItem_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandSaveData_RPG_Client_SwitchHandCustomData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillExcelTable_IndexKey_RPG_GameCore_AvatarSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_RPG_GameCore_GameCoreParamData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_BaseEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_OnRecycleChanged()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightConsumableItemData_RPG_Client_GridFightConsumableInfo_GridFightConsumableItemUseParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IEndDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_DialogueGroupExcelTable_IndexKey_RPG_GameCore_DialogueGroupRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookletLuaPanelParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameWaitEventTask_HipplenGameEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Swipe2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_TypeFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapProp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_ProgressParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_StartParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Collections_Specialized_NotifyCollectionChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GridFightEquipCategory_RPG_Client_GridFightEquipCategoryInfoConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefHttpRspBody_RPG_Client_GridFightGameRefShareCodeRspBody()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidBaseEventDataDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PropExcelTable_IndexKey_RPG_GameCore_PropRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_RPG_Client_AlleyTransportRouteState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GridFightManager_GridFightCustomValue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_BattleEventExcelTable_IndexKey_RPG_GameCore_BattleEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_UnityEngine_Sprite()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RspHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_AkCallbackType_AkCallbackInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Canvas_WillRenderCanvases()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_InstructionDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction3_string_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Playables_PlayableDirector()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_Motions_MonoEffectMotion_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnOnGeneralRspDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnInsertAbilityInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnBackPressedCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IRIBuildingRendererList_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureSetupCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13590);
		}
		static ::System::Boolean* StaticGet_Gen_Flag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISubmitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RPGAnimationEvent_AnimationEventCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightRole_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightConeZoom_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_OnAnimatorDispatchMovementJobFinishDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MainMissionExcelTable_IndexKey_RPG_GameCore_MainMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDeselectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopListViewItem2_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapEntityDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RuntimeGroupManager_HoYoGroupUnit_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ParseUrlCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BattleAssetPreload_AssetPreloadGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_CustomButton_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightNPCConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchInHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StageExcelTable_IndexKey_RPG_GameCore_StageRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_string_RPG_Client_GridFightGameRefInterectData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LocalizedInputField_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LoadingManager_WorkDefCounter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_UIElementTouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_GridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_ThreadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterExcelTable_IndexKey_RPG_GameCore_MonsterRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_StaticListView_int_RPG_Client_StaticListViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Drag2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_EasyTouchIsReadyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AnimatorButton()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListView2_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LowMemoryCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Graphic()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceEExcelTable_IndexKey_RPG_GameCore_PerformanceERow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction0_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_HedgehogTeam_EasyTouch_Gesture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_System_Collections_Generic_List_RPG_Client_PopupMenuProxy_Option()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BankCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ChimeraGameInstance_ActionReplayHook()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TalkSentenceConfigExcelTable_IndexKey_RPG_GameCore_TalkSentenceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightEquipItemData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_MeshGeneratorDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyMeetingRankInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_ItemExcelTable_IndexKey_RPG_GameCore_ItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_AvatarPropertyType_RPG_Client_GridFightRolePropertyConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_DiceCombatForceRefreshEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet1_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnAssetOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_int_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_BattleResultState_System_Collections_IEnumerator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_ISkeletonAnimationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LogCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_MoveDirection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventureCharacterController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_ComponentModel_PropertyChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUp2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameFormationEditor_EditEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13D98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_RPG_Client_UILayer()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13DA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13DA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE__CTOR_OFFSET))(this, reference, luaenv);
		}

		::System::Void __Gen_Delegate_Imp0(::UnityEngine::Vector2 p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp1(::UnityEngine::EventSystems::MoveDirection p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp2(::System::Object* p0, ::AkCallbackType p1, ::AkCallbackInfo* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp3(::System::Object* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp4(::RPG::Client::IAssetOperation* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp5(::System::Boolean& p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp6(::System::String* p0, ::System::Boolean& p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp7(::System::String* p0, ::System::Int32& p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp8(::System::String* p0, ::System::String* p1, ::System::Boolean& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp9(::System::String* p0, ::System::String* p1, ::System::Int32& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp10(::XLua::LuaTable* p0, ::System::Boolean& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp11(::XLua::LuaTable* p0, ::RPG::Client::UILayer& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UILayer&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp12(::XLua::LuaTable* p0, ::System::String*& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp13(::XLua::LuaTable* p0, ::System::Int32& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp14(::System::String* p0, ::XLua::LuaTable*& p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp15(::System::String* p0, ::System::Int32 p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp16(::System::String* p0, ::System::String* p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp17(::System::String* p0, ::System::UInt32 p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp18(::System::String* p0, ::System::Object* p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp19(::System::String* p0, ::RPG::GameCore::GameEntity* p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp20(::System::String* p0, ::System::String* p1, ::System::String* p2, ::XLua::LuaTable*& p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp21(::System::Single p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp22(::System::String* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp23(::XLua::LuaTable* p0, ::System::Int32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp24(::XLua::LuaTable* p0, ::System::Int32 p1, ::System::Single p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp25(::XLua::LuaTable* p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp26(::XLua::LuaTable* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp27(::System::Boolean p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp28(::System::Int32 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET))(this, p0);
		}

		::SuperScrollView::LoopListViewItem2* __Gen_Delegate_Imp29(::XLua::LuaTable* p0, ::SuperScrollView::LoopListView2* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET))(this, p0, p1, p2);
		}

		::SuperScrollView::LoopGridViewItem* __Gen_Delegate_Imp30(::XLua::LuaTable* p0, ::SuperScrollView::LoopGridView* p1, ::System::Int32 p2, ::System::Int32 p3, ::System::Int32 p4)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET))(this, p0, p1, p2, p3, p4);
		}

		::RPG::Client::StaticListViewItem* __Gen_Delegate_Imp31(::XLua::LuaTable* p0, ::RPG::Client::StaticListView* p1, ::System::Int32 p2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET))(this, p0, p1, p2);
		}

		::System::Int32 __Gen_Delegate_Imp32(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::UnityEngine::UI::Dropdown_DropdownItem* p2)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET))(this, p0, p1, p2);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp33(::XLua::LuaTable* p0, ::SuperScrollView::LoopStaggeredGridView* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp34(::XLua::LuaTable* p0, ::System::Int32 p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp35(::XLua::LuaTable* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp36(::UnityEngine::UI::Toggle* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp37(::XLua::LuaTable* p0, ::RPG::Client::NewsTickerItem* p1, ::System::UInt32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp38(::System::Reflection::MemberInfo* p0, ::System::Object* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp39()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp40(::System::String* p0, ::System::String* p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp41(::System::String* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp42(::UnityEngine::EventSystems::PointerEventData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp43(::SuperScrollView::LoopGridView* p0, ::SuperScrollView::LoopGridViewItem* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp44(::SuperScrollView::LoopGridView* p0)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp45(::System::UInt32 p0, ::RPG::GameCore::SubMissionState p1, ::System::Boolean p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp46(::System::UInt32 p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET))(this, p0, p1);
		}

		::System::String* __Gen_Delegate_Imp47()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp48(::System::String* p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET))(this, p0, p1);
		}

		::UnityEngine::Sprite* __Gen_Delegate_Imp49(::System::String* p0)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp50(::SuperScrollView::LoopListViewItem2* p0)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp51(::SuperScrollView::LoopListView2* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET))(this, p0, p1);
		}

		::System::Single __Gen_Delegate_Imp52(::SuperScrollView::LoopListViewItem2* p0)
		{
			return ((::System::Single(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET))(this, p0);
		}

		::UnityEngine::Vector2 __Gen_Delegate_Imp53(::RPG::Client::StaticListViewItem* p0)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp54(::UnityEngine::Camera* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp55(::RPG::Client::MapEntityDef* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp56(::Class_2_BD898AE9C0E88E25* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp57(::Class_2_BD898AE9C0E88E25* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp58(::UnityEngine::GameObject* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp59(::RPG::GameCore::GameEntity* p0, ::System::Boolean p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp60(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::TeamType p1, ::RPG::GameCore::TeamType p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp61(::RPG::GameCore::GameEntity* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp62(::RPG::GameCore::GameEntity* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp63(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1, ::RPG::GameCore::AliveState p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp64(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::AliveState p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp65(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::AliveState p1, ::Class_1_43BD383C98B4C0C5_103* p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_103*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp66(::UnityEngine::GameObject* p0, ::UnityEngine::EventSystems::PointerEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp67(::UnityEngine::GameObject* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp68(::System::UInt32 p0, ::System::IntPtr p1, ::AKRESULT p2, ::System::Object* p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET))(this, p0, p1, p2, p3);
		}

		::AKRESULT __Gen_Delegate_Imp69(::System::Boolean p0, ::System::Object* p1)
		{
			return ((::AKRESULT(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp70(::System::UInt32 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp71(::HedgehogTeam::EasyTouch::Gesture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp72(::UnityEngine::EventSystems::AxisEventData* p0, ::UnityEngine::UI::Selectable* p1, ::System::Boolean p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp73()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp74(::RPG::Client::TriggerEffectParams* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp75(::RPG::Client::MonoEffect* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp76(::RPG::Client::MonoEffect* p0, ::RPG::Client::TriggerEffectCallbackParams p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET))(this, p0, p1);
		}

		::System::Collections::IEnumerator* __Gen_Delegate_Imp77(::RPG::GameCore::BattleResultState p0)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp78(::Class_1_D17272E82AE804C2_320* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_320*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp79(::Class_1_D17272E82AE804C2_323* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_323*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp80(::Class_1_D17272E82AE804C2_321* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_321*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEquipItemConfig* __Gen_Delegate_Imp81(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightItemConfig* __Gen_Delegate_Imp82(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp83(::RPG::Client::GridFightConsumableItemData* p0, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET))(this, p0, p1);
		}

		::RPG::Client::GridFightRolePropertyConfig* __Gen_Delegate_Imp84(::RPG::GameCore::AvatarPropertyType p0)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightConsumableItemConfig* __Gen_Delegate_Imp85(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp86(::UnityEngine::ParticleSystem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionStageConfig* __Gen_Delegate_Imp87(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightDivisionStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionConfig* __Gen_Delegate_Imp88(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEnemyDifficultyLvConfig* __Gen_Delegate_Imp89(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::RPG::Client::GridFightEnemyDifficultyLvConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp90(::RPG::GameCore::GridFightManager_GridFightCustomValue* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionLevelConfig* __Gen_Delegate_Imp91(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp92(::XLua::LuaTable* p0)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightTutorialStageConfig* __Gen_Delegate_Imp93(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightNPCConfig* __Gen_Delegate_Imp94(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp95(::RPG::MVector3 p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp96(::RPG::Client::ClockParkCardItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEquipCategoryInfoConfig* __Gen_Delegate_Imp97(::RPG::GameCore::GridFightEquipCategory p0)
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightForgeConfig* __Gen_Delegate_Imp98(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp99(::RPG::Client::ScheduleTask* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET))(this, p0);
		}

		::Class_0_16E4307DCC419505_341* __Gen_Delegate_Imp100(::System::UInt32 p0)
		{
			return ((::Class_0_16E4307DCC419505_341*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp101(::RPG::GameCore::HudType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp102(::RPG::GameCore::HudType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp103(::RPG::GameCore::HudType p0, ::RPG::GameCore::HudType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HudType, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp104(::RPG::Client::MessageItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp105(::RPG::Client::MessageItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp106(::RPG::Client::MessageItemData* p0, ::RPG::Client::MessageItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MessageItemData*, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp107(::RPG::Client::NPCWarningTipConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp108(::RPG::Client::NPCWarningTipConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp109(::RPG::Client::NPCWarningTipConfig* p0, ::RPG::Client::NPCWarningTipConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp110(::UnityEngine::EventSystems::BaseEventData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp111(::UnityEngine::EventSystems::EventTrigger_Entry* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp112(::UnityEngine::EventSystems::EventTrigger_Entry* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp113(::UnityEngine::EventSystems::EventTrigger_Entry* p0, ::UnityEngine::EventSystems::EventTrigger_Entry* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp114(::RPG::GameCore::GachaType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp115(::RPG::GameCore::GachaType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp116(::RPG::GameCore::GachaType p0, ::RPG::GameCore::GachaType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GachaType, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp117(::Class_1_D0948460F4810867* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D0948460F4810867*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp118(::System::UInt16 p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET))(this, p0, p1);
		}

		::System::Reflection::Assembly* __Gen_Delegate_Imp119(::System::Reflection::AssemblyName* p0)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET))(this, p0);
		}

		::System::Type* __Gen_Delegate_Imp120(::System::Reflection::Assembly* p0, ::System::String* p1, ::System::Boolean p2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp121(::System::Type* p0, ::System::Object* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp122(::System::IAsyncResult* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp123(::UnityEngine::RectTransform* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET))(this, p0);
		}

		::System::Char __Gen_Delegate_Imp124(::System::String* p0, ::System::Int32 p1, ::System::Char p2)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp125(::Class_1_D6D8D891CDDE5DED* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6D8D891CDDE5DED*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp126(::XLua::LuaTable* p0, ::RPG::GameCore::ScreenTransferReason p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp127(::RPG::Client::GlobalDispatchData_ServerData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp128(::RPG::Client::GlobalDispatchData_ServerData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp129(::RPG::Client::GlobalDispatchData_ServerData* p0, ::RPG::Client::GlobalDispatchData_ServerData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp130(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp131(::RPG::GameCore::RewardRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp132(::RPG::GameCore::TextmapRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp133(::System::UInt32 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp134(::RPG::Client::EquipmentItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp135(::RPG::GameCore::ItemRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp136(::RPG::GameCore::MainMissionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET))(this, p0);
		}

		::Il2CppArray<::System::Byte>* __Gen_Delegate_Imp137(::System::String*& p0)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp138(::UnityEngine::AnimatorStateInfo p0, ::UnityEngine::AnimatorStateInfo p1, ::UnityEngine::AnimatorTransitionInfo p2, ::System::Boolean p3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp139(::System::Int32 p0, ::UnityEngine::AnimatorStateInfo p1, ::UnityEngine::AnimatorTransitionInfo p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp140(::RPG::GameCore::AvatarPromotionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp141(::RPG::GameCore::StageRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp142(::System::Object* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp143(::SuperScrollView::LoopListViewItem2* p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp144(::RPG::GameCore::AvatarSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp145(::Unity::Collections::NativeArray_1<::System::Byte>& p0)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp146(::RPG::GameCore::SubMissionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp147(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp148(::Struct_2_8B48740F46FC53FC p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8B48740F46FC53FC, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp149(::Proto::ItemCost* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp150(::Proto::ItemCost* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp151(::Proto::ItemCost* p0, ::Proto::ItemCost* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::ItemCost*, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp152(::RPG::GameCore::AvatarSkillTreeRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp153(::System::UInt32 p0, ::AkCallbackType p1, ::AkCallbackInfo* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp154(::RPG::GameCore::TurnBasedModifierInstance* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp155(::RPG::GameCore::TurnBasedModifierInstance* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp156(::RPG::GameCore::StatusRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp157(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET))(this, p0, p1);
		}

		::System::String* __Gen_Delegate_Imp158(::System::String* p0)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET))(this, p0);
		}

		::RPG::GameCore::FixPoint __Gen_Delegate_Imp159(::RPG::GameCore::GameEntity* p0)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp160(::RPG::GameCore::GameEntity* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp161(::RPG::GameCore::MonsterRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp162(::RPG::GameCore::MonsterSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp163(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp164(::System::String* p0, ::UnityEngine::SkinnedMeshRenderer* p1, ::UnityEngine::Mesh* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp165(::RPG::Client::BookContentData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp166(::RPG::Client::BookContentData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp167(::RPG::Client::BookContentData* p0, ::RPG::Client::BookContentData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BookContentData*, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp168(::RPG::GameCore::MazeBuffRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp169(::RPG::Client::ChallengeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp170(::RPG::Client::ChallengeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp171(::RPG::Client::ChallengeData* p0, ::RPG::Client::ChallengeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeData*, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp172(::RPG::GameCore::PropRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET))(this, p0);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp173(::UnityEngine::Vector3 p0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp174(::RPG::Client::UIFollow3DTarget* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp175(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp176(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp177(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp178(::RPG::Client::PCResolution* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp179(::RPG::Client::PCResolution* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp180(::RPG::Client::PCResolution* p0, ::RPG::Client::PCResolution* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PCResolution*, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp181(::RPG::GameCore::StageMonsterRewardItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp182(::RPG::GameCore::StageMonsterRewardItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp183(::RPG::GameCore::StageMonsterRewardItem* p0, ::RPG::GameCore::StageMonsterRewardItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp184(::RPG::GameCore::VoiceConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp185(::System::String* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp186(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp187(::RPG::Client::MainMissionData* p0, ::RPG::Client::MainMissionData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MainMissionData*, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp188(::RPG::GameCore::DialogueGroupRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp189(::RPG::GameCore::PlaneEventRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp190(::RPG::Client::AnimatorButton* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp191(::System::String* p0, ::System::String* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp192(::RPG::Client::PrefHashSet_1<::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp193(::RPG::Client::BaseGachaPoolData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp194(::RPG::Client::BaseGachaPoolData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp195(::RPG::Client::BaseGachaPoolData* p0, ::RPG::Client::BaseGachaPoolData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp196(::RPG::Client::ItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp197(::RPG::Client::ItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp198(::RPG::Client::ItemData* p0, ::RPG::Client::ItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp199(::RPG::Client::GachaItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp200(::RPG::Client::GachaItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp201(::RPG::Client::GachaItemData* p0, ::RPG::Client::GachaItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp202(::RPG::GameCore::SpecialAvatarRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp203(::XLua::LuaTable* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp204(::RPG::GameCore::AdventurePlayerRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp205(::RPG::GameCore::AdventurePlayerRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp206(::RPG::GameCore::AdventurePlayerRow* p0, ::RPG::GameCore::AdventurePlayerRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp207(::RPG::Client::ChallengeGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp208(::RPG::Client::ChallengeGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp209(::RPG::Client::ChallengeGroupData* p0, ::RPG::Client::ChallengeGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp210(::RPG::Client::RogueBuffData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp211(::RPG::Client::RogueBuffData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp212(::RPG::Client::RogueBuffData* p0, ::RPG::Client::RogueBuffData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueBuffData*, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp213(::RPG::Client::PrefHashSet_1<::System::String*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp214(::System::String* p0, ::System::String* p1, ::UnityEngine::LogType p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp215(::System::String* p0, ::System::Boolean p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp216(::RPG::Client::PayProductResult p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp217(::RPG::Client::ScheduleData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp218(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::UnityEngine::UI::Dropdown_DropdownItem* p2, ::System::Int32 p3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp219(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::System::Int32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp220(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp221(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp222(::RPG::GameCore::TalkSentenceConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp223(::RPG::GameCore::BattleEventRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp224(::RPG::Client::ItemDisplayData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp225(::RPG::Client::ItemDisplayData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp226(::RPG::Client::ItemDisplayData* p0, ::RPG::Client::ItemDisplayData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp227(::AkMonitorErrorCode p0, ::AkMonitorErrorLevel p1, ::System::UInt32 p2, ::System::UInt64 p3, ::System::String* p4)
		{
			return ((::System::Void(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET))(this, p0, p1, p2, p3, p4);
		}

		::System::Void __Gen_Delegate_Imp228(::RPG::GameCore::MessageItemRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp229(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET))(this, p0);
		}

		::TMPro::TMP_FontAsset* __Gen_Delegate_Imp230(::System::Int32 p0, ::System::String* p1)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET))(this, p0, p1);
		}

		::TMPro::TMP_SpriteAsset* __Gen_Delegate_Imp231(::System::Int32 p0, ::System::String* p1)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp232(::TMPro::TMP_TextInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp233(::UnityEngine::AsyncOperation* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp234(::RPG::GameCore::TurnBasedModifierInstance* p0, ::Class_1_5469D397DAE62876* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp235(::RPG::GameCore::PerformanceERow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp236(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp237(::RPG::Client::PunkLordData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp238(::RPG::Client::PunkLordData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp239(::RPG::Client::PunkLordData* p0, ::RPG::Client::PunkLordData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PunkLordData*, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp240(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp241(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp242(::RPG::Client::SubMissionData* p0, ::RPG::Client::SubMissionData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp243(::System::Int64 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp244(::System::Int64 p0, ::System::Int64 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp245(::RPG::GameCore::MapEntryRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp246(::RPG::GameCore::MapEntryRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp247(::RPG::GameCore::MapEntryRow* p0, ::RPG::GameCore::MapEntryRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapEntryRow*, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp248(::RPG::GameCore::LevelMinimapSection* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp249(::RPG::GameCore::LevelMinimapSection* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp250(::RPG::GameCore::LevelMinimapSection* p0, ::RPG::GameCore::LevelMinimapSection* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp251(::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp252(::System::String* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp253(::RPG::Client::SettledPunkLordData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp254(::RPG::Client::SettledPunkLordData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp255(::RPG::Client::SettledPunkLordData* p0, ::RPG::Client::SettledPunkLordData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SettledPunkLordData*, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp256(::RPG::GameCore::ActivityFightGroupRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp257(::RPG::GameCore::ActivityFightGroupRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp258(::RPG::GameCore::ActivityFightGroupRow* p0, ::RPG::GameCore::ActivityFightGroupRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp259(::RPG::Client::FightActivityGroupInfo p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp260(::RPG::Client::FightActivityGroupInfo p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp261(::RPG::Client::FightActivityGroupInfo p0, ::RPG::Client::FightActivityGroupInfo p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp262(::Class_1_7E9AC8675DA072FB* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp263(::Class_1_7E9AC8675DA072FB* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp264(::Class_1_7E9AC8675DA072FB* p0, ::Class_1_7E9AC8675DA072FB* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp265(::XLua::LuaTable* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp266(::Class_1_2CF43CF3CB5182D0* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp267(::Class_1_2CF43CF3CB5182D0* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp268(::Class_1_2CF43CF3CB5182D0* p0, ::Class_1_2CF43CF3CB5182D0* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp269(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp270(::System::UInt32 p0, ::System::Collections::Generic::List_1<::System::UInt32>* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp271(::RPG::Client::LuaUIController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::Class_1_F59C8DF29FF9694F*>* __Gen_Delegate_Imp272()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F59C8DF29FF9694F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp273(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp274(::RPG::Client::AvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp275(::RPG::Client::AvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp276(::RPG::Client::AvatarData* p0, ::RPG::Client::AvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp277(::RPG::Client::AetherDivideGymDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp278(::RPG::Client::AetherDivideGymDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp279(::RPG::Client::AetherDivideGymDataItem* p0, ::RPG::Client::AetherDivideGymDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp280(::System::Object* p0, ::RPG::Client::AlleyTransportRouteState p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::AlleyTransportRouteState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp281(::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp282(::XLua::LuaTable* p0, ::RPG::Client::ActivityAlley::AlleyPackComponent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp283(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp284(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp285(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp286(::Class_1_43BD383C98B4C0C5_102* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_102*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp287(::Class_2_E6C0556C909C8254* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E6C0556C909C8254*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp288(::Class_0_16E4307DCC419505_338* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp289(::Class_0_16E4307DCC419505_339* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_339*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp290(::Class_0_16E4307DCC419505_337* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_337*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp291(::RPG::Client::AlleyEventInfo p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp292(::RPG::Client::AlleyEventInfo p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp293(::RPG::Client::AlleyEventInfo p0, ::RPG::Client::AlleyEventInfo p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AlleyEventInfo, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp294(::RPG::Client::FantasticStoryParagraphData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp295(::RPG::Client::FantasticStoryParagraphData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp296(::RPG::Client::FantasticStoryParagraphData* p0, ::RPG::Client::FantasticStoryParagraphData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp297(::XLua::LuaTable* p0, ::RPG::Client::ChessRogueBoardCellDataItem* p1, ::RPG::Client::MonoRogueHexChessBoardItem* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp298(::Class_1_7D41D5D948382242* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D41D5D948382242*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp299(::RPG::Client::FuncEntranceData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp300(::RPG::Client::FuncEntranceData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp301(::RPG::Client::FuncEntranceData* p0, ::RPG::Client::FuncEntranceData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FuncEntranceData*, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp302(::UnityEngine::Mesh* p0, ::UnityEngine::Material* p1, ::UnityEngine::Texture* p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp303(::System::Int32 p0, ::Il2CppArray<::UnityEngine::Mesh*>* p1, ::Il2CppArray<::UnityEngine::Material*>* p2, ::Il2CppArray<::UnityEngine::Texture*>* p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp304(::Spine::Unity::SkeletonGraphic* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp305(::Spine::Unity::SkeletonRendererInstruction* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp306(::Spine::Unity::ISkeletonAnimation* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp307(::Spine::Unity::MeshGeneratorBuffers p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp308(::RPG::Client::Prop::JigsawItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp309(::RPG::Client::Prop::JigsawItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp310(::RPG::Client::Prop::JigsawItemData* p0, ::RPG::Client::Prop::JigsawItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp311(::System::Boolean p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp312(::RPG::Client::FantasticStoryChapterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp313(::RPG::Client::FantasticStoryChapterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp314(::RPG::Client::FantasticStoryChapterData* p0, ::RPG::Client::FantasticStoryChapterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp315(::UnityEngine::Transform* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp316(::UnityEngine::Transform* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp317(::UnityEngine::Transform* p0, ::UnityEngine::Transform* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp318(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp319(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp320(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp321(::RPG::GameCore::RogueImageRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp322(::RPG::GameCore::RogueImageRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp323(::RPG::GameCore::RogueImageRow* p0, ::RPG::GameCore::RogueImageRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueImageRow*, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp324(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp325(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp326(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0, ::RPG::GameCore::RogueDLCMainStoryRewardRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp327(::RPG::GameCore::CEBattlePresetConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp328(::RPG::GameCore::CEBattlePresetConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp329(::RPG::GameCore::CEBattlePresetConfig* p0, ::RPG::GameCore::CEBattlePresetConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp330(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp331(::System::UInt32 p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp332(::RPG::GameCore::ItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp333(::RPG::GameCore::ItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp334(::RPG::GameCore::ItemConfig* p0, ::RPG::GameCore::ItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp335(::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp336(::RPG::Client::ActivityModule_ActivityType p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule_ActivityType, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp337(::RPG::GameCore::RogueDLCAeonCrossRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp338(::RPG::GameCore::RogueDLCAeonCrossRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp339(::RPG::GameCore::RogueDLCAeonCrossRow* p0, ::RPG::GameCore::RogueDLCAeonCrossRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp340(::RPG::GameCore::RogueBuffRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp341(::RPG::GameCore::RogueBuffRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp342(::RPG::GameCore::RogueBuffRow* p0, ::RPG::GameCore::RogueBuffRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp343(::RPG::GameCore::RogueNousAeonCrossRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp344(::RPG::GameCore::RogueNousAeonCrossRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp345(::RPG::GameCore::RogueNousAeonCrossRow* p0, ::RPG::GameCore::RogueNousAeonCrossRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp346(::RPG::GameCore::RogueNousAeonRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp347(::RPG::GameCore::RogueNousAeonRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp348(::RPG::GameCore::RogueNousAeonRow* p0, ::RPG::GameCore::RogueNousAeonRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp349(::RPG::Client::RogueNousDiceSlotDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp350(::RPG::Client::RogueNousDiceSlotDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp351(::RPG::Client::RogueNousDiceSlotDataItem* p0, ::RPG::Client::RogueNousDiceSlotDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp352(::Proto::StrongChallengeAvatar* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp353(::Proto::StrongChallengeAvatar* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp354(::Proto::StrongChallengeAvatar* p0, ::Proto::StrongChallengeAvatar* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::StrongChallengeAvatar*, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET))(this, p0, p1);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp355(::RPG::GameCore::CharacterInputData* p0, ::UnityEngine::Vector3 p1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp356(::RPG::GameCore::CharacterInputData* p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp357(::RPG::GameCore::AdventureCharacterController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp358(::RPG::GameCore::ConditionParam* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp359(::RPG::GameCore::ConditionParam* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp360(::RPG::GameCore::ConditionParam* p0, ::RPG::GameCore::ConditionParam* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ConditionParam*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp361(::RPG::GameCore::ItemComefromRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp362(::RPG::GameCore::ItemComefromRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp363(::RPG::GameCore::ItemComefromRow* p0, ::RPG::GameCore::ItemComefromRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp364(::RPG::Client::MonsterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp365(::RPG::Client::MonsterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp366(::RPG::Client::MonsterData* p0, ::RPG::Client::MonsterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp367(::XLua::LuaTable* p0, ::UnityEngine::Vector2 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp368(::XLua::LuaTable* p0, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp369(::RPG::Client::RogueNousDiceSurfaceDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp370(::RPG::Client::RogueNousDiceSurfaceDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp371(::RPG::Client::RogueNousDiceSurfaceDataItem* p0, ::RPG::Client::RogueNousDiceSurfaceDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp372(::RPG::Client::RogueNousDiceBranchDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp373(::RPG::Client::RogueNousDiceBranchDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp374(::RPG::Client::RogueNousDiceBranchDataItem* p0, ::RPG::Client::RogueNousDiceBranchDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp375(::RPG::Client::MonoSceneObjClickHint* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp376(::RPG::Client::MonoSceneObjClickHint* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp377(::RPG::Client::MonoSceneObjClickHint* p0, ::RPG::Client::MonoSceneObjClickHint* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp378(::RPG::Client::TextID p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp379(::RPG::Client::TextID p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp380(::RPG::Client::TextID p0, ::RPG::Client::TextID p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp381(::System::Int32 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp382(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp383(::RPG::Client::CompanionMissionActivityBannerData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp384(::RPG::Client::CompanionMissionActivityBannerData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp385(::RPG::Client::CompanionMissionActivityBannerData* p0, ::RPG::Client::CompanionMissionActivityBannerData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp386(::RPG::Client::RogueTournAreaDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp387(::RPG::Client::RogueTournAreaDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp388(::RPG::Client::RogueTournAreaDataItem* p0, ::RPG::Client::RogueTournAreaDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp389(::RPG::GameCore::EvolveBuildGearEquipInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp390(::RPG::GameCore::EvolveBuildGearEquipInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp391(::RPG::GameCore::EvolveBuildGearEquipInfo* p0, ::RPG::GameCore::EvolveBuildGearEquipInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp392(::RPG::Client::EvolveBuildMixData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp393(::RPG::Client::EvolveBuildMixData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp394(::RPG::Client::EvolveBuildMixData* p0, ::RPG::Client::EvolveBuildMixData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp395(::RPG::Client::ClockParkAttributeType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp396(::RPG::Client::ClockParkAttributeType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp397(::RPG::Client::ClockParkAttributeType p0, ::RPG::Client::ClockParkAttributeType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp398(::System::UInt32 p0, ::System::UInt32 p1, ::RPG::PoolList_1<::UnityEngine::Vector2Int>* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp399(::UnityEngine::Vector2Int p0, ::UnityEngine::Vector2Int p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp400(::RPG::Client::LittleGame::Match3::Match3GameState p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp401(::XLua::LuaTable* p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp402(::UnityEngine::Transform* p0, ::UnityEngine::Vector2 p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp403(::RPG::Client::SwordTrainingSkillData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp404(::RPG::Client::SwordTrainingSkillData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp405(::RPG::Client::SwordTrainingSkillData* p0, ::RPG::Client::SwordTrainingSkillData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp406(::RPG::GameCore::PerformanceIDPair* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp407(::RPG::GameCore::PerformanceIDPair* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp408(::RPG::GameCore::PerformanceIDPair* p0, ::RPG::GameCore::PerformanceIDPair* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp409(::InControl::BindingSourceType p0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp410(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp411(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp412(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp413(::RPG::Client::MultipleDropData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp414(::RPG::Client::MultipleDropData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp415(::RPG::Client::MultipleDropData* p0, ::RPG::Client::MultipleDropData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp416(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp417(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp418(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0, ::RPG::Client::TrainParty::TrainPartyRecordGroup* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp419(::RPG::Client::ActivitySummonStage* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp420(::RPG::Client::ActivitySummonStage* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp421(::RPG::Client::ActivitySummonStage* p0, ::RPG::Client::ActivitySummonStage* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivitySummonStage*, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp422(::RPG::Client::PrefHashSet_1<::System::Int32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp423(::RPG::Client::SwordTrainingEndingDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp424(::RPG::Client::SwordTrainingEndingDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp425(::RPG::Client::SwordTrainingEndingDataItem* p0, ::RPG::Client::SwordTrainingEndingDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp426(::RPG::Client::RogueMagicAreaDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp427(::RPG::Client::RogueMagicAreaDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp428(::RPG::Client::RogueMagicAreaDataItem* p0, ::RPG::Client::RogueMagicAreaDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp429(::RPG::Client::RogueMagicUnitDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp430(::RPG::Client::RogueMagicUnitDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp431(::RPG::Client::RogueMagicUnitDataItem* p0, ::RPG::Client::RogueMagicUnitDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp432(::RPG::Client::SuitRecommendAvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp433(::RPG::Client::SuitRecommendAvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp434(::RPG::Client::SuitRecommendAvatarData* p0, ::RPG::Client::SuitRecommendAvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp435(::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp436(::RPG::Client::AvatarPathData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp437(::RPG::Client::AvatarPathData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp438(::RPG::Client::AvatarPathData* p0, ::RPG::Client::AvatarPathData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarPathData*, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp439(::Class_1_EA80EBCE663FE95A* p0, ::Class_1_BEB73AACF0CDA957* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp440(::RPG::Client::SwitchHandCoinData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp441(::RPG::Client::SwitchHandCoinData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp442(::RPG::Client::SwitchHandCoinData* p0, ::RPG::Client::SwitchHandCoinData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp443(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp444(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp445(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp446(::RPG::Client::RogueMagicScepterDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp447(::RPG::Client::RogueMagicScepterDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp448(::RPG::Client::RogueMagicScepterDataItem* p0, ::RPG::Client::RogueMagicScepterDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp449(::RPG::Client::ActivityPanelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp450(::RPG::Client::ActivityPanelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp451(::RPG::Client::ActivityPanelData* p0, ::RPG::Client::ActivityPanelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp452(::RPG::Client::TarotBookCharacter* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp453(::RPG::Client::TarotBookCharacter* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp454(::RPG::Client::TarotBookCharacter* p0, ::RPG::Client::TarotBookCharacter* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCharacter*, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp455(::RPG::Client::TarotBookCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp456(::RPG::Client::TarotBookCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp457(::RPG::Client::TarotBookCard* p0, ::RPG::Client::TarotBookCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCard*, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp458(::RPG::Client::TarotBookClue* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp459(::RPG::Client::TarotBookClue* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp460(::RPG::Client::TarotBookClue* p0, ::RPG::Client::TarotBookClue* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookClue*, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp461(::RPG::Client::TarotBookStory* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp462(::RPG::Client::TarotBookStory* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp463(::RPG::Client::TarotBookStory* p0, ::RPG::Client::TarotBookStory* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookStory*, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp464(::RPG::Client::BookletLuaPanelParam* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp465(::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp466(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp467(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp468(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0, ::RPG::Client::IRogueTournBuildRefTeamMemberData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp469(::RPG::Client::NavMap::MappingInfoNode* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp470(::RPG::Client::NavMap::MappingInfoNode* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp471(::RPG::Client::NavMap::MappingInfoNode* p0, ::RPG::Client::NavMap::MappingInfoNode* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp472(::RPG::Client::GachaGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp473(::RPG::Client::GachaGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp474(::RPG::Client::GachaGroupData* p0, ::RPG::Client::GachaGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaGroupData*, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp475(::RPG::Client::TarotBookReadReward* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp476(::RPG::Client::TarotBookReadReward* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp477(::RPG::Client::TarotBookReadReward* p0, ::RPG::Client::TarotBookReadReward* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookReadReward*, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp478(::UnityEngine::Playables::PlayableDirector* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp479(::System::IntPtr p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET))(this, p0);
		}

		::XLua::LuaBase* __Gen_Delegate_Imp480(::System::Int32 p0, ::XLua::LuaEnv* p1)
		{
			return ((::XLua::LuaBase*(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp481(::System::IntPtr p0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp482(::RPG::GameCore::RelicType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp483(::RPG::GameCore::RelicType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp484(::RPG::GameCore::RelicType p0, ::RPG::GameCore::RelicType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp485(::RPG::Client::TarotBookInteraction* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp486(::RPG::Client::TarotBookInteraction* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp487(::RPG::Client::TarotBookInteraction* p0, ::RPG::Client::TarotBookInteraction* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp488(::RPG::Client::ActivityMarble::MarbleSealData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp489(::RPG::Client::ActivityMarble::MarbleSealData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp490(::RPG::Client::ActivityMarble::MarbleSealData* p0, ::RPG::Client::ActivityMarble::MarbleSealData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET))(this, p0, p1);
		}

		::System::UInt32 __Gen_Delegate_Imp491(::XLua::LuaTable* p0, ::System::UInt32 p1)
		{
			return ((::System::UInt32(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp492(::Class_0_16E4307DCC419505_342* p0, ::Class_0_16E4307DCC419505_342* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_342*, ::Class_0_16E4307DCC419505_342*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp493(::RPG::GameCore::AvatarServantSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp494(::XLua::LuaTable* p0, ::RPG::Client::PlanetFesToastItem* p1, ::System::Object* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp495(::XLua::LuaTable* p0, ::RPG::Client::PlanetFesToastItem* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp496(::RPG::Client::PlanetFesThemeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp497(::RPG::Client::PlanetFesThemeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp498(::RPG::Client::PlanetFesThemeData* p0, ::RPG::Client::PlanetFesThemeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp499(::RPG::Client::PlanetFesCardData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp500(::RPG::Client::PlanetFesCardData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp501(::RPG::Client::PlanetFesCardData* p0, ::RPG::Client::PlanetFesCardData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesCardData*, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp502(::RPG::Client::VirtualRankChimeraTeam* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp503(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp504(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp505(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET))(this, p0, p1);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp506(::UnityEngine::Transform* p0)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp507(::RPG::Client::QuestData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp508(::RPG::Client::QuestData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp509(::RPG::Client::QuestData* p0, ::RPG::Client::QuestData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp510(::RPG::Client::FightFestPhase* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp511(::RPG::Client::FightFestPhase* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp512(::RPG::Client::FightFestPhase* p0, ::RPG::Client::FightFestPhase* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPhase*, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp513(::RPG::Client::FightFestCoachSkill* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp514(::RPG::Client::FightFestCoachSkill* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp515(::RPG::Client::FightFestCoachSkill* p0, ::RPG::Client::FightFestCoachSkill* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp516(::RPG::Client::MatchThreeBirdData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp517(::RPG::Client::MatchThreeBirdData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp518(::RPG::Client::MatchThreeBirdData* p0, ::RPG::Client::MatchThreeBirdData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp519(::UnityEngine::EventSystems::IPointerEnterHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp520(::UnityEngine::EventSystems::IPointerExitHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp521(::UnityEngine::EventSystems::IPointerDownHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp522(::UnityEngine::EventSystems::IPointerUpHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp523(::UnityEngine::EventSystems::IPointerClickHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp524(::UnityEngine::EventSystems::IInitializePotentialDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp525(::UnityEngine::EventSystems::IBeginDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp526(::UnityEngine::EventSystems::IDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp527(::UnityEngine::EventSystems::IEndDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp528(::UnityEngine::EventSystems::IDropHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp529(::UnityEngine::EventSystems::IScrollHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp530(::UnityEngine::EventSystems::IUpdateSelectedHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp531(::UnityEngine::EventSystems::ISelectHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp532(::UnityEngine::EventSystems::IDeselectHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp533(::UnityEngine::EventSystems::IMoveHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp534(::UnityEngine::EventSystems::ISubmitHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp535(::UnityEngine::EventSystems::ICancelHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp536(::UnityEngine::EventSystems::IIgnoreHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IIgnoreHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp537(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp538(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp539(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp540(::RPG::Client::IPlanetFesBuff* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp541(::RPG::Client::IPlanetFesBuff* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp542(::RPG::Client::IPlanetFesBuff* p0, ::RPG::Client::IPlanetFesBuff* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp543(::System::UInt64 p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp544(::InControl::InputDevice* p0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp545(::RPG::Client::WheelItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp546(::RPG::Client::WheelItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp547(::RPG::Client::WheelItem* p0, ::RPG::Client::WheelItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::WheelItem*, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp548(::RPG::Client::EvolveBuildCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp549(::RPG::Client::EvolveBuildCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp550(::RPG::Client::EvolveBuildCard* p0, ::RPG::Client::EvolveBuildCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp551(::RPG::Client::EvolveBuildScMixData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp552(::RPG::Client::EvolveBuildScMixData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp553(::RPG::Client::EvolveBuildScMixData* p0, ::RPG::Client::EvolveBuildScMixData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp554(::XLua::LuaTable* p0, ::RPG::Client::TextID p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp555(::RPG::Client::EquipmentItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp556(::RPG::Client::EquipmentItemData* p0, ::RPG::Client::EquipmentItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp557(::Enum_3_DFCB42601400F441 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp558(::Enum_3_DFCB42601400F441 p0)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp559(::Enum_3_DFCB42601400F441 p0, ::Enum_3_DFCB42601400F441 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Enum_3_DFCB42601400F441, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp560(::RPG::Client::RelicItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp561(::RPG::Client::RelicItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp562(::RPG::Client::RelicItemData* p0, ::RPG::Client::RelicItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp563(::RPG::GameCore::MarblePVPRankConfigRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp564(::RPG::GameCore::MarblePVPRankConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp565(::RPG::GameCore::MarblePVPRankConfigRow* p0, ::RPG::GameCore::MarblePVPRankConfigRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp566(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp567(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp568(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp569(::RPG::Client::PlanetFesTradingCardOfferItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp570(::RPG::Client::PlanetFesTradingCardOfferItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp571(::RPG::Client::PlanetFesTradingCardOfferItem* p0, ::RPG::Client::PlanetFesTradingCardOfferItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp572(::RPG::Client::ElfRestaurantRecipeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp573(::RPG::Client::ElfRestaurantRecipeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp574(::RPG::Client::ElfRestaurantRecipeData* p0, ::RPG::Client::ElfRestaurantRecipeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp575(::System::UInt64 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp576(::System::UInt64 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp577(::System::UInt64 p0, ::System::UInt64 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp578(::RPG::Client::ElfShopItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp579(::RPG::Client::ElfShopItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp580(::RPG::Client::ElfShopItemData* p0, ::RPG::Client::ElfShopItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfShopItemData*, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp581(::RPG::GameCore::MazeBuffData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp582(::RPG::GameCore::MazeBuffData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp583(::RPG::GameCore::MazeBuffData* p0, ::RPG::GameCore::MazeBuffData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp584(::RPG::Client::NewsTickerItem* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp585(::RPG::Client::PlanetFesTradingCardApplyItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp586(::RPG::Client::PlanetFesTradingCardApplyItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp587(::RPG::Client::PlanetFesTradingCardApplyItem* p0, ::RPG::Client::PlanetFesTradingCardApplyItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp588(::RPG::Client::PlanetFesSkillPhase* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp589(::RPG::Client::PlanetFesSkillPhase* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp590(::RPG::Client::PlanetFesSkillPhase* p0, ::RPG::Client::PlanetFesSkillPhase* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp591(::RPG::Client::IRogueTournBuildRefDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp592(::RPG::Client::IRogueTournBuildRefDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp593(::RPG::Client::IRogueTournBuildRefDataItem* p0, ::RPG::Client::IRogueTournBuildRefDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp594(::RPG::Client::ParkourRank* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp595(::RPG::Client::ParkourRank* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp596(::RPG::Client::ParkourRank* p0, ::RPG::Client::ParkourRank* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourRank*, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp597(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp598(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp599(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0, ::RPG::GameCore::IAdventurePlayerCommonRowWrap* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp600(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp601(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp602(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp603(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp604(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp605(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0, ::RPG::Client::IFateGameRoundSettleDmgSourceItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp606(::RPG::Client::AvatarEnhancedHint* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp607(::RPG::Client::AvatarEnhancedHint* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp608(::RPG::Client::AvatarEnhancedHint* p0, ::RPG::Client::AvatarEnhancedHint* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp609(::RPG::Client::FateHandbookHouguItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp610(::RPG::Client::FateHandbookHouguItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp611(::RPG::Client::FateHandbookHouguItem* p0, ::RPG::Client::FateHandbookHouguItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp612(::RPG::Client::FateHandbookReijuItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp613(::RPG::Client::FateHandbookReijuItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp614(::RPG::Client::FateHandbookReijuItem* p0, ::RPG::Client::FateHandbookReijuItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp615(::RPG::Client::GridFightOrbData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp616(::RPG::Client::GridFightOrbData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp617(::RPG::Client::GridFightOrbData* p0, ::RPG::Client::GridFightOrbData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbData*, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp618(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp619(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp620(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp621(::RPG::Client::BaseGachaGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp622(::RPG::Client::BaseGachaGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp623(::RPG::Client::BaseGachaGroupData* p0, ::RPG::Client::BaseGachaGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp624(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp625(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp626(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp627(::RPG::GameCore::HipplenGameGradeType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp628(::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp629(::RPG::Client::GridFightRole* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp630(::RPG::Client::GridFightGridData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp631(::System::Object* p0, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp632(::System::Object* p0, ::System::ComponentModel::PropertyChangedEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp633(::RPG::Client::GridFightMonsterAffixConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp634(::RPG::Client::GridFightMonsterAffixConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp635(::RPG::Client::GridFightMonsterAffixConfig* p0, ::RPG::Client::GridFightMonsterAffixConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET))(this, p0, p1);
		}

		::System::Single __Gen_Delegate_Imp636(::UnityEngine::UI::ILayoutElement* p0)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp637(::RPG::Client::GridFightTrait* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp638(::RPG::Client::GridFightTrait* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp639(::RPG::Client::GridFightTrait* p0, ::RPG::Client::GridFightTrait* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp640(::RPG::Client::DrinkMakerCheersGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp641(::RPG::Client::DrinkMakerCheersGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp642(::RPG::Client::DrinkMakerCheersGroupData* p0, ::RPG::Client::DrinkMakerCheersGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp643(::RPG::Client::DrinkMakerCheersGuestCommentData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp644(::RPG::Client::DrinkMakerCheersGuestCommentData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp645(::RPG::Client::DrinkMakerCheersGuestCommentData* p0, ::RPG::Client::DrinkMakerCheersGuestCommentData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp646(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp647(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp648(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp649(::RPG::Client::RoleTrialActivityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp650(::RPG::Client::RoleTrialActivityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp651(::RPG::Client::RoleTrialActivityData* p0, ::RPG::Client::RoleTrialActivityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp652(::RPG::GameCore::MainMissionSortedItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp653(::RPG::GameCore::MainMissionSortedItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp654(::RPG::GameCore::MainMissionSortedItem* p0, ::RPG::GameCore::MainMissionSortedItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp655(::RPG::GameCore::PerformanceSkipOverrideRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp656(::RPG::Client::GridFightMonsterCampConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp657(::RPG::Client::GridFightMonsterCampConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp658(::RPG::Client::GridFightMonsterCampConfig* p0, ::RPG::Client::GridFightMonsterCampConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET))(this, p0, p1);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* __Gen_Delegate_Imp659(::XLua::LuaTable* p0, ::SuperScrollView::LoopFlexibleGridView* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp660(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp661(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp662(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp663(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp664(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp665(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp666(::RPG::Client::GridFightRole* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp667(::RPG::Client::GridFightRole* p0, ::RPG::Client::GridFightRole* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp668(::RPG::Client::GridFightAugment* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp669(::RPG::Client::GridFightAugment* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp670(::RPG::Client::GridFightAugment* p0, ::RPG::Client::GridFightAugment* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightAugment*, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp671(::RPG::Client::GridFightHandBookEquipItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp672(::RPG::Client::GridFightHandBookEquipItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp673(::RPG::Client::GridFightHandBookEquipItemConfig* p0, ::RPG::Client::GridFightHandBookEquipItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp674(::System::Boolean p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp675(::System::Boolean p0, ::System::Boolean p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp676(::RPG::Client::CakeRaceBattleItemDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp677(::RPG::Client::CakeRaceBattleItemDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp678(::RPG::Client::CakeRaceBattleItemDataItem* p0, ::RPG::Client::CakeRaceBattleItemDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp679(::UnityEngine::EventSystems::RaycastResult p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp680(::UnityEngine::EventSystems::RaycastResult p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp681(::UnityEngine::EventSystems::RaycastResult p0, ::UnityEngine::EventSystems::RaycastResult p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp682(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp683(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp684(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp685(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp686(::RPG::Client::GridFightGameRefData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp687(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp688(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_31*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_31*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp689(::RPG::Client::TeamBuild* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp690(::RPG::Client::TeamBuild* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp691(::RPG::Client::TeamBuild* p0, ::RPG::Client::TeamBuild* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamBuild*, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET))(this, p0, p1);
		}

		::RPG::Client::UIBubbleItem* __Gen_Delegate_Imp692(::XLua::LuaTable* p0, ::RPG::Client::UIBubbleManager* p1)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp693(::RPG::Client::GridFightOrbEntityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp694(::RPG::Client::GridFightOrbEntityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp695(::RPG::Client::GridFightOrbEntityData* p0, ::RPG::Client::GridFightOrbEntityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp696(::RPG::Client::ActivityHotData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp697(::RPG::Client::ActivityHotData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp698(::RPG::Client::ActivityHotData* p0, ::RPG::Client::ActivityHotData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotData*, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp699(::RPG::Client::ActivityHotCoreRewardData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp700(::RPG::Client::ActivityHotCoreRewardData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp701(::RPG::Client::ActivityHotCoreRewardData* p0, ::RPG::Client::ActivityHotCoreRewardData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp702(::RPG::Client::MatchPlayRecord* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp703(::RPG::Client::GridFightDivisionLevelReward* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp704(::RPG::Client::GridFightDivisionLevelReward* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp705(::RPG::Client::GridFightDivisionLevelReward* p0, ::RPG::Client::GridFightDivisionLevelReward* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp706(::RPG::Client::IResidentActivityPanelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp707(::RPG::Client::IResidentActivityPanelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp708(::RPG::Client::IResidentActivityPanelData* p0, ::RPG::Client::IResidentActivityPanelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp709(::RPG::Client::GridFightHandbookRole* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp710(::RPG::Client::GridFightHandbookRole* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp711(::RPG::Client::GridFightHandbookRole* p0, ::RPG::Client::GridFightHandbookRole* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp712(::RPG::Client::GridFightPortalData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp713(::RPG::Client::GridFightPortalData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp714(::RPG::Client::GridFightPortalData* p0, ::RPG::Client::GridFightPortalData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPortalData*, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp715(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp716(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp717(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp718(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp719(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp720(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp721(::RPG::Client::GridFightEquipItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp722(::RPG::Client::GridFightEquipItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp723(::RPG::Client::GridFightEquipItemConfig* p0, ::RPG::Client::GridFightEquipItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp724(::RPG::Client::TarotBookDeleteData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp725(::RPG::Client::TarotBookDeleteData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp726(::RPG::Client::TarotBookDeleteData* p0, ::RPG::Client::TarotBookDeleteData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp727(::XLua::LuaTable* p0, ::RPG::Client::PenaconyEndmostChronicleEvent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp728(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp729(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp730(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp731(::RPG::Client::CakeRaceHandbookCatItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp732(::RPG::Client::CakeRaceHandbookCatItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp733(::RPG::Client::CakeRaceHandbookCatItem* p0, ::RPG::Client::CakeRaceHandbookCatItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp734(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp735(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp736(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0, ::RPG::Client::DiceCombat::DiceCombatCommunicateData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp737(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp738(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp739(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp740(::RPG::Client::ChimeraDuelMasterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp741(::RPG::Client::ChimeraDuelMasterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp742(::RPG::Client::ChimeraDuelMasterData* p0, ::RPG::Client::ChimeraDuelMasterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp743(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp744(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp745(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp746(::System::UInt32 p0, ::Google::Protobuf::ByteString* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET))(this, p0, p1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp747()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp748(::RPG::Client::ChenLingBattleDeckData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp749(::RPG::Client::ChenLingBattleDeckData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp750(::RPG::Client::ChenLingBattleDeckData* p0, ::RPG::Client::ChenLingBattleDeckData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp751(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp752(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp753(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* p0, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp754(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp755(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp756(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* p0, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp757(::RPG::Client::ActivityIdleLive::ChapterRecordUiData p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp758(::RPG::Client::ActivityIdleLive::ChapterRecordUiData p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp759(::RPG::Client::ActivityIdleLive::ChapterRecordUiData p0, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp760(::RPG::Client::ActivityIdleLive::CaptainData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp761(::RPG::Client::ActivityIdleLive::CaptainData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp762(::RPG::Client::ActivityIdleLive::CaptainData* p0, ::RPG::Client::ActivityIdleLive::CaptainData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp763(::RPG::Client::DiceCombatDiceConfigData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp764(::RPG::Client::DiceCombatDiceConfigData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp765(::RPG::Client::DiceCombatDiceConfigData* p0, ::RPG::Client::DiceCombatDiceConfigData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp766(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp767(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp768(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp769(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp770(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp771(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp772(::RPG::GameCore::IdleLiveAvatarPropertyType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp773(::RPG::GameCore::IdleLiveAvatarPropertyType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp774(::RPG::GameCore::IdleLiveAvatarPropertyType p0, ::RPG::GameCore::IdleLiveAvatarPropertyType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp775(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp776(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp777(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* p0, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp778(::RPG::Client::AssistData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp779(::RPG::Client::AssistData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp780(::RPG::Client::AssistData* p0, ::RPG::Client::AssistData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AssistData*, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp781(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp782(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp783(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* p0, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp784(::RPG::Client::GridFightPresentEntity* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp785(::RPG::Client::GridFightPresentEntity* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp786(::RPG::Client::GridFightPresentEntity* p0, ::RPG::Client::GridFightPresentEntity* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp787(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp788(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp789(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* p0, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET))(this, p0, p1);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp790()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp791(::RPG::Client::AvatarOutfitUnit* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp792(::RPG::Client::AvatarOutfitUnit* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp793(::RPG::Client::AvatarOutfitUnit* p0, ::RPG::Client::AvatarOutfitUnit* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp794(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp795(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp796(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData p0, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp797(::XLua::LuaTable* p0, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp798(::XLua::LuaTable* p0, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp799(::RPG::Client::RogueTournArchiveData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp800(::RPG::Client::RogueTournArchiveData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp801(::RPG::Client::RogueTournArchiveData* p0, ::RPG::Client::RogueTournArchiveData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp802(::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp803(::RPG::Client::ActivityIdleLive::SpSlotUiData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp804(::RPG::Client::ActivityIdleLive::SpSlotUiData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp805(::RPG::Client::ActivityIdleLive::SpSlotUiData* p0, ::RPG::Client::ActivityIdleLive::SpSlotUiData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp806(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp807(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp808(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData p0, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp809(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp810(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp811(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* p0, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp812(::RPG::Client::IAvatarInfoProvider* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp813(::RPG::Client::IAvatarInfoProvider* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp814(::RPG::Client::IAvatarInfoProvider* p0, ::RPG::Client::IAvatarInfoProvider* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp815(::System::Object* p0, ::Class_3_1C169A0F2ACF26E7* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp816(::RPG::Client::ChatReportReason* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp817(::RPG::Client::ChatReportReason* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp818(::RPG::Client::ChatReportReason* p0, ::RPG::Client::ChatReportReason* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatReportReason*, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp819(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp820(::RPG::GameCore::TurnBasedModifierInstance* p0, ::RPG::GameCore::TurnBasedModifierInstance* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp821(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp822(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp823(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp824(::RPG::Client::IRogueTournPersonaRoomCardInGame* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp825(::RPG::Client::IRogueTournPersonaRoomCardInGame* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp826(::RPG::Client::IRogueTournPersonaRoomCardInGame* p0, ::RPG::Client::IRogueTournPersonaRoomCardInGame* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp827(::RPG::Client::CakeCatchCatData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp828(::RPG::Client::CakeCatchCatData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp829(::RPG::Client::CakeCatchCatData* p0, ::RPG::Client::CakeCatchCatData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeCatchCatData*, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp830(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp831(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp832(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData p0, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp833(::UnityEngine::Animator* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp834(::UnityEngine::Animator* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp835(::UnityEngine::Animator* p0, ::UnityEngine::Animator* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp836(::RPG::Client::IRogueTournPersonaRoomCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp837(::RPG::Client::IRogueTournPersonaRoomCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp838(::RPG::Client::IRogueTournPersonaRoomCard* p0, ::RPG::Client::IRogueTournPersonaRoomCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp839(::RPG::Client::MongoObjectId p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp840(::RPG::Client::MongoObjectId p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp841(::RPG::Client::MongoObjectId p0, ::RPG::Client::MongoObjectId p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp842(::System::Object* p0, ::RPG::Client::Promises::ExceptionEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Promises::ExceptionEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp843(::System::Exception* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp844()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* __Gen_Delegate_Imp845()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp846(::System::Exception* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp847(::System::Boolean p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp848(::System::Boolean p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp849(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* __Gen_Delegate_Imp850(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp851(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp852(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp853(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET))(this, p0);
		}

		::RPG::GameCore::MissionCondition* __Gen_Delegate_Imp854(::System::Exception* p0)
		{
			return ((::RPG::GameCore::MissionCondition*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp855(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp856(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp857(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET))(this, p0);
		}

		::RPG::Client::PlayerBriefDisplayData* __Gen_Delegate_Imp858(::System::Exception* p0)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp859(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp860(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp861(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET))(this, p0);
		}

		::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> __Gen_Delegate_Imp862(::System::Exception* p0)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp863(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp864(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp865(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* __Gen_Delegate_Imp866(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp867(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp868(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET))(this, p0);
		}

		::RPG::Client::SubMissionData* __Gen_Delegate_Imp869(::System::Exception* p0)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp870(::RPG::Client::SubMissionData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp871(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp872(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* __Gen_Delegate_Imp873(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp874(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp875(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp876(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET))(this, p0);
		}

		::RPG::Client::LightConeRecommendData* __Gen_Delegate_Imp877(::System::Exception* p0)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp878(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp879(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp880(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET))(this, p0);
		}

		::RPG::Client::BaseGameFlow* __Gen_Delegate_Imp881(::System::Exception* p0)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp882(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp883(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET))(this, p0);
		}

		::RPG::Client::MainMissionData* __Gen_Delegate_Imp884(::System::Exception* p0)
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp885(::RPG::Client::MainMissionData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp886(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp887(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* __Gen_Delegate_Imp888(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp889(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp890(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp891(::RPG::Client::BaseLobby* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET))(this, p0);
		}

		::RPG::Client::BaseLobby* __Gen_Delegate_Imp892(::System::Exception* p0)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp893(::RPG::Client::BaseLobby* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp894(::RPG::Client::BaseLobby* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp895(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET))(this, p0);
		}

		::RPG::Client::RelicRecommendData* __Gen_Delegate_Imp896(::System::Exception* p0)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp897(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp898(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp899(::RPG::Client::UIController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET))(this, p0);
		}

		::RPG::Client::UIController* __Gen_Delegate_Imp900(::System::Exception* p0)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp901(::RPG::Client::UIController* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp902(::RPG::Client::UIController* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET))(this, p0);
		}

		::RPG::Client::LuaUIController* __Gen_Delegate_Imp903(::System::Exception* p0)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp904(::RPG::Client::LuaUIController* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp905(::RPG::Client::LuaUIController* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp906(::UnityEngine::Texture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET))(this, p0);
		}

		::UnityEngine::Texture* __Gen_Delegate_Imp907(::System::Exception* p0)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp908(::UnityEngine::Texture* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp909(::UnityEngine::Texture* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp910(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET))(this, p0);
		}

		::RPG::Client::PlayerBoardInfo* __Gen_Delegate_Imp911(::System::Exception* p0)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp912(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp913(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp914(::UnityEngine::RenderTexture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET))(this, p0);
		}

		::UnityEngine::RenderTexture* __Gen_Delegate_Imp915(::System::Exception* p0)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp916(::UnityEngine::RenderTexture* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP916_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp917(::UnityEngine::RenderTexture* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP917_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp918(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP918_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp919(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP919_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp920(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* p0, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP920_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp921(::RPG::Client::GridFightGameFormationEditor_EditEvent* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP921_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp922(::RPG::Client::RechargeGiftData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP922_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp923(::RPG::Client::RechargeGiftData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP923_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp924(::RPG::Client::RechargeGiftData* p0, ::RPG::Client::RechargeGiftData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP924_OFFSET))(this, p0, p1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp925(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP925_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp926(::Class_1_E3A8B05AA1BBEE81* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP926_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp927(::Class_0_16E4307DCC419505_343* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP927_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp928(::Class_0_16E4307DCC419505_343* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP928_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp929(::RPG::Client::LittleGame::FiveDim::MiniGameEventReason p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameEventReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP929_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp930(::Struct_2_FEFADCB82FEB841E_3 p0)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP930_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp931(::Class_0_16E4307DCC419505_344* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP931_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp932(::RPG::Client::MapProp* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP932_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp933(::XLua::LuaTable* p0, ::System::Int32 p1, ::System::Object* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP933_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp934(::RPG::Client::GridFightEquipItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP934_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp935(::RPG::Client::GridFightGameModifier* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP935_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp936(::RPG::Client::GridFightGameModifier* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP936_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp937(::RPG::Client::GridFightEquipItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP937_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp938(::XLua::LuaTable* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP938_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp939(::RPG::Client::RogueTournHexData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP939_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp940(::Class_1_303D5A33D1401D59* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP940_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp941(::UnityEngine::GameObject* p0, ::RPG::Client::OpenWorld::StreamingItemData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP941_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp942(::RPG::Client::OpenWorld::StreamingItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP942_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp943(::UnityEngine::GameObject* p0, ::UnityEngine::GameObject* p1, ::RPG::Client::OpenWorld::StreamingItemData* p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP943_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp944(::Class_1_9C8BB23B0435A836* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP944_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp945(::System::Int32 p0, ::System::Int32 p1, ::System::Int32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP945_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp946(::Spine::TrackEntry* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP946_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp947(::Spine::TrackEntry* p0, ::Spine::Event* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP947_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp948(::UnityEngine::UI::Graphic* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP948_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp949(::UnityEngine::UI::Graphic* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP949_OFFSET))(this, p0, p1);
		}

		::System::Delegate* GetDelegateByType(::System::Type* type)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET))(this, type);
		}

		::System::Void PCall(::System::IntPtr L, ::System::Int32 nArgs, ::System::Int32 nResults, ::System::Int32 errFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_PCALL_OFFSET))(this, L, nArgs, nResults, errFunc);
		}

		::System::Void Action()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_ACTION_OFFSET))(this);
		}
	};
}
