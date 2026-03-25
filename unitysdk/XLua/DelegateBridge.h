#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/RPG/Client/ActivityModule_ActivityType.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/Data/EventIndex.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/RPG/Client/TextID.h"
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
class Class_0_16E4307DCC419505_329;
class Class_0_16E4307DCC419505_330;
class Class_0_16E4307DCC419505_331;
class Class_0_16E4307DCC419505_333;
class Class_0_16E4307DCC419505_334;
class Class_0_16E4307DCC419505_335;
class Class_0_16E4307DCC419505_336;
class Class_0_16E4307DCC419505_337;
class Class_1_2CF43CF3CB5182D0;
class Class_1_303D5A33D1401D59;
class Class_1_3497D086B05ACE3A;
class Class_1_43BD383C98B4C0C5_101;
class Class_1_43BD383C98B4C0C5_102;
class Class_1_47EB23CB5C4B2615_36;
class Class_1_5469D397DAE62876;
class Class_1_7D41D5D948382242;
class Class_1_8E541422F89D76B8;
class Class_1_99BD961747420BEB_18;
class Class_1_B1050BB558D637BF;
class Class_1_B1C37B065CBC515F;
class Class_1_BDA8DEEF59BE3031;
class Class_1_BEB73AACF0CDA957;
class Class_1_D0948460F4810867;
class Class_1_D6D8D891CDDE5DED;
class Class_1_E3A8B05AA1BBEE81;
class Class_1_F19AB08624168191;
class Class_1_FA4F4A67B1C04320_311;
class Class_1_FA4F4A67B1C04320_312;
class Class_1_FA4F4A67B1C04320_314;
class Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53;
class Class_2_D8257A310CAD757C;
class Class_2_E6C0556C909C8254;
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
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Promises { class ExceptionEventArgs; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }
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

#define XLUA_DELEGATEBRIDGE_ACTION_OFFSET UNITYSDK_OFFSET(0xFF44EB0)
#define XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET UNITYSDK_OFFSET(0xFF38F00)
#define XLUA_DELEGATEBRIDGE_PCALL_OFFSET UNITYSDK_OFFSET(0xFEC9D40)
#define XLUA_DELEGATEBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF34890)
#define XLUA_DELEGATEBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF44E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET UNITYSDK_OFFSET(0xFE95520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET UNITYSDK_OFFSET(0xFEA7B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET UNITYSDK_OFFSET(0xFEA7DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET UNITYSDK_OFFSET(0xFEA8170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET UNITYSDK_OFFSET(0xFEA8450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET UNITYSDK_OFFSET(0xFEA8690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET UNITYSDK_OFFSET(0xFEA89B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET UNITYSDK_OFFSET(0xFEA8C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET UNITYSDK_OFFSET(0xFEA8ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET UNITYSDK_OFFSET(0xFEA91F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET UNITYSDK_OFFSET(0xFEA94D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET UNITYSDK_OFFSET(0xFE96DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET UNITYSDK_OFFSET(0xFEA9710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET UNITYSDK_OFFSET(0xFEA9A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET UNITYSDK_OFFSET(0xFEA9C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET UNITYSDK_OFFSET(0xFEA9F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET UNITYSDK_OFFSET(0xFEAA190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET UNITYSDK_OFFSET(0xFEAA4B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET UNITYSDK_OFFSET(0xFEAA790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET UNITYSDK_OFFSET(0xFEAA9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET UNITYSDK_OFFSET(0xFEAACF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET UNITYSDK_OFFSET(0xFEAAF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET UNITYSDK_OFFSET(0xFE970D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET UNITYSDK_OFFSET(0xFEAB1E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET UNITYSDK_OFFSET(0xFEAB510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET UNITYSDK_OFFSET(0xFEAB8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET UNITYSDK_OFFSET(0xFEABBD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET UNITYSDK_OFFSET(0xFEABE10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET UNITYSDK_OFFSET(0xFEAC0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET UNITYSDK_OFFSET(0xFEAC470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET UNITYSDK_OFFSET(0xFEAC6B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET UNITYSDK_OFFSET(0xFEACA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET UNITYSDK_OFFSET(0xFEACD00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET UNITYSDK_OFFSET(0xFE97390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET UNITYSDK_OFFSET(0xFEACF40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET UNITYSDK_OFFSET(0xFEAD260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET UNITYSDK_OFFSET(0xFEAD540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET UNITYSDK_OFFSET(0xFEAD780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET UNITYSDK_OFFSET(0xFEAD9C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET UNITYSDK_OFFSET(0xFEADCD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET UNITYSDK_OFFSET(0xFEADFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET UNITYSDK_OFFSET(0xFEAE1F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET UNITYSDK_OFFSET(0xFEAE4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET UNITYSDK_OFFSET(0xFEAE890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET UNITYSDK_OFFSET(0xFE97640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET UNITYSDK_OFFSET(0xFEAEC30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET UNITYSDK_OFFSET(0xFEAEF40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET UNITYSDK_OFFSET(0xFEAF180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET UNITYSDK_OFFSET(0xFEAF3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET UNITYSDK_OFFSET(0xFEAF650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET UNITYSDK_OFFSET(0xFEAF9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET UNITYSDK_OFFSET(0xFEAFD10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET UNITYSDK_OFFSET(0xFEAFF50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET UNITYSDK_OFFSET(0xFEB0190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET UNITYSDK_OFFSET(0xFEB0440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET UNITYSDK_OFFSET(0xFE97950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET UNITYSDK_OFFSET(0xFEB0710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET UNITYSDK_OFFSET(0xFEB0950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET UNITYSDK_OFFSET(0xFEB0BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET UNITYSDK_OFFSET(0xFEB0E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET UNITYSDK_OFFSET(0xFEB11D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET UNITYSDK_OFFSET(0xFEB1440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET UNITYSDK_OFFSET(0xFEB1720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET UNITYSDK_OFFSET(0xFEB1960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET UNITYSDK_OFFSET(0xFEB1C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET UNITYSDK_OFFSET(0xFEB1EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET UNITYSDK_OFFSET(0xFE97C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET UNITYSDK_OFFSET(0xFEB2180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET UNITYSDK_OFFSET(0xFEB23C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET UNITYSDK_OFFSET(0xFEB26A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET UNITYSDK_OFFSET(0xFEB28E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET UNITYSDK_OFFSET(0xFEB2B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET UNITYSDK_OFFSET(0xFEB2DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET UNITYSDK_OFFSET(0xFEB3070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET UNITYSDK_OFFSET(0xFEB3320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET UNITYSDK_OFFSET(0xFEB3560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET UNITYSDK_OFFSET(0xFEB37A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET UNITYSDK_OFFSET(0xFE97FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET UNITYSDK_OFFSET(0xFEB3AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET UNITYSDK_OFFSET(0xFEB3E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET UNITYSDK_OFFSET(0xFEB40E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET UNITYSDK_OFFSET(0xFEB4320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET UNITYSDK_OFFSET(0xFEB4640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET UNITYSDK_OFFSET(0xFEB4880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET UNITYSDK_OFFSET(0xFEB4B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET UNITYSDK_OFFSET(0xFEB4DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET UNITYSDK_OFFSET(0xFEB50C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET UNITYSDK_OFFSET(0xFEB53D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET UNITYSDK_OFFSET(0xFE982B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET UNITYSDK_OFFSET(0xFEB5710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET UNITYSDK_OFFSET(0xFEB5950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET UNITYSDK_OFFSET(0xFEB5BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET UNITYSDK_OFFSET(0xFEB5EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET UNITYSDK_OFFSET(0xFEB6180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET UNITYSDK_OFFSET(0xFEB63C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET UNITYSDK_OFFSET(0xFEB66E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET UNITYSDK_OFFSET(0xFEB69C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET UNITYSDK_OFFSET(0xFEB6C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET UNITYSDK_OFFSET(0xFEB6F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET UNITYSDK_OFFSET(0xFE98610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET UNITYSDK_OFFSET(0xFEB7200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET UNITYSDK_OFFSET(0xFEB7440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET UNITYSDK_OFFSET(0xFEB7760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET UNITYSDK_OFFSET(0xFEB79A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET UNITYSDK_OFFSET(0xFEB7C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET UNITYSDK_OFFSET(0xFEB7E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET UNITYSDK_OFFSET(0xFEB81B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET UNITYSDK_OFFSET(0xFEB83F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET UNITYSDK_OFFSET(0xFEB8630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET UNITYSDK_OFFSET(0xFEB8890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET UNITYSDK_OFFSET(0xFE98920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET UNITYSDK_OFFSET(0xFE95760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET UNITYSDK_OFFSET(0xFEB8B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET UNITYSDK_OFFSET(0xFEB8E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET UNITYSDK_OFFSET(0xFEB9060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET UNITYSDK_OFFSET(0xFEB9340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET UNITYSDK_OFFSET(0xFEB9580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET UNITYSDK_OFFSET(0xFEB98A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET UNITYSDK_OFFSET(0xFEB9B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET UNITYSDK_OFFSET(0xFEB9DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET UNITYSDK_OFFSET(0xFEBA0E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET UNITYSDK_OFFSET(0xFEBA3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET UNITYSDK_OFFSET(0xFE98C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET UNITYSDK_OFFSET(0xFEBA600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET UNITYSDK_OFFSET(0xFEBA920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET UNITYSDK_OFFSET(0xFEBAB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET UNITYSDK_OFFSET(0xFEBAF50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET UNITYSDK_OFFSET(0xFEBB230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET UNITYSDK_OFFSET(0xFEBB470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET UNITYSDK_OFFSET(0xFEBB790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET UNITYSDK_OFFSET(0xFEBBA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET UNITYSDK_OFFSET(0xFEBBCB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET UNITYSDK_OFFSET(0xFEBBFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET UNITYSDK_OFFSET(0xFE98F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET UNITYSDK_OFFSET(0xFEBC2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET UNITYSDK_OFFSET(0xFEBC4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET UNITYSDK_OFFSET(0xFEBC810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET UNITYSDK_OFFSET(0xFEBCA50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET UNITYSDK_OFFSET(0xFEBCCD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET UNITYSDK_OFFSET(0xFEBCF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET UNITYSDK_OFFSET(0xFEBD1A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET UNITYSDK_OFFSET(0xFEBD480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET UNITYSDK_OFFSET(0xFEBD820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET UNITYSDK_OFFSET(0xFEBDBC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET UNITYSDK_OFFSET(0xFE991D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET UNITYSDK_OFFSET(0xFEBDEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET UNITYSDK_OFFSET(0xFEBE220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET UNITYSDK_OFFSET(0xFEBE550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET UNITYSDK_OFFSET(0xFEBE790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET UNITYSDK_OFFSET(0xFEBEAC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET UNITYSDK_OFFSET(0xFEBEDF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET UNITYSDK_OFFSET(0xFEBF120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET UNITYSDK_OFFSET(0xFEBF360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET UNITYSDK_OFFSET(0xFEBF770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET UNITYSDK_OFFSET(0xFEBFB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET UNITYSDK_OFFSET(0xFE99450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET UNITYSDK_OFFSET(0xFEBFDF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET UNITYSDK_OFFSET(0xFEC00D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET UNITYSDK_OFFSET(0xFEC0310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET UNITYSDK_OFFSET(0xFEC0550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET UNITYSDK_OFFSET(0xFEC0830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET UNITYSDK_OFFSET(0xFEC0A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET UNITYSDK_OFFSET(0xFEC0D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET UNITYSDK_OFFSET(0xFEC1120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET UNITYSDK_OFFSET(0xFEC1360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET UNITYSDK_OFFSET(0xFEC15A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET UNITYSDK_OFFSET(0xFE99760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET UNITYSDK_OFFSET(0xFEC1940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET UNITYSDK_OFFSET(0xFEC1CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET UNITYSDK_OFFSET(0xFEC1F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET UNITYSDK_OFFSET(0xFEC2160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET UNITYSDK_OFFSET(0xFEC2460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET UNITYSDK_OFFSET(0xFEC26A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET UNITYSDK_OFFSET(0xFEC2980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET UNITYSDK_OFFSET(0xFEC2C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET UNITYSDK_OFFSET(0xFEC2EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET UNITYSDK_OFFSET(0xFEC31C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET UNITYSDK_OFFSET(0xFE99B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET UNITYSDK_OFFSET(0xFEC3400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET UNITYSDK_OFFSET(0xFEC3750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET UNITYSDK_OFFSET(0xFEC3A80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET UNITYSDK_OFFSET(0xFEC3DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET UNITYSDK_OFFSET(0xFEC4090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET UNITYSDK_OFFSET(0xFEC42D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET UNITYSDK_OFFSET(0xFEC45F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET UNITYSDK_OFFSET(0xFEC4860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET UNITYSDK_OFFSET(0xFEC4B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET UNITYSDK_OFFSET(0xFEC4E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET UNITYSDK_OFFSET(0xFE99E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET UNITYSDK_OFFSET(0xFEC5060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET UNITYSDK_OFFSET(0xFEC5380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET UNITYSDK_OFFSET(0xFEC5660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET UNITYSDK_OFFSET(0xFEC58A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET UNITYSDK_OFFSET(0xFEC5BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET UNITYSDK_OFFSET(0xFEC5E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET UNITYSDK_OFFSET(0xFEC6080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET UNITYSDK_OFFSET(0xFEC6360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET UNITYSDK_OFFSET(0xFEC65A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET UNITYSDK_OFFSET(0xFEC68C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET UNITYSDK_OFFSET(0xFE9A140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET UNITYSDK_OFFSET(0xFEC6BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET UNITYSDK_OFFSET(0xFEC6DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET UNITYSDK_OFFSET(0xFEC7100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET UNITYSDK_OFFSET(0xFEC7430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET UNITYSDK_OFFSET(0xFEC76C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET UNITYSDK_OFFSET(0xFEC7A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET UNITYSDK_OFFSET(0xFEC7D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET UNITYSDK_OFFSET(0xFEC7F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET UNITYSDK_OFFSET(0xFEC8290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET UNITYSDK_OFFSET(0xFEC84D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET UNITYSDK_OFFSET(0xFE9A3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET UNITYSDK_OFFSET(0xFEC8800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET UNITYSDK_OFFSET(0xFEC8B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET UNITYSDK_OFFSET(0xFEC8E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET UNITYSDK_OFFSET(0xFEC90A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET UNITYSDK_OFFSET(0xFEC93D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET UNITYSDK_OFFSET(0xFEC9700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET UNITYSDK_OFFSET(0xFEC9A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET UNITYSDK_OFFSET(0xFEC9E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET UNITYSDK_OFFSET(0xFECA0E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET UNITYSDK_OFFSET(0xFECA310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET UNITYSDK_OFFSET(0xFE9A620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET UNITYSDK_OFFSET(0xFE959A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET UNITYSDK_OFFSET(0xFECA630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET UNITYSDK_OFFSET(0xFECA8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET UNITYSDK_OFFSET(0xFECAC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET UNITYSDK_OFFSET(0xFECAFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET UNITYSDK_OFFSET(0xFECB380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET UNITYSDK_OFFSET(0xFECB5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET UNITYSDK_OFFSET(0xFECB850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET UNITYSDK_OFFSET(0xFECBA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET UNITYSDK_OFFSET(0xFECBD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET UNITYSDK_OFFSET(0xFECBFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET UNITYSDK_OFFSET(0xFE9A890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET UNITYSDK_OFFSET(0xFECC2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET UNITYSDK_OFFSET(0xFECC4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET UNITYSDK_OFFSET(0xFECC7F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET UNITYSDK_OFFSET(0xFECCAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET UNITYSDK_OFFSET(0xFECCD00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET UNITYSDK_OFFSET(0xFECD020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET UNITYSDK_OFFSET(0xFECD250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET UNITYSDK_OFFSET(0xFECD5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET UNITYSDK_OFFSET(0xFECD8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET UNITYSDK_OFFSET(0xFECDC30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET UNITYSDK_OFFSET(0xFE9AD50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET UNITYSDK_OFFSET(0xFECDE80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET UNITYSDK_OFFSET(0xFECE0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET UNITYSDK_OFFSET(0xFECE3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET UNITYSDK_OFFSET(0xFECE6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET UNITYSDK_OFFSET(0xFECE8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET UNITYSDK_OFFSET(0xFECEC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET UNITYSDK_OFFSET(0xFECEE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET UNITYSDK_OFFSET(0xFECF070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET UNITYSDK_OFFSET(0xFECF2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET UNITYSDK_OFFSET(0xFECF4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET UNITYSDK_OFFSET(0xFE9B2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET UNITYSDK_OFFSET(0xFECF700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET UNITYSDK_OFFSET(0xFECFA40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET UNITYSDK_OFFSET(0xFECFCC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET UNITYSDK_OFFSET(0xFED0050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET UNITYSDK_OFFSET(0xFED0330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET UNITYSDK_OFFSET(0xFED0560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET UNITYSDK_OFFSET(0xFED0880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET UNITYSDK_OFFSET(0xFED0BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET UNITYSDK_OFFSET(0xFED0DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET UNITYSDK_OFFSET(0xFED1120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET UNITYSDK_OFFSET(0xFE9B7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET UNITYSDK_OFFSET(0xFED1460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET UNITYSDK_OFFSET(0xFED17A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET UNITYSDK_OFFSET(0xFED19D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET UNITYSDK_OFFSET(0xFED1D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET UNITYSDK_OFFSET(0xFED2040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET UNITYSDK_OFFSET(0xFED2380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET UNITYSDK_OFFSET(0xFED2660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET UNITYSDK_OFFSET(0xFED2890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET UNITYSDK_OFFSET(0xFED2BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET UNITYSDK_OFFSET(0xFED2F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET UNITYSDK_OFFSET(0xFE9BC60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET UNITYSDK_OFFSET(0xFED3210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET UNITYSDK_OFFSET(0xFED34B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET UNITYSDK_OFFSET(0xFED36E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET UNITYSDK_OFFSET(0xFED3910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET UNITYSDK_OFFSET(0xFED3BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET UNITYSDK_OFFSET(0xFED3E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET UNITYSDK_OFFSET(0xFED40B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET UNITYSDK_OFFSET(0xFED43D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET UNITYSDK_OFFSET(0xFED4640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET UNITYSDK_OFFSET(0xFED4920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET UNITYSDK_OFFSET(0xFE9C150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET UNITYSDK_OFFSET(0xFED4B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET UNITYSDK_OFFSET(0xFED4E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET UNITYSDK_OFFSET(0xFED51C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET UNITYSDK_OFFSET(0xFED5460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET UNITYSDK_OFFSET(0xFED5880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET UNITYSDK_OFFSET(0xFED5B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET UNITYSDK_OFFSET(0xFED5D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET UNITYSDK_OFFSET(0xFED60B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET UNITYSDK_OFFSET(0xFED6390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET UNITYSDK_OFFSET(0xFED65C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET UNITYSDK_OFFSET(0xFE9C520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET UNITYSDK_OFFSET(0xFED68E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET UNITYSDK_OFFSET(0xFED6BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET UNITYSDK_OFFSET(0xFED6DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET UNITYSDK_OFFSET(0xFED7110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET UNITYSDK_OFFSET(0xFED73F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET UNITYSDK_OFFSET(0xFED7620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET UNITYSDK_OFFSET(0xFED7940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET UNITYSDK_OFFSET(0xFED7B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET UNITYSDK_OFFSET(0xFED7E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET UNITYSDK_OFFSET(0xFED8130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET UNITYSDK_OFFSET(0xFE9C940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET UNITYSDK_OFFSET(0xFED8360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET UNITYSDK_OFFSET(0xFED8680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET UNITYSDK_OFFSET(0xFED88B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET UNITYSDK_OFFSET(0xFED8B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET UNITYSDK_OFFSET(0xFED8E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET UNITYSDK_OFFSET(0xFED9060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET UNITYSDK_OFFSET(0xFED9380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET UNITYSDK_OFFSET(0xFED9660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET UNITYSDK_OFFSET(0xFED9890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET UNITYSDK_OFFSET(0xFED9BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET UNITYSDK_OFFSET(0xFE9CC60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET UNITYSDK_OFFSET(0xFED9E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET UNITYSDK_OFFSET(0xFEDA0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET UNITYSDK_OFFSET(0xFEDA3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET UNITYSDK_OFFSET(0xFEDA6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET UNITYSDK_OFFSET(0xFEDA8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET UNITYSDK_OFFSET(0xFEDAC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET UNITYSDK_OFFSET(0xFEDAEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET UNITYSDK_OFFSET(0xFEDB120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET UNITYSDK_OFFSET(0xFEDB440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET UNITYSDK_OFFSET(0xFEDB720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET UNITYSDK_OFFSET(0xFE9CF90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET UNITYSDK_OFFSET(0xFE95C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET UNITYSDK_OFFSET(0xFEDB950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET UNITYSDK_OFFSET(0xFEDBC70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET UNITYSDK_OFFSET(0xFEDBF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET UNITYSDK_OFFSET(0xFEDC1E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET UNITYSDK_OFFSET(0xFEDC410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET UNITYSDK_OFFSET(0xFEDC6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET UNITYSDK_OFFSET(0xFEDC920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET UNITYSDK_OFFSET(0xFEDCC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET UNITYSDK_OFFSET(0xFEDCF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET UNITYSDK_OFFSET(0xFEDD150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET UNITYSDK_OFFSET(0xFE9D290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET UNITYSDK_OFFSET(0xFEDD470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET UNITYSDK_OFFSET(0xFEDD750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET UNITYSDK_OFFSET(0xFEDD980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET UNITYSDK_OFFSET(0xFEDDCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET UNITYSDK_OFFSET(0xFEDDF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET UNITYSDK_OFFSET(0xFEDE220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET UNITYSDK_OFFSET(0xFEDE500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET UNITYSDK_OFFSET(0xFEDE730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET UNITYSDK_OFFSET(0xFEDEA50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET UNITYSDK_OFFSET(0xFEDED30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET UNITYSDK_OFFSET(0xFE9D490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET UNITYSDK_OFFSET(0xFEDEF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET UNITYSDK_OFFSET(0xFEDF280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET UNITYSDK_OFFSET(0xFEDF5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET UNITYSDK_OFFSET(0xFEDF870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET UNITYSDK_OFFSET(0xFEDFC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET UNITYSDK_OFFSET(0xFEDFF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET UNITYSDK_OFFSET(0xFEE01C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET UNITYSDK_OFFSET(0xFEE04F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET UNITYSDK_OFFSET(0xFEE0800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET UNITYSDK_OFFSET(0xFEE0BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET UNITYSDK_OFFSET(0xFE9D6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET UNITYSDK_OFFSET(0xFEE0E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET UNITYSDK_OFFSET(0xFEE10B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET UNITYSDK_OFFSET(0xFEE13D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET UNITYSDK_OFFSET(0xFEE16B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET UNITYSDK_OFFSET(0xFEE18E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET UNITYSDK_OFFSET(0xFEE1C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET UNITYSDK_OFFSET(0xFEE1EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET UNITYSDK_OFFSET(0xFEE2110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET UNITYSDK_OFFSET(0xFEE2430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET UNITYSDK_OFFSET(0xFEE2710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET UNITYSDK_OFFSET(0xFE9D8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET UNITYSDK_OFFSET(0xFEE2940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET UNITYSDK_OFFSET(0xFEE2C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET UNITYSDK_OFFSET(0xFEE2F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET UNITYSDK_OFFSET(0xFEE3170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET UNITYSDK_OFFSET(0xFEE3490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET UNITYSDK_OFFSET(0xFEE37A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET UNITYSDK_OFFSET(0xFEE3A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET UNITYSDK_OFFSET(0xFEE3C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET UNITYSDK_OFFSET(0xFEE3F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET UNITYSDK_OFFSET(0xFEE41F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET UNITYSDK_OFFSET(0xFE9DB30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET UNITYSDK_OFFSET(0xFEE4420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET UNITYSDK_OFFSET(0xFEE4740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET UNITYSDK_OFFSET(0xFEE4A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET UNITYSDK_OFFSET(0xFEE4C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET UNITYSDK_OFFSET(0xFEE4F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET UNITYSDK_OFFSET(0xFEE51F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET UNITYSDK_OFFSET(0xFEE54D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET UNITYSDK_OFFSET(0xFEE5700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET UNITYSDK_OFFSET(0xFEE5A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET UNITYSDK_OFFSET(0xFEE5D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET UNITYSDK_OFFSET(0xFE9DE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET UNITYSDK_OFFSET(0xFEE5F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET UNITYSDK_OFFSET(0xFEE6250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET UNITYSDK_OFFSET(0xFEE6530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET UNITYSDK_OFFSET(0xFEE6760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET UNITYSDK_OFFSET(0xFEE6A80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET UNITYSDK_OFFSET(0xFEE6D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET UNITYSDK_OFFSET(0xFEE6F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET UNITYSDK_OFFSET(0xFEE72B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET UNITYSDK_OFFSET(0xFEE74E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET UNITYSDK_OFFSET(0xFEE77C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET UNITYSDK_OFFSET(0xFE9E120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET UNITYSDK_OFFSET(0xFEE79F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET UNITYSDK_OFFSET(0xFEE7D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET UNITYSDK_OFFSET(0xFEE7FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET UNITYSDK_OFFSET(0xFEE8220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET UNITYSDK_OFFSET(0xFEE8540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET UNITYSDK_OFFSET(0xFEE8820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET UNITYSDK_OFFSET(0xFEE8A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET UNITYSDK_OFFSET(0xFEE8D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET UNITYSDK_OFFSET(0xFEE9050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET UNITYSDK_OFFSET(0xFEE9280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET UNITYSDK_OFFSET(0xFE9E440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET UNITYSDK_OFFSET(0xFEE95A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET UNITYSDK_OFFSET(0xFEE97D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET UNITYSDK_OFFSET(0xFEE9B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET UNITYSDK_OFFSET(0xFEE9E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET UNITYSDK_OFFSET(0xFEEA180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET UNITYSDK_OFFSET(0xFEEA3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET UNITYSDK_OFFSET(0xFEEA690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET UNITYSDK_OFFSET(0xFEEA8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET UNITYSDK_OFFSET(0xFEEABE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET UNITYSDK_OFFSET(0xFEEAE30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET UNITYSDK_OFFSET(0xFE9E6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET UNITYSDK_OFFSET(0xFEEB110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET UNITYSDK_OFFSET(0xFEEB340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET UNITYSDK_OFFSET(0xFEEB660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET UNITYSDK_OFFSET(0xFEEB960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET UNITYSDK_OFFSET(0xFEEBBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET UNITYSDK_OFFSET(0xFEEBF10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET UNITYSDK_OFFSET(0xFEEC1F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET UNITYSDK_OFFSET(0xFEEC420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET UNITYSDK_OFFSET(0xFEEC740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET UNITYSDK_OFFSET(0xFEECA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET UNITYSDK_OFFSET(0xFE9E910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET UNITYSDK_OFFSET(0xFE95E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET UNITYSDK_OFFSET(0xFEECC50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET UNITYSDK_OFFSET(0xFEECF70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET UNITYSDK_OFFSET(0xFEED250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET UNITYSDK_OFFSET(0xFEED480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET UNITYSDK_OFFSET(0xFEED7A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET UNITYSDK_OFFSET(0xFEEDA40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET UNITYSDK_OFFSET(0xFEEDD70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET UNITYSDK_OFFSET(0xFEEE130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET UNITYSDK_OFFSET(0xFEEE4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET UNITYSDK_OFFSET(0xFEEE7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET UNITYSDK_OFFSET(0xFE9EB40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET UNITYSDK_OFFSET(0xFEEEA00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET UNITYSDK_OFFSET(0xFEEED20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET UNITYSDK_OFFSET(0xFEEF000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET UNITYSDK_OFFSET(0xFEEF230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET UNITYSDK_OFFSET(0xFEEF550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET UNITYSDK_OFFSET(0xFEEF830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET UNITYSDK_OFFSET(0xFEEFA60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET UNITYSDK_OFFSET(0xFEEFD80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET UNITYSDK_OFFSET(0xFEEFFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET UNITYSDK_OFFSET(0xFEF01E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET UNITYSDK_OFFSET(0xFE9EE50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET UNITYSDK_OFFSET(0xFEF04C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET UNITYSDK_OFFSET(0xFEF06F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET UNITYSDK_OFFSET(0xFEF0A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET UNITYSDK_OFFSET(0xFEF0CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET UNITYSDK_OFFSET(0xFEF0F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET UNITYSDK_OFFSET(0xFEF1240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET UNITYSDK_OFFSET(0xFEF1520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET UNITYSDK_OFFSET(0xFEF1750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET UNITYSDK_OFFSET(0xFEF1A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET UNITYSDK_OFFSET(0xFEF1D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET UNITYSDK_OFFSET(0xFE9F100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET UNITYSDK_OFFSET(0xFEF1F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET UNITYSDK_OFFSET(0xFEF22A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET UNITYSDK_OFFSET(0xFEF2540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET UNITYSDK_OFFSET(0xFEF27A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET UNITYSDK_OFFSET(0xFEF2B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET UNITYSDK_OFFSET(0xFEF2E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET UNITYSDK_OFFSET(0xFEF3150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET UNITYSDK_OFFSET(0xFEF3380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET UNITYSDK_OFFSET(0xFEF36A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET UNITYSDK_OFFSET(0xFEF3980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET UNITYSDK_OFFSET(0xFE9F440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET UNITYSDK_OFFSET(0xFEF3BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET UNITYSDK_OFFSET(0xFEF3ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET UNITYSDK_OFFSET(0xFEF41B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET UNITYSDK_OFFSET(0xFEF43E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET UNITYSDK_OFFSET(0xFEF4700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET UNITYSDK_OFFSET(0xFEF4AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET UNITYSDK_OFFSET(0xFEF4D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET UNITYSDK_OFFSET(0xFEF4F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET UNITYSDK_OFFSET(0xFEF52B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET UNITYSDK_OFFSET(0xFEF55E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET UNITYSDK_OFFSET(0xFE9F7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET UNITYSDK_OFFSET(0xFEF58C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET UNITYSDK_OFFSET(0xFEF5AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET UNITYSDK_OFFSET(0xFEF5E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET UNITYSDK_OFFSET(0xFEF60F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET UNITYSDK_OFFSET(0xFEF6320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET UNITYSDK_OFFSET(0xFEF6640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET UNITYSDK_OFFSET(0xFEF68E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET UNITYSDK_OFFSET(0xFEF6BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET UNITYSDK_OFFSET(0xFEF6DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET UNITYSDK_OFFSET(0xFEF7110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET UNITYSDK_OFFSET(0xFE9FB20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET UNITYSDK_OFFSET(0xFEF74A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET UNITYSDK_OFFSET(0xFEF7780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET UNITYSDK_OFFSET(0xFEF79B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET UNITYSDK_OFFSET(0xFEF7CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET UNITYSDK_OFFSET(0xFEF7FB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET UNITYSDK_OFFSET(0xFEF81E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET UNITYSDK_OFFSET(0xFEF8500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET UNITYSDK_OFFSET(0xFEF87E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET UNITYSDK_OFFSET(0xFEF8A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET UNITYSDK_OFFSET(0xFEF8D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET UNITYSDK_OFFSET(0xFE9FDD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET UNITYSDK_OFFSET(0xFEF9010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET UNITYSDK_OFFSET(0xFEF9240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET UNITYSDK_OFFSET(0xFEF9560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET UNITYSDK_OFFSET(0xFEF97B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET UNITYSDK_OFFSET(0xFEF9A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET UNITYSDK_OFFSET(0xFEF9C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET UNITYSDK_OFFSET(0xFEF9EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET UNITYSDK_OFFSET(0xFEFA0F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET UNITYSDK_OFFSET(0xFEFA340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET UNITYSDK_OFFSET(0xFEFA590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET UNITYSDK_OFFSET(0xFEA0010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET UNITYSDK_OFFSET(0xFEFA7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET UNITYSDK_OFFSET(0xFEFAA30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET UNITYSDK_OFFSET(0xFEFAC80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET UNITYSDK_OFFSET(0xFEFAED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET UNITYSDK_OFFSET(0xFEFB120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET UNITYSDK_OFFSET(0xFEFB370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET UNITYSDK_OFFSET(0xFEFB5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET UNITYSDK_OFFSET(0xFEFB810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET UNITYSDK_OFFSET(0xFEFBA60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET UNITYSDK_OFFSET(0xFEFBCB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET UNITYSDK_OFFSET(0xFEA02B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET UNITYSDK_OFFSET(0xFEFBF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET UNITYSDK_OFFSET(0xFEFC130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET UNITYSDK_OFFSET(0xFEFC490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET UNITYSDK_OFFSET(0xFEFC7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET UNITYSDK_OFFSET(0xFEFCB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET UNITYSDK_OFFSET(0xFEFCDF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET UNITYSDK_OFFSET(0xFEFD020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET UNITYSDK_OFFSET(0xFEFD340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET UNITYSDK_OFFSET(0xFEFD620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET UNITYSDK_OFFSET(0xFEFD850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET UNITYSDK_OFFSET(0xFEA04F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET UNITYSDK_OFFSET(0xFE96130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET UNITYSDK_OFFSET(0xFEFDB70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET UNITYSDK_OFFSET(0xFEFDE50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET UNITYSDK_OFFSET(0xFEFE080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET UNITYSDK_OFFSET(0xFEFE360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET UNITYSDK_OFFSET(0xFEFE590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET UNITYSDK_OFFSET(0xFEFE8B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET UNITYSDK_OFFSET(0xFEFEB90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET UNITYSDK_OFFSET(0xFEFEDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET UNITYSDK_OFFSET(0xFEFF0E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET UNITYSDK_OFFSET(0xFEFF3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET UNITYSDK_OFFSET(0xFEA07A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET UNITYSDK_OFFSET(0xFEFF5F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET UNITYSDK_OFFSET(0xFEFF910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET UNITYSDK_OFFSET(0xFEFFB40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET UNITYSDK_OFFSET(0xFEFFEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET UNITYSDK_OFFSET(0xFF001E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET UNITYSDK_OFFSET(0xFF00520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET UNITYSDK_OFFSET(0xFF007E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET UNITYSDK_OFFSET(0xFF00A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET UNITYSDK_OFFSET(0xFF00D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET UNITYSDK_OFFSET(0xFF01010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET UNITYSDK_OFFSET(0xFEA0A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET UNITYSDK_OFFSET(0xFF01240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET UNITYSDK_OFFSET(0xFF01560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET UNITYSDK_OFFSET(0xFF01840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET UNITYSDK_OFFSET(0xFF01A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET UNITYSDK_OFFSET(0xFF01D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET UNITYSDK_OFFSET(0xFF01FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET UNITYSDK_OFFSET(0xFF022F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET UNITYSDK_OFFSET(0xFF02630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET UNITYSDK_OFFSET(0xFF02970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET UNITYSDK_OFFSET(0xFF02C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET UNITYSDK_OFFSET(0xFEA0CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET UNITYSDK_OFFSET(0xFF02E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET UNITYSDK_OFFSET(0xFF031A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET UNITYSDK_OFFSET(0xFF03480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET UNITYSDK_OFFSET(0xFF036B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET UNITYSDK_OFFSET(0xFF039D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET UNITYSDK_OFFSET(0xFF03CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET UNITYSDK_OFFSET(0xFF03EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET UNITYSDK_OFFSET(0xFF04200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET UNITYSDK_OFFSET(0xFF044E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET UNITYSDK_OFFSET(0xFF04710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET UNITYSDK_OFFSET(0xFEA0F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET UNITYSDK_OFFSET(0xFF04A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET UNITYSDK_OFFSET(0xFF04D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET UNITYSDK_OFFSET(0xFF04FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET UNITYSDK_OFFSET(0xFF05340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET UNITYSDK_OFFSET(0xFF05620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET UNITYSDK_OFFSET(0xFF05850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET UNITYSDK_OFFSET(0xFF05B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET UNITYSDK_OFFSET(0xFF05E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET UNITYSDK_OFFSET(0xFF06080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET UNITYSDK_OFFSET(0xFF063A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET UNITYSDK_OFFSET(0xFEA11F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET UNITYSDK_OFFSET(0xFF06640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET UNITYSDK_OFFSET(0xFF06920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET UNITYSDK_OFFSET(0xFF06B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET UNITYSDK_OFFSET(0xFF06E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET UNITYSDK_OFFSET(0xFF07150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET UNITYSDK_OFFSET(0xFF07380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET UNITYSDK_OFFSET(0xFF076A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET UNITYSDK_OFFSET(0xFF07980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET UNITYSDK_OFFSET(0xFF07BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET UNITYSDK_OFFSET(0xFF07ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET UNITYSDK_OFFSET(0xFEA1470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET UNITYSDK_OFFSET(0xFF081B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET UNITYSDK_OFFSET(0xFF083E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET UNITYSDK_OFFSET(0xFF08700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET UNITYSDK_OFFSET(0xFF089E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET UNITYSDK_OFFSET(0xFF08C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET UNITYSDK_OFFSET(0xFF08F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET UNITYSDK_OFFSET(0xFF09210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET UNITYSDK_OFFSET(0xFF09440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET UNITYSDK_OFFSET(0xFF09760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET UNITYSDK_OFFSET(0xFF09A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET UNITYSDK_OFFSET(0xFEA16E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET UNITYSDK_OFFSET(0xFF09C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET UNITYSDK_OFFSET(0xFF09F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET UNITYSDK_OFFSET(0xFF0A270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET UNITYSDK_OFFSET(0xFF0A4A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET UNITYSDK_OFFSET(0xFF0A7C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET UNITYSDK_OFFSET(0xFF0AAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET UNITYSDK_OFFSET(0xFF0ACD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET UNITYSDK_OFFSET(0xFF0AFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET UNITYSDK_OFFSET(0xFF0B2D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET UNITYSDK_OFFSET(0xFF0B500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET UNITYSDK_OFFSET(0xFEA1960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET UNITYSDK_OFFSET(0xFF0B820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET UNITYSDK_OFFSET(0xFF0BB00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET UNITYSDK_OFFSET(0xFF0BD30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET UNITYSDK_OFFSET(0xFF0C050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET UNITYSDK_OFFSET(0xFF0C330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET UNITYSDK_OFFSET(0xFF0C560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET UNITYSDK_OFFSET(0xFF0C880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET UNITYSDK_OFFSET(0xFF0CB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET UNITYSDK_OFFSET(0xFF0CD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET UNITYSDK_OFFSET(0xFF0D0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET UNITYSDK_OFFSET(0xFEA1C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET UNITYSDK_OFFSET(0xFF0D390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET UNITYSDK_OFFSET(0xFF0D5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET UNITYSDK_OFFSET(0xFF0D8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET UNITYSDK_OFFSET(0xFF0DB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET UNITYSDK_OFFSET(0xFF0DD40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET UNITYSDK_OFFSET(0xFF0E020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET UNITYSDK_OFFSET(0xFF0E300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET UNITYSDK_OFFSET(0xFF0E550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET UNITYSDK_OFFSET(0xFF0E7A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET UNITYSDK_OFFSET(0xFF0EA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET UNITYSDK_OFFSET(0xFEA1F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET UNITYSDK_OFFSET(0xFE963A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET UNITYSDK_OFFSET(0xFF0ECB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET UNITYSDK_OFFSET(0xFF0EFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET UNITYSDK_OFFSET(0xFF0F2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET UNITYSDK_OFFSET(0xFF0F5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET UNITYSDK_OFFSET(0xFF0F800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET UNITYSDK_OFFSET(0xFF0FB20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET UNITYSDK_OFFSET(0xFF0FE00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET UNITYSDK_OFFSET(0xFF10030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET UNITYSDK_OFFSET(0xFF10350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET UNITYSDK_OFFSET(0xFF10630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET UNITYSDK_OFFSET(0xFEA2240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET UNITYSDK_OFFSET(0xFF10860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET UNITYSDK_OFFSET(0xFF10B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET UNITYSDK_OFFSET(0xFF10E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET UNITYSDK_OFFSET(0xFF11090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET UNITYSDK_OFFSET(0xFF113B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET UNITYSDK_OFFSET(0xFF11690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET UNITYSDK_OFFSET(0xFF118C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET UNITYSDK_OFFSET(0xFF11BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET UNITYSDK_OFFSET(0xFF11E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET UNITYSDK_OFFSET(0xFF12170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET UNITYSDK_OFFSET(0xFEA25B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET UNITYSDK_OFFSET(0xFF12500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET UNITYSDK_OFFSET(0xFF12890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET UNITYSDK_OFFSET(0xFF12B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET UNITYSDK_OFFSET(0xFF12DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET UNITYSDK_OFFSET(0xFF130C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET UNITYSDK_OFFSET(0xFF132F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET UNITYSDK_OFFSET(0xFF135D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET UNITYSDK_OFFSET(0xFF13800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET UNITYSDK_OFFSET(0xFF13B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET UNITYSDK_OFFSET(0xFF14020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET UNITYSDK_OFFSET(0xFEA2820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET UNITYSDK_OFFSET(0xFF14300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET UNITYSDK_OFFSET(0xFF14530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET UNITYSDK_OFFSET(0xFF14850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET UNITYSDK_OFFSET(0xFF14B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET UNITYSDK_OFFSET(0xFF14D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET UNITYSDK_OFFSET(0xFF15080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET UNITYSDK_OFFSET(0xFF152B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET UNITYSDK_OFFSET(0xFF155D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET UNITYSDK_OFFSET(0xFF158B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET UNITYSDK_OFFSET(0xFF15AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET UNITYSDK_OFFSET(0xFEA2A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET UNITYSDK_OFFSET(0xFF15E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET UNITYSDK_OFFSET(0xFF160E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET UNITYSDK_OFFSET(0xFF16310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET UNITYSDK_OFFSET(0xFF16630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET UNITYSDK_OFFSET(0xFF16940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET UNITYSDK_OFFSET(0xFF16CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET UNITYSDK_OFFSET(0xFF16FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET UNITYSDK_OFFSET(0xFF171F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET UNITYSDK_OFFSET(0xFF17510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET UNITYSDK_OFFSET(0xFF17860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET UNITYSDK_OFFSET(0xFEA2D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET UNITYSDK_OFFSET(0xFF17B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET UNITYSDK_OFFSET(0xFF17EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET UNITYSDK_OFFSET(0xFF18110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET UNITYSDK_OFFSET(0xFF18440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET UNITYSDK_OFFSET(0xFF18780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET UNITYSDK_OFFSET(0xFF18AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET UNITYSDK_OFFSET(0xFF18DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET UNITYSDK_OFFSET(0xFF18FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET UNITYSDK_OFFSET(0xFF192F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET UNITYSDK_OFFSET(0xFF19520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET UNITYSDK_OFFSET(0xFEA3030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET UNITYSDK_OFFSET(0xFF19750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET UNITYSDK_OFFSET(0xFF19980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET UNITYSDK_OFFSET(0xFF19BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET UNITYSDK_OFFSET(0xFF19E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET UNITYSDK_OFFSET(0xFF1A0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET UNITYSDK_OFFSET(0xFF1A3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET UNITYSDK_OFFSET(0xFF1A860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET UNITYSDK_OFFSET(0xFF1AB40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET UNITYSDK_OFFSET(0xFF1AD70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET UNITYSDK_OFFSET(0xFF1B090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET UNITYSDK_OFFSET(0xFEA3270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET UNITYSDK_OFFSET(0xFF1B370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET UNITYSDK_OFFSET(0xFF1B5A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET UNITYSDK_OFFSET(0xFF1B8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET UNITYSDK_OFFSET(0xFF1BBA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET UNITYSDK_OFFSET(0xFF1BDD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET UNITYSDK_OFFSET(0xFF1C0F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET UNITYSDK_OFFSET(0xFF1C320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET UNITYSDK_OFFSET(0xFF1C550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET UNITYSDK_OFFSET(0xFF1C880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET UNITYSDK_OFFSET(0xFF1CBC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET UNITYSDK_OFFSET(0xFEA3520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET UNITYSDK_OFFSET(0xFF1CF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET UNITYSDK_OFFSET(0xFF1D230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET UNITYSDK_OFFSET(0xFF1D570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET UNITYSDK_OFFSET(0xFF1D8B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET UNITYSDK_OFFSET(0xFF1DB90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET UNITYSDK_OFFSET(0xFF1DDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET UNITYSDK_OFFSET(0xFF1E0E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET UNITYSDK_OFFSET(0xFF1E3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET UNITYSDK_OFFSET(0xFF1E5F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET UNITYSDK_OFFSET(0xFF1E910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET UNITYSDK_OFFSET(0xFEA3830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET UNITYSDK_OFFSET(0xFF1EBF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET UNITYSDK_OFFSET(0xFF1EE20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET UNITYSDK_OFFSET(0xFF1F140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET UNITYSDK_OFFSET(0xFF1F420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET UNITYSDK_OFFSET(0xFF1F650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET UNITYSDK_OFFSET(0xFF1F970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET UNITYSDK_OFFSET(0xFF1FC50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET UNITYSDK_OFFSET(0xFF1FE80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET UNITYSDK_OFFSET(0xFF201A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET UNITYSDK_OFFSET(0xFF20480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET UNITYSDK_OFFSET(0xFEA3BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET UNITYSDK_OFFSET(0xFE96620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET UNITYSDK_OFFSET(0xFF206B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET UNITYSDK_OFFSET(0xFF209D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET UNITYSDK_OFFSET(0xFF20C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET UNITYSDK_OFFSET(0xFF20F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET UNITYSDK_OFFSET(0xFF212A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET UNITYSDK_OFFSET(0xFF215E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET UNITYSDK_OFFSET(0xFF218C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET UNITYSDK_OFFSET(0xFF21AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET UNITYSDK_OFFSET(0xFF21E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET UNITYSDK_OFFSET(0xFF220F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET UNITYSDK_OFFSET(0xFEA3E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET UNITYSDK_OFFSET(0xFF22320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET UNITYSDK_OFFSET(0xFF22640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET UNITYSDK_OFFSET(0xFF22870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET UNITYSDK_OFFSET(0xFF22BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET UNITYSDK_OFFSET(0xFF22F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET UNITYSDK_OFFSET(0xFF23250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET UNITYSDK_OFFSET(0xFF23510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET UNITYSDK_OFFSET(0xFF237F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET UNITYSDK_OFFSET(0xFF23A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET UNITYSDK_OFFSET(0xFF23D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET UNITYSDK_OFFSET(0xFEA4040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET UNITYSDK_OFFSET(0xFF24020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET UNITYSDK_OFFSET(0xFF24250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET UNITYSDK_OFFSET(0xFF24570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET UNITYSDK_OFFSET(0xFF24850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET UNITYSDK_OFFSET(0xFF24A80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET UNITYSDK_OFFSET(0xFF24DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET UNITYSDK_OFFSET(0xFF25080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET UNITYSDK_OFFSET(0xFF252B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET UNITYSDK_OFFSET(0xFF255D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET UNITYSDK_OFFSET(0xFF258B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET UNITYSDK_OFFSET(0xFEA4280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET UNITYSDK_OFFSET(0xFF25AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET UNITYSDK_OFFSET(0xFF25E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET UNITYSDK_OFFSET(0xFF260E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET UNITYSDK_OFFSET(0xFF26310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET UNITYSDK_OFFSET(0xFF26630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET UNITYSDK_OFFSET(0xFF268D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET UNITYSDK_OFFSET(0xFF26BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET UNITYSDK_OFFSET(0xFF26DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET UNITYSDK_OFFSET(0xFF27100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET UNITYSDK_OFFSET(0xFF273E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET UNITYSDK_OFFSET(0xFEA4600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET UNITYSDK_OFFSET(0xFF27610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET UNITYSDK_OFFSET(0xFF27930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET UNITYSDK_OFFSET(0xFF27C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET UNITYSDK_OFFSET(0xFF27E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET UNITYSDK_OFFSET(0xFF28160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET UNITYSDK_OFFSET(0xFF28440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET UNITYSDK_OFFSET(0xFF28670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET UNITYSDK_OFFSET(0xFF28990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET UNITYSDK_OFFSET(0xFF28C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET UNITYSDK_OFFSET(0xFF28EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET UNITYSDK_OFFSET(0xFEA4980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET UNITYSDK_OFFSET(0xFF291C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET UNITYSDK_OFFSET(0xFF294A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET UNITYSDK_OFFSET(0xFF296D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET UNITYSDK_OFFSET(0xFF299F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET UNITYSDK_OFFSET(0xFF29CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET UNITYSDK_OFFSET(0xFF29FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET UNITYSDK_OFFSET(0xFF2A1F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET UNITYSDK_OFFSET(0xFF2A510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET UNITYSDK_OFFSET(0xFF2A7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET UNITYSDK_OFFSET(0xFF2AAB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET UNITYSDK_OFFSET(0xFEA4BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET UNITYSDK_OFFSET(0xFF2ACE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET UNITYSDK_OFFSET(0xFF2B000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET UNITYSDK_OFFSET(0xFF2B2E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET UNITYSDK_OFFSET(0xFF2B510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET UNITYSDK_OFFSET(0xFF2B830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET UNITYSDK_OFFSET(0xFF2BB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET UNITYSDK_OFFSET(0xFF2BD40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET UNITYSDK_OFFSET(0xFF2C060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET UNITYSDK_OFFSET(0xFF2C290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET UNITYSDK_OFFSET(0xFF2C5F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET UNITYSDK_OFFSET(0xFEA4F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET UNITYSDK_OFFSET(0xFF2C930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET UNITYSDK_OFFSET(0xFF2CC70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET UNITYSDK_OFFSET(0xFF2CEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET UNITYSDK_OFFSET(0xFF2D180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET UNITYSDK_OFFSET(0xFF2D3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET UNITYSDK_OFFSET(0xFF2D6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET UNITYSDK_OFFSET(0xFF2D9B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET UNITYSDK_OFFSET(0xFF2DBE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET UNITYSDK_OFFSET(0xFF2DF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET UNITYSDK_OFFSET(0xFF2E220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET UNITYSDK_OFFSET(0xFEA5280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET UNITYSDK_OFFSET(0xFF2E500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET UNITYSDK_OFFSET(0xFF2E730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET UNITYSDK_OFFSET(0xFF2EA50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET UNITYSDK_OFFSET(0xFF2ED30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET UNITYSDK_OFFSET(0xFF2EF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET UNITYSDK_OFFSET(0xFF2F280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET UNITYSDK_OFFSET(0xFF2F5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET UNITYSDK_OFFSET(0xFF2F870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET UNITYSDK_OFFSET(0xFF2FC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET UNITYSDK_OFFSET(0xFF2FF70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET UNITYSDK_OFFSET(0xFEA5530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET UNITYSDK_OFFSET(0xFF301A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET UNITYSDK_OFFSET(0xFF304C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET UNITYSDK_OFFSET(0xFF307D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET UNITYSDK_OFFSET(0xFF30A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET UNITYSDK_OFFSET(0xFF30DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET UNITYSDK_OFFSET(0xFF311D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET UNITYSDK_OFFSET(0xFF31400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET UNITYSDK_OFFSET(0xFF316E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET UNITYSDK_OFFSET(0xFF31910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET UNITYSDK_OFFSET(0xFF31B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET UNITYSDK_OFFSET(0xFEA58B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET UNITYSDK_OFFSET(0xFE968A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET UNITYSDK_OFFSET(0xFF31E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET UNITYSDK_OFFSET(0xFF32040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET UNITYSDK_OFFSET(0xFF32270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET UNITYSDK_OFFSET(0xFF32590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET UNITYSDK_OFFSET(0xFF32870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET UNITYSDK_OFFSET(0xFF32BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET UNITYSDK_OFFSET(0xFF32EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET UNITYSDK_OFFSET(0xFF330D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET UNITYSDK_OFFSET(0xFF33390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET UNITYSDK_OFFSET(0xFF335C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET UNITYSDK_OFFSET(0xFEA5C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET UNITYSDK_OFFSET(0xFF33900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET UNITYSDK_OFFSET(0xFF33B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET UNITYSDK_OFFSET(0xFF33E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET UNITYSDK_OFFSET(0xFF34090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET UNITYSDK_OFFSET(0xFF342E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET UNITYSDK_OFFSET(0xFF34580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET UNITYSDK_OFFSET(0xFEA6030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET UNITYSDK_OFFSET(0xFEA6270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET UNITYSDK_OFFSET(0xFEA6670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET UNITYSDK_OFFSET(0xFEA6920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET UNITYSDK_OFFSET(0xFEA6CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET UNITYSDK_OFFSET(0xFEA7020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET UNITYSDK_OFFSET(0xFEA7270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET UNITYSDK_OFFSET(0xFEA74B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET UNITYSDK_OFFSET(0xFEA77E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET UNITYSDK_OFFSET(0xFE96B30)

namespace XLua
{
	inline static constexpr unsigned int DelegateBridge_TypeDefinitionIndex = 40389;

	class DelegateBridge : public ::XLua::DelegateBridgeBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x25280);
		}
		static ::Il2CppArray<::XLua::DelegateBridge*>** StaticGet_DelegateBridgeList()
		{
			return (::Il2CppArray<::XLua::DelegateBridge*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x25288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListView2_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_ThreadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIFollow3DTarget_PostProcessDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventureCharacterController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightRole_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightNPCConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListView2_int_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightEnemyDifficultyLvConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA0F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnGeneralNotifyDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AnimatorButton()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ItemDisplayData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_AdvertisingIdentifierCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_EventCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_RewardExcelTable_IndexKey_RPG_GameCore_RewardRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA1F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_Recommend_RelicRecommendBigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IBeginDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_OverUIElementHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidBaseEventDataDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_StaticListView_int_RPG_Client_StaticListViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA2F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CharacterInputData_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LocalizedInputField_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_TeamType_RPG_GameCore_TeamType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GridFightEquipCategory_RPG_Client_GridFightEquipCategoryInfoConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA3F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_AsyncOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_FontAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RspHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA4F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_MVector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_UnityEngine_Sprite()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_ProgressParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA590);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Recommend_RelicRecommendBigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDropHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LogCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkCardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BattleAssetPreload_AssetPreloadGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA5F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_AssemblyName_System_Reflection_Assembly()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopListViewItem2_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopFlexibleGridView_int_SuperScrollView_LoopFlexibleGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightCone3D_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint_RPG_PoolList_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA6F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_CharacterInputData_UnityEngine_Vector3_UnityEngine_Vector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_VirtualRankChimeraTeam_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_FlexibleGridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Exception()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_BindingSourceType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_MemberFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_UI_Graphic_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA7F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Toggle_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUp2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_InputDevice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameWaitEventTask_HipplenGameEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ActivityAlley_AlleyPackComponent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_UIBubbleManager_RPG_Client_UIBubbleItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_HedgehogTeam_EasyTouch_Gesture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet1_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA8F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnParticleEmissionBeginEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_AvatarPropertyType_RPG_Client_GridFightRolePropertyConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnSceneOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefHttpRspBody_RPG_Client_GridFightGameRefShareCodeRspBody()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_RPG_GameCore_FixPoint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_UpdateBonesDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GridFightManager_GridFightCustomValue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ParseUrlCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_TMPro_TMP_TextInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Swipe2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xA9F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RuntimeGroupManager_HoYoGroupUnit_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDown2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Cancel2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchInHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaDLL_lua_CSFunction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAA98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LowMemoryCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_RPG_GameCore_SubMissionState_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAAF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_UI_InputField_OnValidateInput()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_ComponentModel_PropertyChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_DialogueGroupExcelTable_IndexKey_RPG_GameCore_DialogueGroupRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAB98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_RectTransform_ReapplyDrivenProperties()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xABF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_string_RPG_Client_GridFightGameRefInterectData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookletLuaPanelParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightForgeConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_object_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAC98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightTutorialStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceEExcelTable_IndexKey_RPG_GameCore_PerformanceERow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect_RPG_Client_TriggerEffectCallbackParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xACF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_RPG_Client_UILayer()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopGridView_int_int_int_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Graphic()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_StaticListViewItem_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SpecialAvatarExcelTable_IndexKey_RPG_GameCore_SpecialAvatarRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureSetupCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Drag2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAD98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateMultiple()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TalkSentenceConfigExcelTable_IndexKey_RPG_GameCore_TalkSentenceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_OnAnimatorDispatchMovementJobFinishDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xADF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IEndDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAE98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IScrollHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ChimeraGameInstance_ActionReplayHook()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2Int_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAEF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ItemDisplayData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Recommend_RelicRecommendBigData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_int_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_ISkeletonAnimationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PayProductResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_SpriteAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_EnterFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAF98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IMoveHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournHexData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StageExcelTable_IndexKey_RPG_GameCore_StageRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FiveDimGameTransferScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LoadingManager_WorkDefCounter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xAFF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB000);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB008);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB010);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB018);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB020);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_HandleResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB028);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB030);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB038);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB040);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB048);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IRIBuildingRendererList_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB050);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_EnviromentSystem_EnviromentClip_OnEnvironmentClipLoadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB058);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_OnRecycleChanged()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB060);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB068);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IIgnoreHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB070);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB078);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerEnterHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingBlock()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Recommend_RelicRecommendBigData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB0F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnOnGeneralRspDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ICancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnServerConnectedDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_Motions_MonoEffectMotion_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerClickHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PenaconyEndmostChronicleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISubmitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_RPG_GameCore_GameCoreParamData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB1F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchOutHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightConeZoom_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_IntPtr()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Playables_PlayableDirector()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnInsertAbilityInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_EasyTouchIsReadyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaEnv_CustomLoader()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGridData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_BaseEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_TypeFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB2F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISelectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TriggerPerformanceEndParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction0_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BankCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillExcelTable_IndexKey_RPG_GameCore_AvatarSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Data_EventIndex_RPG_Client_Data_DataModel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_UINavigation_UINavigationArea_FirstSelectableDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIFollow3DTarget()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB3F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_GameCore_MissionCondition_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillTreeExcelTable_IndexKey_RPG_GameCore_AvatarSkillTreeRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Collections_Specialized_NotifyCollectionChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MessageItemExcelTable_IndexKey_RPG_GameCore_MessageItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_NotifyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_IDiceCombatBattleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerExitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnAssetOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB4F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateSingle()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MazeBuffExcelTable_IndexKey_RPG_GameCore_MazeBuffRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnBackPressedCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightDivisionLevelConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RPGAnimationEvent_AnimationEventCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB590);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MVVM_Model_LimaoNewsOfficeSurveyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_CustomButton_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IUpdateSelectedHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB5F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MVVM_Model_LimaoNewsOfficeSurveyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_MoveDirection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarPromotionExcelTable_IndexKey_RPG_GameCore_AvatarPromotionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_RPG_GameCore_GameEntity_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_BattleEventExcelTable_IndexKey_RPG_GameCore_BattleEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Transform_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_LeaveFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_SkeletonRendererDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDeselectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_GridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PSSessionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_Promises_ExceptionEventArgs()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB6F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChenLingArmyProfiler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyMeetingRankInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TextmapExcelTable_IndexKey_RPG_GameCore_TextmapRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnNewParticleEmissionEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_RPG_Client_ActivityModule_ActivityType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterExcelTable_IndexKey_RPG_GameCore_MonsterRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_Match3_Match3GameState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_AkCallbackType_AkCallbackInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_GameCore_ScreenTransferReason_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB7F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TriggerEffectParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState_RPG_GameCore_EntityReviveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_System_Collections_Generic_List_RPG_Client_PopupMenuProxy_Option()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_UIElementTouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_UnityEngine_SkinnedMeshRenderer_UnityEngine_Mesh()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_ICommand()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGoReceiveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8D0);
		}
		static ::System::Boolean* StaticGet_Gen_Flag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightConsumableItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB8F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction3_string_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightConsumableItemData_RPG_Client_GridFightConsumableInfo_GridFightConsumableItemUseParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleTask()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopStaggeredGridView_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChenLingArmyProfiler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MainMissionExcelTable_IndexKey_RPG_GameCore_MainMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceSkipOverrideExcelTable_IndexKey_RPG_GameCore_PerformanceSkipOverrideRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_XLua_LuaEnv_XLua_LuaBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xB9F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_ItemExcelTable_IndexKey_RPG_GameCore_ItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchPlayRecord()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StatusExcelTable_IndexKey_RPG_GameCore_StatusRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameGradeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapEntityDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BGMCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_AxisEventData_UnityEngine_UI_Selectable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBA98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_RPG_Client_AlleyTransportRouteState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBAF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IInitializePotentialDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_StartParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_MeshGeneratorDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_RPG_Client_Data_EventIndex_RPG_Client_Data_DataModel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchCancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapProp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_FiveDim_MiniGameEventReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBB98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_GraphEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IMapObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_SuperDropDown_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBBF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PropExcelTable_IndexKey_RPG_GameCore_PropRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_uint_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBC98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_AsyncCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBCF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_Assembly_string_bool_System_Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Canvas_WillRenderCanvases()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Camera_CameraCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBD98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandSaveData_RPG_Client_SwitchHandCustomData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterSkillExcelTable_IndexKey_RPG_GameCore_MonsterSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarServantSkillExcelTable_IndexKey_RPG_GameCore_AvatarServantSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBDF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_IComparer_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ChessRogueBoardCellDataItem_RPG_Client_MonoRogueHexChessBoardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_BattleResultState_System_Collections_IEnumerator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PlaneEventExcelTable_IndexKey_RPG_GameCore_PlaneEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_AllChunkDownloadComplete()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_InstructionDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_VoiceConfigExcelTable_IndexKey_RPG_GameCore_VoiceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_UI_ILayoutElement_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGo_EstimatedTimeParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet3_XLua_LuaTable_int_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBE98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IAvatarInfoProvider()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MVVM_Model_LimaoNewsOfficeSurveyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightEquipItemData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_GameCore_MissionCondition_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBEF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChenLingArmyProfiler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SubMissionExcelTable_IndexKey_RPG_GameCore_SubMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_MonitoringCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBF98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0xBFA0);
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

		::System::Void __Gen_Delegate_Imp27(::RPG::Client::Data::EventIndex p0, ::Class_1_F19AB08624168191* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp28(::System::Boolean p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp29(::System::Int32 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET))(this, p0);
		}

		::SuperScrollView::LoopListViewItem2* __Gen_Delegate_Imp30(::XLua::LuaTable* p0, ::SuperScrollView::LoopListView2* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET))(this, p0, p1, p2);
		}

		::SuperScrollView::LoopGridViewItem* __Gen_Delegate_Imp31(::XLua::LuaTable* p0, ::SuperScrollView::LoopGridView* p1, ::System::Int32 p2, ::System::Int32 p3, ::System::Int32 p4)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET))(this, p0, p1, p2, p3, p4);
		}

		::RPG::Client::StaticListViewItem* __Gen_Delegate_Imp32(::XLua::LuaTable* p0, ::RPG::Client::StaticListView* p1, ::System::Int32 p2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET))(this, p0, p1, p2);
		}

		::System::Int32 __Gen_Delegate_Imp33(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::UnityEngine::UI::Dropdown_DropdownItem* p2)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET))(this, p0, p1, p2);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp34(::XLua::LuaTable* p0, ::SuperScrollView::LoopStaggeredGridView* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp35(::XLua::LuaTable* p0, ::System::Int32 p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp36(::XLua::LuaTable* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp37(::UnityEngine::UI::Toggle* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp38(::XLua::LuaTable* p0, ::RPG::Client::NewsTickerItem* p1, ::System::UInt32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp39(::System::Reflection::MemberInfo* p0, ::System::Object* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp40()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp41(::System::String* p0, ::System::String* p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp42(::System::String* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp43(::UnityEngine::EventSystems::PointerEventData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp44(::SuperScrollView::LoopGridView* p0, ::SuperScrollView::LoopGridViewItem* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp45(::SuperScrollView::LoopGridView* p0)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp46(::System::UInt32 p0, ::RPG::GameCore::SubMissionState p1, ::System::Boolean p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp47(::System::UInt32 p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET))(this, p0, p1);
		}

		::System::String* __Gen_Delegate_Imp48()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp49(::System::String* p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET))(this, p0, p1);
		}

		::UnityEngine::Sprite* __Gen_Delegate_Imp50(::System::String* p0)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp51(::SuperScrollView::LoopListViewItem2* p0)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp52(::SuperScrollView::LoopListView2* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET))(this, p0, p1);
		}

		::System::Single __Gen_Delegate_Imp53(::SuperScrollView::LoopListViewItem2* p0)
		{
			return ((::System::Single(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET))(this, p0);
		}

		::UnityEngine::Vector2 __Gen_Delegate_Imp54(::RPG::Client::StaticListViewItem* p0)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp55(::UnityEngine::Camera* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp56(::RPG::Client::MapEntityDef* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp57(::Class_2_D8257A310CAD757C* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D8257A310CAD757C*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp58(::Class_2_D8257A310CAD757C* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D8257A310CAD757C*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp59(::UnityEngine::GameObject* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp60(::RPG::GameCore::GameEntity* p0, ::System::Boolean p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp61(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::TeamType p1, ::RPG::GameCore::TeamType p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp62(::RPG::GameCore::GameEntity* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp63(::RPG::GameCore::GameEntity* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp64(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1, ::RPG::GameCore::AliveState p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp65(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::AliveState p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp66(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::AliveState p1, ::Class_1_43BD383C98B4C0C5_102* p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_102*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp67(::UnityEngine::GameObject* p0, ::UnityEngine::EventSystems::PointerEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp68(::UnityEngine::GameObject* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp69(::System::UInt32 p0, ::System::IntPtr p1, ::AKRESULT p2, ::System::Object* p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET))(this, p0, p1, p2, p3);
		}

		::AKRESULT __Gen_Delegate_Imp70(::System::Boolean p0, ::System::Object* p1)
		{
			return ((::AKRESULT(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp71(::System::UInt32 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp72(::HedgehogTeam::EasyTouch::Gesture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp73(::UnityEngine::EventSystems::AxisEventData* p0, ::UnityEngine::UI::Selectable* p1, ::System::Boolean p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp74()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp75(::RPG::Client::TriggerEffectParams* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp76(::RPG::Client::MonoEffect* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp77(::RPG::Client::MonoEffect* p0, ::RPG::Client::TriggerEffectCallbackParams p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET))(this, p0, p1);
		}

		::System::Collections::IEnumerator* __Gen_Delegate_Imp78(::RPG::GameCore::BattleResultState p0)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp79(::Class_1_FA4F4A67B1C04320_311* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_311*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp80(::Class_1_FA4F4A67B1C04320_314* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_314*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp81(::Class_1_FA4F4A67B1C04320_312* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_312*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEquipItemConfig* __Gen_Delegate_Imp82(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightItemConfig* __Gen_Delegate_Imp83(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp84(::RPG::Client::GridFightConsumableItemData* p0, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET))(this, p0, p1);
		}

		::RPG::Client::GridFightRolePropertyConfig* __Gen_Delegate_Imp85(::RPG::GameCore::AvatarPropertyType p0)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightConsumableItemConfig* __Gen_Delegate_Imp86(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp87(::UnityEngine::ParticleSystem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionStageConfig* __Gen_Delegate_Imp88(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightDivisionStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionConfig* __Gen_Delegate_Imp89(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEnemyDifficultyLvConfig* __Gen_Delegate_Imp90(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::RPG::Client::GridFightEnemyDifficultyLvConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp91(::RPG::GameCore::GridFightManager_GridFightCustomValue* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionLevelConfig* __Gen_Delegate_Imp92(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp93(::XLua::LuaTable* p0)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightTutorialStageConfig* __Gen_Delegate_Imp94(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightNPCConfig* __Gen_Delegate_Imp95(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp96(::RPG::MVector3 p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp97(::RPG::Client::ClockParkCardItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEquipCategoryInfoConfig* __Gen_Delegate_Imp98(::RPG::GameCore::GridFightEquipCategory p0)
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightForgeConfig* __Gen_Delegate_Imp99(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp100(::RPG::Client::ScheduleTask* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET))(this, p0);
		}

		::Class_0_16E4307DCC419505_333* __Gen_Delegate_Imp101(::System::UInt32 p0)
		{
			return ((::Class_0_16E4307DCC419505_333*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp102(::RPG::GameCore::HudType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp103(::RPG::GameCore::HudType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp104(::RPG::GameCore::HudType p0, ::RPG::GameCore::HudType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HudType, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp105(::RPG::Client::MessageItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp106(::RPG::Client::MessageItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp107(::RPG::Client::MessageItemData* p0, ::RPG::Client::MessageItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MessageItemData*, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp108(::RPG::Client::NPCWarningTipConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp109(::RPG::Client::NPCWarningTipConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp110(::RPG::Client::NPCWarningTipConfig* p0, ::RPG::Client::NPCWarningTipConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp111(::UnityEngine::EventSystems::BaseEventData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp112(::UnityEngine::EventSystems::EventTrigger_Entry* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp113(::UnityEngine::EventSystems::EventTrigger_Entry* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp114(::UnityEngine::EventSystems::EventTrigger_Entry* p0, ::UnityEngine::EventSystems::EventTrigger_Entry* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp115(::RPG::GameCore::GachaType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp116(::RPG::GameCore::GachaType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp117(::RPG::GameCore::GachaType p0, ::RPG::GameCore::GachaType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GachaType, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp118(::Class_1_D0948460F4810867* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D0948460F4810867*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp119(::System::UInt16 p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET))(this, p0, p1);
		}

		::System::Reflection::Assembly* __Gen_Delegate_Imp120(::System::Reflection::AssemblyName* p0)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET))(this, p0);
		}

		::System::Type* __Gen_Delegate_Imp121(::System::Reflection::Assembly* p0, ::System::String* p1, ::System::Boolean p2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp122(::System::Type* p0, ::System::Object* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp123(::System::IAsyncResult* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp124(::UnityEngine::RectTransform* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET))(this, p0);
		}

		::System::Char __Gen_Delegate_Imp125(::System::String* p0, ::System::Int32 p1, ::System::Char p2)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp126(::Class_1_D6D8D891CDDE5DED* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6D8D891CDDE5DED*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp127(::XLua::LuaTable* p0, ::RPG::GameCore::ScreenTransferReason p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp128(::RPG::Client::GlobalDispatchData_ServerData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp129(::RPG::Client::GlobalDispatchData_ServerData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp130(::RPG::Client::GlobalDispatchData_ServerData* p0, ::RPG::Client::GlobalDispatchData_ServerData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp131(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp132(::RPG::GameCore::RewardRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp133(::RPG::GameCore::TextmapRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp134(::System::UInt32 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp135(::RPG::Client::EquipmentItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp136(::System::Exception* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp137(::System::Exception* p0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp138(::System::Int32 p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp139(::System::Int32 p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp140()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp141(::RPG::GameCore::ItemRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp142(::RPG::GameCore::MainMissionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET))(this, p0);
		}

		::Il2CppArray<::System::Byte>* __Gen_Delegate_Imp143(::System::String*& p0)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp144(::UnityEngine::AnimatorStateInfo p0, ::UnityEngine::AnimatorStateInfo p1, ::UnityEngine::AnimatorTransitionInfo p2, ::System::Boolean p3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp145(::System::Int32 p0, ::UnityEngine::AnimatorStateInfo p1, ::UnityEngine::AnimatorTransitionInfo p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp146(::RPG::GameCore::AvatarPromotionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp147(::RPG::GameCore::StageRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp148(::System::Object* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp149(::SuperScrollView::LoopListViewItem2* p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp150(::RPG::GameCore::AvatarSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp151(::Unity::Collections::NativeArray_1<::System::Byte>& p0)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp152(::RPG::GameCore::SubMissionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp153(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp154(::Struct_2_8B48740F46FC53FC p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8B48740F46FC53FC, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp155(::Proto::ItemCost* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp156(::Proto::ItemCost* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp157(::Proto::ItemCost* p0, ::Proto::ItemCost* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::ItemCost*, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp158(::RPG::GameCore::AvatarSkillTreeRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp159(::System::UInt32 p0, ::AkCallbackType p1, ::AkCallbackInfo* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp160(::RPG::GameCore::TurnBasedModifierInstance* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp161(::RPG::GameCore::TurnBasedModifierInstance* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp162(::RPG::GameCore::StatusRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp163(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET))(this, p0, p1);
		}

		::System::String* __Gen_Delegate_Imp164(::System::String* p0)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET))(this, p0);
		}

		::RPG::GameCore::FixPoint __Gen_Delegate_Imp165(::RPG::GameCore::GameEntity* p0)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp166(::RPG::GameCore::GameEntity* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp167(::RPG::GameCore::MonsterRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp168(::RPG::GameCore::MonsterSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp169(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp170(::System::String* p0, ::UnityEngine::SkinnedMeshRenderer* p1, ::UnityEngine::Mesh* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp171(::RPG::Client::BookContentData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp172(::RPG::Client::BookContentData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp173(::RPG::Client::BookContentData* p0, ::RPG::Client::BookContentData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BookContentData*, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp174(::RPG::GameCore::MazeBuffRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp175(::RPG::Client::ChallengeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp176(::RPG::Client::ChallengeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp177(::RPG::Client::ChallengeData* p0, ::RPG::Client::ChallengeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeData*, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET))(this, p0, p1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp178()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* __Gen_Delegate_Imp179()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp180(::RPG::GameCore::PropRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET))(this, p0);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp181(::UnityEngine::Vector3 p0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp182(::RPG::Client::UIFollow3DTarget* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp183(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp184(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp185(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp186(::RPG::Client::PCResolution* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp187(::RPG::Client::PCResolution* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp188(::RPG::Client::PCResolution* p0, ::RPG::Client::PCResolution* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PCResolution*, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp189(::RPG::GameCore::StageMonsterRewardItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp190(::RPG::GameCore::StageMonsterRewardItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp191(::RPG::GameCore::StageMonsterRewardItem* p0, ::RPG::GameCore::StageMonsterRewardItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp192(::RPG::GameCore::VoiceConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp193(::System::String* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp194(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp195(::RPG::Client::MainMissionData* p0, ::RPG::Client::MainMissionData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MainMissionData*, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp196(::RPG::GameCore::DialogueGroupRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp197(::RPG::GameCore::PlaneEventRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp198(::System::Object* p0, ::RPG::Client::Promises::ExceptionEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Promises::ExceptionEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp199(::RPG::Client::AnimatorButton* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp200(::System::String* p0, ::System::String* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp201(::RPG::Client::PrefHashSet_1<::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp202(::RPG::Client::BaseGachaPoolData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp203(::RPG::Client::BaseGachaPoolData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp204(::RPG::Client::BaseGachaPoolData* p0, ::RPG::Client::BaseGachaPoolData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp205(::RPG::Client::ItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp206(::RPG::Client::ItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp207(::RPG::Client::ItemData* p0, ::RPG::Client::ItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp208(::RPG::Client::GachaItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp209(::RPG::Client::GachaItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp210(::RPG::Client::GachaItemData* p0, ::RPG::Client::GachaItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp211(::RPG::GameCore::SpecialAvatarRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp212(::XLua::LuaTable* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp213(::RPG::GameCore::AdventurePlayerRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp214(::RPG::GameCore::AdventurePlayerRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp215(::RPG::GameCore::AdventurePlayerRow* p0, ::RPG::GameCore::AdventurePlayerRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp216(::RPG::Client::ChallengeGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp217(::RPG::Client::ChallengeGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp218(::RPG::Client::ChallengeGroupData* p0, ::RPG::Client::ChallengeGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp219(::RPG::Client::RogueBuffData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp220(::RPG::Client::RogueBuffData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp221(::RPG::Client::RogueBuffData* p0, ::RPG::Client::RogueBuffData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueBuffData*, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp222(::RPG::Client::PrefHashSet_1<::System::String*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp223(::System::String* p0, ::System::String* p1, ::UnityEngine::LogType p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp224(::System::String* p0, ::System::Boolean p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp225(::RPG::Client::PayProductResult p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp226(::System::Exception* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp227(::System::Boolean p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp228(::System::Boolean p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET))(this, p0);
		}

		::RPG::Client::MainMissionData* __Gen_Delegate_Imp229(::System::Exception* p0)
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp230(::RPG::Client::MainMissionData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp231(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp232(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* __Gen_Delegate_Imp233(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp234(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp235(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp236(::RPG::Client::ScheduleData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp237(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::UnityEngine::UI::Dropdown_DropdownItem* p2, ::System::Int32 p3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp238(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::System::Int32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp239(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp240(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp241(::RPG::GameCore::TalkSentenceConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp242(::RPG::GameCore::BattleEventRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp243(::RPG::Client::ItemDisplayData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp244(::RPG::Client::ItemDisplayData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp245(::RPG::Client::ItemDisplayData* p0, ::RPG::Client::ItemDisplayData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp246(::AkMonitorErrorCode p0, ::AkMonitorErrorLevel p1, ::System::UInt32 p2, ::System::UInt64 p3, ::System::String* p4)
		{
			return ((::System::Void(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET))(this, p0, p1, p2, p3, p4);
		}

		::System::Void __Gen_Delegate_Imp247(::RPG::GameCore::MessageItemRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp248(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET))(this, p0);
		}

		::TMPro::TMP_FontAsset* __Gen_Delegate_Imp249(::System::Int32 p0, ::System::String* p1)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET))(this, p0, p1);
		}

		::TMPro::TMP_SpriteAsset* __Gen_Delegate_Imp250(::System::Int32 p0, ::System::String* p1)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp251(::TMPro::TMP_TextInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp252(::UnityEngine::AsyncOperation* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp253(::RPG::GameCore::TurnBasedModifierInstance* p0, ::Class_1_5469D397DAE62876* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp254(::RPG::GameCore::PerformanceERow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp255(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp256(::RPG::Client::PunkLordData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp257(::RPG::Client::PunkLordData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp258(::RPG::Client::PunkLordData* p0, ::RPG::Client::PunkLordData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PunkLordData*, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp259(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET))(this, p0);
		}

		::RPG::Client::PlayerBriefDisplayData* __Gen_Delegate_Imp260(::System::Exception* p0)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp261(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp262(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp263(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp264(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp265(::RPG::Client::SubMissionData* p0, ::RPG::Client::SubMissionData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp266(::System::Int64 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp267(::System::Int64 p0, ::System::Int64 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp268(::RPG::GameCore::MapEntryRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp269(::RPG::GameCore::MapEntryRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp270(::RPG::GameCore::MapEntryRow* p0, ::RPG::GameCore::MapEntryRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapEntryRow*, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp271(::RPG::GameCore::LevelMinimapSection* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp272(::RPG::GameCore::LevelMinimapSection* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp273(::RPG::GameCore::LevelMinimapSection* p0, ::RPG::GameCore::LevelMinimapSection* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp274(::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp275(::System::String* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp276(::RPG::Client::SettledPunkLordData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp277(::RPG::Client::SettledPunkLordData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp278(::RPG::Client::SettledPunkLordData* p0, ::RPG::Client::SettledPunkLordData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SettledPunkLordData*, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp279(::RPG::GameCore::ActivityFightGroupRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp280(::RPG::GameCore::ActivityFightGroupRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp281(::RPG::GameCore::ActivityFightGroupRow* p0, ::RPG::GameCore::ActivityFightGroupRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp282(::RPG::Client::FightActivityGroupInfo p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp283(::RPG::Client::FightActivityGroupInfo p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp284(::RPG::Client::FightActivityGroupInfo p0, ::RPG::Client::FightActivityGroupInfo p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp285(::Class_1_99BD961747420BEB_18* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_18*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp286(::Class_1_99BD961747420BEB_18* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_18*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp287(::Class_1_99BD961747420BEB_18* p0, ::Class_1_99BD961747420BEB_18* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_99BD961747420BEB_18*, ::Class_1_99BD961747420BEB_18*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp288(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET))(this, p0);
		}

		::RPG::GameCore::MissionCondition* __Gen_Delegate_Imp289(::System::Exception* p0)
		{
			return ((::RPG::GameCore::MissionCondition*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp290(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp291(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp292(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET))(this, p0);
		}

		::RPG::Client::RelicRecommendData* __Gen_Delegate_Imp293(::System::Exception* p0)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp294(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp295(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp296(::XLua::LuaTable* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp297(::Class_1_2CF43CF3CB5182D0* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp298(::Class_1_2CF43CF3CB5182D0* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp299(::Class_1_2CF43CF3CB5182D0* p0, ::Class_1_2CF43CF3CB5182D0* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp300(::UnityEngine::RenderTexture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET))(this, p0);
		}

		::UnityEngine::RenderTexture* __Gen_Delegate_Imp301(::System::Exception* p0)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp302(::UnityEngine::RenderTexture* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp303(::UnityEngine::RenderTexture* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp304(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp305(::System::UInt32 p0, ::System::Collections::Generic::List_1<::System::UInt32>* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp306(::RPG::Client::LuaUIController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::Class_1_8E541422F89D76B8*>* __Gen_Delegate_Imp307()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_8E541422F89D76B8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp308(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp309(::RPG::Client::AvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp310(::RPG::Client::AvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp311(::RPG::Client::AvatarData* p0, ::RPG::Client::AvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp312(::RPG::Client::AetherDivideGymDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp313(::RPG::Client::AetherDivideGymDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp314(::RPG::Client::AetherDivideGymDataItem* p0, ::RPG::Client::AetherDivideGymDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp315(::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* __Gen_Delegate_Imp316(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp317(::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp318(::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp319(::System::Object* p0, ::RPG::Client::AlleyTransportRouteState p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::AlleyTransportRouteState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp320(::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp321(::XLua::LuaTable* p0, ::RPG::Client::ActivityAlley::AlleyPackComponent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp322(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp323(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp324(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp325(::Class_1_43BD383C98B4C0C5_101* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_101*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp326(::Class_2_E6C0556C909C8254* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E6C0556C909C8254*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp327(::Class_0_16E4307DCC419505_330* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_330*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp328(::Class_0_16E4307DCC419505_331* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_331*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp329(::Class_0_16E4307DCC419505_329* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp330(::RPG::Client::AlleyEventInfo p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp331(::RPG::Client::AlleyEventInfo p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp332(::RPG::Client::AlleyEventInfo p0, ::RPG::Client::AlleyEventInfo p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AlleyEventInfo, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp333(::RPG::Client::FantasticStoryParagraphData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp334(::RPG::Client::FantasticStoryParagraphData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp335(::RPG::Client::FantasticStoryParagraphData* p0, ::RPG::Client::FantasticStoryParagraphData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp336(::XLua::LuaTable* p0, ::RPG::Client::ChessRogueBoardCellDataItem* p1, ::RPG::Client::MonoRogueHexChessBoardItem* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp337(::Class_1_7D41D5D948382242* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D41D5D948382242*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET))(this, p0);
		}

		::RPG::Client::SubMissionData* __Gen_Delegate_Imp338(::System::Exception* p0)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp339(::RPG::Client::SubMissionData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp340(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp341(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* __Gen_Delegate_Imp342(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp343(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp344(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp345(::RPG::Client::FuncEntranceData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp346(::RPG::Client::FuncEntranceData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp347(::RPG::Client::FuncEntranceData* p0, ::RPG::Client::FuncEntranceData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FuncEntranceData*, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp348(::UnityEngine::Mesh* p0, ::UnityEngine::Material* p1, ::UnityEngine::Texture* p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp349(::System::Int32 p0, ::Il2CppArray<::UnityEngine::Mesh*>* p1, ::Il2CppArray<::UnityEngine::Material*>* p2, ::Il2CppArray<::UnityEngine::Texture*>* p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp350(::Spine::Unity::SkeletonGraphic* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp351(::Spine::Unity::SkeletonRendererInstruction* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp352(::Spine::Unity::ISkeletonAnimation* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp353(::Spine::Unity::MeshGeneratorBuffers p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp354(::RPG::Client::Prop::JigsawItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp355(::RPG::Client::Prop::JigsawItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp356(::RPG::Client::Prop::JigsawItemData* p0, ::RPG::Client::Prop::JigsawItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp357(::System::Boolean p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp358(::RPG::Client::FantasticStoryChapterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp359(::RPG::Client::FantasticStoryChapterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp360(::RPG::Client::FantasticStoryChapterData* p0, ::RPG::Client::FantasticStoryChapterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp361(::UnityEngine::Transform* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp362(::UnityEngine::Transform* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp363(::UnityEngine::Transform* p0, ::UnityEngine::Transform* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp364(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp365(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp366(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp367(::RPG::GameCore::RogueImageRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp368(::RPG::GameCore::RogueImageRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp369(::RPG::GameCore::RogueImageRow* p0, ::RPG::GameCore::RogueImageRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueImageRow*, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp370(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp371(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp372(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0, ::RPG::GameCore::RogueDLCMainStoryRewardRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp373(::RPG::GameCore::CEBattlePresetConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp374(::RPG::GameCore::CEBattlePresetConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp375(::RPG::GameCore::CEBattlePresetConfig* p0, ::RPG::GameCore::CEBattlePresetConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp376(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp377(::System::UInt32 p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp378(::RPG::GameCore::ItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp379(::RPG::GameCore::ItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp380(::RPG::GameCore::ItemConfig* p0, ::RPG::GameCore::ItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp381(::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp382(::RPG::Client::ActivityModule_ActivityType p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule_ActivityType, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp383(::RPG::GameCore::RogueDLCAeonCrossRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp384(::RPG::GameCore::RogueDLCAeonCrossRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp385(::RPG::GameCore::RogueDLCAeonCrossRow* p0, ::RPG::GameCore::RogueDLCAeonCrossRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp386(::RPG::GameCore::RogueBuffRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp387(::RPG::GameCore::RogueBuffRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp388(::RPG::GameCore::RogueBuffRow* p0, ::RPG::GameCore::RogueBuffRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp389(::RPG::GameCore::RogueNousAeonCrossRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp390(::RPG::GameCore::RogueNousAeonCrossRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp391(::RPG::GameCore::RogueNousAeonCrossRow* p0, ::RPG::GameCore::RogueNousAeonCrossRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp392(::RPG::GameCore::RogueNousAeonRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp393(::RPG::GameCore::RogueNousAeonRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp394(::RPG::GameCore::RogueNousAeonRow* p0, ::RPG::GameCore::RogueNousAeonRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp395(::RPG::Client::RogueNousDiceSlotDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp396(::RPG::Client::RogueNousDiceSlotDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp397(::RPG::Client::RogueNousDiceSlotDataItem* p0, ::RPG::Client::RogueNousDiceSlotDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp398(::Proto::StrongChallengeAvatar* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp399(::Proto::StrongChallengeAvatar* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp400(::Proto::StrongChallengeAvatar* p0, ::Proto::StrongChallengeAvatar* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::StrongChallengeAvatar*, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET))(this, p0, p1);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp401(::RPG::GameCore::CharacterInputData* p0, ::UnityEngine::Vector3 p1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp402(::RPG::GameCore::CharacterInputData* p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp403(::RPG::GameCore::AdventureCharacterController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp404(::RPG::GameCore::ConditionParam* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp405(::RPG::GameCore::ConditionParam* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp406(::RPG::GameCore::ConditionParam* p0, ::RPG::GameCore::ConditionParam* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ConditionParam*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp407(::RPG::GameCore::ItemComefromRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp408(::RPG::GameCore::ItemComefromRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp409(::RPG::GameCore::ItemComefromRow* p0, ::RPG::GameCore::ItemComefromRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp410(::RPG::Client::MonsterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp411(::RPG::Client::MonsterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp412(::RPG::Client::MonsterData* p0, ::RPG::Client::MonsterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp413(::XLua::LuaTable* p0, ::UnityEngine::Vector2 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp414(::XLua::LuaTable* p0, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp415(::RPG::Client::RogueNousDiceSurfaceDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp416(::RPG::Client::RogueNousDiceSurfaceDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp417(::RPG::Client::RogueNousDiceSurfaceDataItem* p0, ::RPG::Client::RogueNousDiceSurfaceDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp418(::RPG::Client::RogueNousDiceBranchDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp419(::RPG::Client::RogueNousDiceBranchDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp420(::RPG::Client::RogueNousDiceBranchDataItem* p0, ::RPG::Client::RogueNousDiceBranchDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp421(::RPG::Client::MonoSceneObjClickHint* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp422(::RPG::Client::MonoSceneObjClickHint* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp423(::RPG::Client::MonoSceneObjClickHint* p0, ::RPG::Client::MonoSceneObjClickHint* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp424(::RPG::Client::TextID p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp425(::RPG::Client::TextID p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp426(::RPG::Client::TextID p0, ::RPG::Client::TextID p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp427(::System::Int32 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp428(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp429(::RPG::Client::CompanionMissionActivityBannerData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp430(::RPG::Client::CompanionMissionActivityBannerData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp431(::RPG::Client::CompanionMissionActivityBannerData* p0, ::RPG::Client::CompanionMissionActivityBannerData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp432(::RPG::Client::RogueTournAreaDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp433(::RPG::Client::RogueTournAreaDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp434(::RPG::Client::RogueTournAreaDataItem* p0, ::RPG::Client::RogueTournAreaDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp435(::RPG::GameCore::EvolveBuildGearEquipInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp436(::RPG::GameCore::EvolveBuildGearEquipInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp437(::RPG::GameCore::EvolveBuildGearEquipInfo* p0, ::RPG::GameCore::EvolveBuildGearEquipInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp438(::RPG::Client::EvolveBuildMixData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp439(::RPG::Client::EvolveBuildMixData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp440(::RPG::Client::EvolveBuildMixData* p0, ::RPG::Client::EvolveBuildMixData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp441(::RPG::Client::ClockParkAttributeType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp442(::RPG::Client::ClockParkAttributeType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp443(::RPG::Client::ClockParkAttributeType p0, ::RPG::Client::ClockParkAttributeType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp444(::System::UInt32 p0, ::System::UInt32 p1, ::RPG::PoolList_1<::UnityEngine::Vector2Int>* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp445(::UnityEngine::Vector2Int p0, ::UnityEngine::Vector2Int p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp446(::RPG::Client::LittleGame::Match3::Match3GameState p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp447(::XLua::LuaTable* p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp448(::RPG::Client::SwordTrainingSkillData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp449(::RPG::Client::SwordTrainingSkillData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp450(::RPG::Client::SwordTrainingSkillData* p0, ::RPG::Client::SwordTrainingSkillData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp451(::RPG::GameCore::PerformanceIDPair* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp452(::RPG::GameCore::PerformanceIDPair* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp453(::RPG::GameCore::PerformanceIDPair* p0, ::RPG::GameCore::PerformanceIDPair* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp454(::InControl::BindingSourceType p0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp455(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp456(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp457(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp458(::RPG::Client::MultipleDropData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp459(::RPG::Client::MultipleDropData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp460(::RPG::Client::MultipleDropData* p0, ::RPG::Client::MultipleDropData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp461(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp462(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp463(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0, ::RPG::Client::TrainParty::TrainPartyRecordGroup* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp464(::RPG::Client::ActivitySummonStage* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp465(::RPG::Client::ActivitySummonStage* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp466(::RPG::Client::ActivitySummonStage* p0, ::RPG::Client::ActivitySummonStage* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivitySummonStage*, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp467(::RPG::Client::PrefHashSet_1<::System::Int32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp468(::RPG::Client::SwordTrainingEndingDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp469(::RPG::Client::SwordTrainingEndingDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp470(::RPG::Client::SwordTrainingEndingDataItem* p0, ::RPG::Client::SwordTrainingEndingDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp471(::RPG::Client::RogueMagicAreaDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp472(::RPG::Client::RogueMagicAreaDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp473(::RPG::Client::RogueMagicAreaDataItem* p0, ::RPG::Client::RogueMagicAreaDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp474(::RPG::Client::RogueMagicUnitDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp475(::RPG::Client::RogueMagicUnitDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp476(::RPG::Client::RogueMagicUnitDataItem* p0, ::RPG::Client::RogueMagicUnitDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp477(::RPG::Client::SuitRecommendAvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp478(::RPG::Client::SuitRecommendAvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp479(::RPG::Client::SuitRecommendAvatarData* p0, ::RPG::Client::SuitRecommendAvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp480(::RPG::Client::UIController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET))(this, p0);
		}

		::RPG::Client::UIController* __Gen_Delegate_Imp481(::System::Exception* p0)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp482(::RPG::Client::UIController* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp483(::RPG::Client::UIController* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp484(::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp485(::RPG::Client::AvatarPathData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp486(::RPG::Client::AvatarPathData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp487(::RPG::Client::AvatarPathData* p0, ::RPG::Client::AvatarPathData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarPathData*, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp488(::Class_1_3497D086B05ACE3A* p0, ::Class_1_BEB73AACF0CDA957* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp489(::RPG::Client::SwitchHandCoinData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp490(::RPG::Client::SwitchHandCoinData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp491(::RPG::Client::SwitchHandCoinData* p0, ::RPG::Client::SwitchHandCoinData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp492(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp493(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp494(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp495(::RPG::Client::RogueMagicScepterDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp496(::RPG::Client::RogueMagicScepterDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp497(::RPG::Client::RogueMagicScepterDataItem* p0, ::RPG::Client::RogueMagicScepterDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp498(::RPG::Client::ActivityPanelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp499(::RPG::Client::ActivityPanelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp500(::RPG::Client::ActivityPanelData* p0, ::RPG::Client::ActivityPanelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp501(::RPG::Client::TarotBookCharacter* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp502(::RPG::Client::TarotBookCharacter* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp503(::RPG::Client::TarotBookCharacter* p0, ::RPG::Client::TarotBookCharacter* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCharacter*, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp504(::UnityEngine::Texture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET))(this, p0);
		}

		::UnityEngine::Texture* __Gen_Delegate_Imp505(::System::Exception* p0)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp506(::UnityEngine::Texture* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp507(::UnityEngine::Texture* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp508(::RPG::Client::TarotBookCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp509(::RPG::Client::TarotBookCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp510(::RPG::Client::TarotBookCard* p0, ::RPG::Client::TarotBookCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCard*, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp511(::RPG::Client::TarotBookClue* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp512(::RPG::Client::TarotBookClue* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp513(::RPG::Client::TarotBookClue* p0, ::RPG::Client::TarotBookClue* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookClue*, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp514(::RPG::Client::TarotBookStory* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp515(::RPG::Client::TarotBookStory* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp516(::RPG::Client::TarotBookStory* p0, ::RPG::Client::TarotBookStory* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookStory*, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp517(::RPG::Client::BookletLuaPanelParam* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp518(::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp519(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp520(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp521(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0, ::RPG::Client::IRogueTournBuildRefTeamMemberData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp522(::RPG::Client::NavMap::MappingInfoNode* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp523(::RPG::Client::NavMap::MappingInfoNode* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp524(::RPG::Client::NavMap::MappingInfoNode* p0, ::RPG::Client::NavMap::MappingInfoNode* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp525(::RPG::Client::GachaGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp526(::RPG::Client::GachaGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp527(::RPG::Client::GachaGroupData* p0, ::RPG::Client::GachaGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaGroupData*, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp528(::RPG::Client::TarotBookReadReward* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp529(::RPG::Client::TarotBookReadReward* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp530(::RPG::Client::TarotBookReadReward* p0, ::RPG::Client::TarotBookReadReward* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookReadReward*, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp531(::UnityEngine::Playables::PlayableDirector* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp532(::System::IntPtr p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET))(this, p0);
		}

		::XLua::LuaBase* __Gen_Delegate_Imp533(::System::Int32 p0, ::XLua::LuaEnv* p1)
		{
			return ((::XLua::LuaBase*(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp534(::System::IntPtr p0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp535(::RPG::GameCore::RelicType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp536(::RPG::GameCore::RelicType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp537(::RPG::GameCore::RelicType p0, ::RPG::GameCore::RelicType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp538(::RPG::Client::TarotBookInteraction* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp539(::RPG::Client::TarotBookInteraction* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp540(::RPG::Client::TarotBookInteraction* p0, ::RPG::Client::TarotBookInteraction* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp541(::RPG::Client::ActivityMarble::MarbleSealData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp542(::RPG::Client::ActivityMarble::MarbleSealData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp543(::RPG::Client::ActivityMarble::MarbleSealData* p0, ::RPG::Client::ActivityMarble::MarbleSealData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET))(this, p0, p1);
		}

		::System::UInt32 __Gen_Delegate_Imp544(::XLua::LuaTable* p0, ::System::UInt32 p1)
		{
			return ((::System::UInt32(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp545(::Class_0_16E4307DCC419505_334* p0, ::Class_0_16E4307DCC419505_334* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_334*, ::Class_0_16E4307DCC419505_334*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp546(::RPG::GameCore::AvatarServantSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp547(::XLua::LuaTable* p0, ::RPG::Client::PlanetFesToastItem* p1, ::System::Object* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp548(::XLua::LuaTable* p0, ::RPG::Client::PlanetFesToastItem* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp549(::RPG::Client::PlanetFesThemeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp550(::RPG::Client::PlanetFesThemeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp551(::RPG::Client::PlanetFesThemeData* p0, ::RPG::Client::PlanetFesThemeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp552(::RPG::Client::PlanetFesCardData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp553(::RPG::Client::PlanetFesCardData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp554(::RPG::Client::PlanetFesCardData* p0, ::RPG::Client::PlanetFesCardData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesCardData*, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp555(::RPG::Client::VirtualRankChimeraTeam* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp556(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp557(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp558(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET))(this, p0, p1);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp559(::UnityEngine::Transform* p0)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp560(::RPG::Client::QuestData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp561(::RPG::Client::QuestData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp562(::RPG::Client::QuestData* p0, ::RPG::Client::QuestData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp563(::RPG::Client::FightFestPhase* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp564(::RPG::Client::FightFestPhase* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp565(::RPG::Client::FightFestPhase* p0, ::RPG::Client::FightFestPhase* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPhase*, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp566(::RPG::Client::FightFestCoachSkill* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp567(::RPG::Client::FightFestCoachSkill* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp568(::RPG::Client::FightFestCoachSkill* p0, ::RPG::Client::FightFestCoachSkill* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp569(::RPG::Client::MatchThreeBirdData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp570(::RPG::Client::MatchThreeBirdData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp571(::RPG::Client::MatchThreeBirdData* p0, ::RPG::Client::MatchThreeBirdData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp572(::UnityEngine::EventSystems::IPointerEnterHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp573(::UnityEngine::EventSystems::IPointerExitHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp574(::UnityEngine::EventSystems::IPointerDownHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp575(::UnityEngine::EventSystems::IPointerUpHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp576(::UnityEngine::EventSystems::IPointerClickHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp577(::UnityEngine::EventSystems::IInitializePotentialDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp578(::UnityEngine::EventSystems::IBeginDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp579(::UnityEngine::EventSystems::IDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp580(::UnityEngine::EventSystems::IEndDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp581(::UnityEngine::EventSystems::IDropHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp582(::UnityEngine::EventSystems::IScrollHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp583(::UnityEngine::EventSystems::IUpdateSelectedHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp584(::UnityEngine::EventSystems::ISelectHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp585(::UnityEngine::EventSystems::IDeselectHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp586(::UnityEngine::EventSystems::IMoveHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp587(::UnityEngine::EventSystems::ISubmitHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp588(::UnityEngine::EventSystems::ICancelHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp589(::UnityEngine::EventSystems::IIgnoreHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IIgnoreHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp590(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET))(this, p0);
		}

		::RPG::Client::PlayerBoardInfo* __Gen_Delegate_Imp591(::System::Exception* p0)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp592(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp593(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp594(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp595(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp596(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp597(::RPG::Client::IPlanetFesBuff* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp598(::RPG::Client::IPlanetFesBuff* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp599(::RPG::Client::IPlanetFesBuff* p0, ::RPG::Client::IPlanetFesBuff* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp600(::System::UInt64 p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp601(::InControl::InputDevice* p0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp602(::RPG::Client::WheelItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp603(::RPG::Client::WheelItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp604(::RPG::Client::WheelItem* p0, ::RPG::Client::WheelItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::WheelItem*, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp605(::RPG::Client::EvolveBuildCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp606(::RPG::Client::EvolveBuildCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp607(::RPG::Client::EvolveBuildCard* p0, ::RPG::Client::EvolveBuildCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp608(::RPG::Client::EvolveBuildScMixData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp609(::RPG::Client::EvolveBuildScMixData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp610(::RPG::Client::EvolveBuildScMixData* p0, ::RPG::Client::EvolveBuildScMixData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp611(::RPG::Client::Recommend::RelicRecommendBigData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET))(this, p0);
		}

		::RPG::Client::Recommend::RelicRecommendBigData* __Gen_Delegate_Imp612(::System::Exception* p0)
		{
			return ((::RPG::Client::Recommend::RelicRecommendBigData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp613(::RPG::Client::Recommend::RelicRecommendBigData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp614(::RPG::Client::Recommend::RelicRecommendBigData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp615(::XLua::LuaTable* p0, ::RPG::Client::TextID p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp616(::RPG::Client::EquipmentItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp617(::RPG::Client::EquipmentItemData* p0, ::RPG::Client::EquipmentItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp618(::Enum_3_DFCB42601400F441 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp619(::Enum_3_DFCB42601400F441 p0)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp620(::Enum_3_DFCB42601400F441 p0, ::Enum_3_DFCB42601400F441 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Enum_3_DFCB42601400F441, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp621(::RPG::Client::RelicItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp622(::RPG::Client::RelicItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp623(::RPG::Client::RelicItemData* p0, ::RPG::Client::RelicItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp624(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* __Gen_Delegate_Imp625(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp626(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp627(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp628(::RPG::GameCore::MarblePVPRankConfigRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp629(::RPG::GameCore::MarblePVPRankConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp630(::RPG::GameCore::MarblePVPRankConfigRow* p0, ::RPG::GameCore::MarblePVPRankConfigRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp631(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp632(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp633(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp634(::RPG::Client::PlanetFesTradingCardOfferItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp635(::RPG::Client::PlanetFesTradingCardOfferItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp636(::RPG::Client::PlanetFesTradingCardOfferItem* p0, ::RPG::Client::PlanetFesTradingCardOfferItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp637(::RPG::Client::ElfRestaurantRecipeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp638(::RPG::Client::ElfRestaurantRecipeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp639(::RPG::Client::ElfRestaurantRecipeData* p0, ::RPG::Client::ElfRestaurantRecipeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp640(::System::UInt64 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp641(::System::UInt64 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp642(::System::UInt64 p0, ::System::UInt64 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp643(::RPG::Client::ElfShopItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp644(::RPG::Client::ElfShopItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp645(::RPG::Client::ElfShopItemData* p0, ::RPG::Client::ElfShopItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfShopItemData*, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp646(::RPG::GameCore::MazeBuffData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp647(::RPG::GameCore::MazeBuffData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp648(::RPG::GameCore::MazeBuffData* p0, ::RPG::GameCore::MazeBuffData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp649(::RPG::Client::NewsTickerItem* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp650(::RPG::Client::PlanetFesTradingCardApplyItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp651(::RPG::Client::PlanetFesTradingCardApplyItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp652(::RPG::Client::PlanetFesTradingCardApplyItem* p0, ::RPG::Client::PlanetFesTradingCardApplyItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp653(::RPG::Client::PlanetFesSkillPhase* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp654(::RPG::Client::PlanetFesSkillPhase* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp655(::RPG::Client::PlanetFesSkillPhase* p0, ::RPG::Client::PlanetFesSkillPhase* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp656(::RPG::Client::IRogueTournBuildRefDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp657(::RPG::Client::IRogueTournBuildRefDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp658(::RPG::Client::IRogueTournBuildRefDataItem* p0, ::RPG::Client::IRogueTournBuildRefDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp659(::RPG::Client::ParkourRank* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp660(::RPG::Client::ParkourRank* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp661(::RPG::Client::ParkourRank* p0, ::RPG::Client::ParkourRank* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourRank*, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp662(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp663(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp664(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0, ::RPG::GameCore::IAdventurePlayerCommonRowWrap* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp665(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp666(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp667(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp668(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp669(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp670(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0, ::RPG::Client::IFateGameRoundSettleDmgSourceItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp671(::RPG::Client::AvatarEnhancedHint* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp672(::RPG::Client::AvatarEnhancedHint* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp673(::RPG::Client::AvatarEnhancedHint* p0, ::RPG::Client::AvatarEnhancedHint* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp674(::RPG::Client::FateHandbookHouguItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp675(::RPG::Client::FateHandbookHouguItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp676(::RPG::Client::FateHandbookHouguItem* p0, ::RPG::Client::FateHandbookHouguItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp677(::RPG::Client::FateHandbookReijuItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp678(::RPG::Client::FateHandbookReijuItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp679(::RPG::Client::FateHandbookReijuItem* p0, ::RPG::Client::FateHandbookReijuItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp680(::RPG::Client::GridFightOrbData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp681(::RPG::Client::GridFightOrbData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp682(::RPG::Client::GridFightOrbData* p0, ::RPG::Client::GridFightOrbData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbData*, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp683(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp684(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp685(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp686(::RPG::Client::BaseGachaGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp687(::RPG::Client::BaseGachaGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp688(::RPG::Client::BaseGachaGroupData* p0, ::RPG::Client::BaseGachaGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp689(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp690(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp691(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp692(::RPG::GameCore::HipplenGameGradeType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp693(::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp694(::RPG::Client::GridFightRole* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp695(::RPG::Client::GridFightGridData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp696(::System::Object* p0, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp697(::System::Object* p0, ::System::ComponentModel::PropertyChangedEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp698(::RPG::Client::GridFightMonsterAffixConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp699(::RPG::Client::GridFightMonsterAffixConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp700(::RPG::Client::GridFightMonsterAffixConfig* p0, ::RPG::Client::GridFightMonsterAffixConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET))(this, p0, p1);
		}

		::System::Single __Gen_Delegate_Imp701(::UnityEngine::UI::ILayoutElement* p0)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp702(::RPG::Client::GridFightTrait* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp703(::RPG::Client::GridFightTrait* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp704(::RPG::Client::GridFightTrait* p0, ::RPG::Client::GridFightTrait* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp705(::RPG::Client::DrinkMakerCheersGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp706(::RPG::Client::DrinkMakerCheersGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp707(::RPG::Client::DrinkMakerCheersGroupData* p0, ::RPG::Client::DrinkMakerCheersGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp708(::RPG::Client::DrinkMakerCheersGuestCommentData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp709(::RPG::Client::DrinkMakerCheersGuestCommentData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp710(::RPG::Client::DrinkMakerCheersGuestCommentData* p0, ::RPG::Client::DrinkMakerCheersGuestCommentData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp711(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp712(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp713(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp714(::RPG::Client::RoleTrialActivityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp715(::RPG::Client::RoleTrialActivityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp716(::RPG::Client::RoleTrialActivityData* p0, ::RPG::Client::RoleTrialActivityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp717(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3> p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET))(this, p0);
		}

		::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3> __Gen_Delegate_Imp718(::System::Exception* p0)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3>(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp719(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3> p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp720(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3> p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_3>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp721(::RPG::GameCore::MainMissionSortedItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp722(::RPG::GameCore::MainMissionSortedItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp723(::RPG::GameCore::MainMissionSortedItem* p0, ::RPG::GameCore::MainMissionSortedItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp724(::RPG::GameCore::PerformanceSkipOverrideRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp725(::RPG::Client::GridFightMonsterCampConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp726(::RPG::Client::GridFightMonsterCampConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp727(::RPG::Client::GridFightMonsterCampConfig* p0, ::RPG::Client::GridFightMonsterCampConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET))(this, p0, p1);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* __Gen_Delegate_Imp728(::XLua::LuaTable* p0, ::SuperScrollView::LoopFlexibleGridView* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp729(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp730(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp731(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp732(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp733(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp734(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp735(::RPG::Client::GridFightRole* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp736(::RPG::Client::GridFightRole* p0, ::RPG::Client::GridFightRole* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp737(::RPG::Client::GridFightAugment* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp738(::RPG::Client::GridFightAugment* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp739(::RPG::Client::GridFightAugment* p0, ::RPG::Client::GridFightAugment* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightAugment*, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp740(::RPG::Client::GridFightHandBookEquipItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp741(::RPG::Client::GridFightHandBookEquipItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp742(::RPG::Client::GridFightHandBookEquipItemConfig* p0, ::RPG::Client::GridFightHandBookEquipItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp743(::System::Boolean p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp744(::System::Boolean p0, ::System::Boolean p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp745(::RPG::Client::CakeRaceBattleItemDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp746(::RPG::Client::CakeRaceBattleItemDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp747(::RPG::Client::CakeRaceBattleItemDataItem* p0, ::RPG::Client::CakeRaceBattleItemDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp748(::UnityEngine::EventSystems::RaycastResult p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp749(::UnityEngine::EventSystems::RaycastResult p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp750(::UnityEngine::EventSystems::RaycastResult p0, ::UnityEngine::EventSystems::RaycastResult p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp751(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* __Gen_Delegate_Imp752(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp753(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp754(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp755(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp756(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp757(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp758(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp759(::RPG::Client::GridFightGameRefData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp760(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp761(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp762(::RPG::Client::TeamBuild* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp763(::RPG::Client::TeamBuild* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp764(::RPG::Client::TeamBuild* p0, ::RPG::Client::TeamBuild* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamBuild*, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET))(this, p0, p1);
		}

		::RPG::Client::UIBubbleItem* __Gen_Delegate_Imp765(::XLua::LuaTable* p0, ::RPG::Client::UIBubbleManager* p1)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp766(::RPG::Client::GridFightOrbEntityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp767(::RPG::Client::GridFightOrbEntityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp768(::RPG::Client::GridFightOrbEntityData* p0, ::RPG::Client::GridFightOrbEntityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp769(::RPG::Client::ActivityHotData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp770(::RPG::Client::ActivityHotData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp771(::RPG::Client::ActivityHotData* p0, ::RPG::Client::ActivityHotData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotData*, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp772(::RPG::Client::ActivityHotCoreRewardData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp773(::RPG::Client::ActivityHotCoreRewardData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp774(::RPG::Client::ActivityHotCoreRewardData* p0, ::RPG::Client::ActivityHotCoreRewardData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp775(::RPG::Client::MatchPlayRecord* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp776(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* __Gen_Delegate_Imp777(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp778(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp779(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET))(this, p0);
		}

		::RPG::Client::LuaUIController* __Gen_Delegate_Imp780(::System::Exception* p0)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp781(::RPG::Client::LuaUIController* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp782(::RPG::Client::LuaUIController* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp783(::RPG::Client::GridFightDivisionLevelReward* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp784(::RPG::Client::GridFightDivisionLevelReward* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp785(::RPG::Client::GridFightDivisionLevelReward* p0, ::RPG::Client::GridFightDivisionLevelReward* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp786(::RPG::Client::IResidentActivityPanelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp787(::RPG::Client::IResidentActivityPanelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp788(::RPG::Client::IResidentActivityPanelData* p0, ::RPG::Client::IResidentActivityPanelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp789(::RPG::Client::GridFightHandbookRole* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp790(::RPG::Client::GridFightHandbookRole* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp791(::RPG::Client::GridFightHandbookRole* p0, ::RPG::Client::GridFightHandbookRole* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp792(::RPG::Client::GridFightPortalData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp793(::RPG::Client::GridFightPortalData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp794(::RPG::Client::GridFightPortalData* p0, ::RPG::Client::GridFightPortalData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPortalData*, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp795(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp796(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp797(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp798(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp799(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp800(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp801(::RPG::Client::BaseLobby* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET))(this, p0);
		}

		::RPG::Client::BaseLobby* __Gen_Delegate_Imp802(::System::Exception* p0)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp803(::RPG::Client::BaseLobby* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp804(::RPG::Client::BaseLobby* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp805(::RPG::Client::GridFightEquipItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp806(::RPG::Client::GridFightEquipItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp807(::RPG::Client::GridFightEquipItemConfig* p0, ::RPG::Client::GridFightEquipItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp808(::RPG::Client::TarotBookDeleteData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp809(::RPG::Client::TarotBookDeleteData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp810(::RPG::Client::TarotBookDeleteData* p0, ::RPG::Client::TarotBookDeleteData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp811(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET))(this, p0);
		}

		::RPG::Client::BaseGameFlow* __Gen_Delegate_Imp812(::System::Exception* p0)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp813(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp814(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp815(::XLua::LuaTable* p0, ::RPG::Client::PenaconyEndmostChronicleEvent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp816(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp817(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp818(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp819(::RPG::Client::CakeRaceHandbookCatItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp820(::RPG::Client::CakeRaceHandbookCatItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp821(::RPG::Client::CakeRaceHandbookCatItem* p0, ::RPG::Client::CakeRaceHandbookCatItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp822(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp823(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp824(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0, ::RPG::Client::DiceCombat::DiceCombatCommunicateData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp825(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp826(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp827(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp828(::RPG::Client::ChimeraDuelMasterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp829(::RPG::Client::ChimeraDuelMasterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp830(::RPG::Client::ChimeraDuelMasterData* p0, ::RPG::Client::ChimeraDuelMasterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp831(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp832(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp833(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp834(::System::UInt32 p0, ::Google::Protobuf::ByteString* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp835(::RPG::Client::ChenLingBattleDeckData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp836(::RPG::Client::ChenLingBattleDeckData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp837(::RPG::Client::ChenLingBattleDeckData* p0, ::RPG::Client::ChenLingBattleDeckData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp838(::RPG::Client::DiceCombatDiceConfigData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp839(::RPG::Client::DiceCombatDiceConfigData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp840(::RPG::Client::DiceCombatDiceConfigData* p0, ::RPG::Client::DiceCombatDiceConfigData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp841(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp842(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp843(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp844(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp845(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp846(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp847(::RPG::Client::AssistData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp848(::RPG::Client::AssistData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp849(::RPG::Client::AssistData* p0, ::RPG::Client::AssistData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AssistData*, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp850(::RPG::Client::GridFightPresentEntity* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp851(::RPG::Client::GridFightPresentEntity* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp852(::RPG::Client::GridFightPresentEntity* p0, ::RPG::Client::GridFightPresentEntity* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET))(this, p0, p1);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp853()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp854(::RPG::Client::AvatarOutfitUnit* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp855(::RPG::Client::AvatarOutfitUnit* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp856(::RPG::Client::AvatarOutfitUnit* p0, ::RPG::Client::AvatarOutfitUnit* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp857(::XLua::LuaTable* p0, ::Class_0_16E4307DCC419505_335* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::Class_0_16E4307DCC419505_335*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp858(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp859(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp860(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* p0, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp861(::Class_1_B1C37B065CBC515F* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B1C37B065CBC515F*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp862(::Class_1_B1C37B065CBC515F* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B1C37B065CBC515F*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp863(::Class_1_B1C37B065CBC515F* p0, ::Class_1_B1C37B065CBC515F* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_B1C37B065CBC515F*, ::Class_1_B1C37B065CBC515F*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp864(::RPG::Client::RogueTournArchiveData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp865(::RPG::Client::RogueTournArchiveData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp866(::RPG::Client::RogueTournArchiveData* p0, ::RPG::Client::RogueTournArchiveData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp867(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET))(this, p0);
		}

		::RPG::Client::LightConeRecommendData* __Gen_Delegate_Imp868(::System::Exception* p0)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp869(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp870(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp871(::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp872(::RPG::Client::IAvatarInfoProvider* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp873(::RPG::Client::IAvatarInfoProvider* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp874(::RPG::Client::IAvatarInfoProvider* p0, ::RPG::Client::IAvatarInfoProvider* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp875(::RPG::Client::ChatReportReason* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp876(::RPG::Client::ChatReportReason* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp877(::RPG::Client::ChatReportReason* p0, ::RPG::Client::ChatReportReason* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatReportReason*, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp878(::RPG::GameCore::TurnBasedModifierInstance* p0, ::RPG::GameCore::TurnBasedModifierInstance* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp879(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp880(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp881(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp882(::RPG::Client::IRogueTournPersonaRoomCardInGame* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp883(::RPG::Client::IRogueTournPersonaRoomCardInGame* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp884(::RPG::Client::IRogueTournPersonaRoomCardInGame* p0, ::RPG::Client::IRogueTournPersonaRoomCardInGame* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp885(::UnityEngine::Animator* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp886(::UnityEngine::Animator* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp887(::UnityEngine::Animator* p0, ::UnityEngine::Animator* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp888(::RPG::Client::IRogueTournPersonaRoomCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp889(::RPG::Client::IRogueTournPersonaRoomCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp890(::RPG::Client::IRogueTournPersonaRoomCard* p0, ::RPG::Client::IRogueTournPersonaRoomCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp891(::RPG::Client::MongoObjectId p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp892(::RPG::Client::MongoObjectId p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp893(::RPG::Client::MongoObjectId p0, ::RPG::Client::MongoObjectId p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET))(this, p0, p1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp894(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp895(::Class_1_E3A8B05AA1BBEE81* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp896(::Class_0_16E4307DCC419505_336* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp897(::Class_0_16E4307DCC419505_336* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp898(::RPG::Client::LittleGame::FiveDim::MiniGameEventReason p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameEventReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp899(::Struct_2_FEFADCB82FEB841E_3 p0)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp900(::Class_0_16E4307DCC419505_337* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_337*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp901(::RPG::Client::MapProp* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp902(::XLua::LuaTable* p0, ::System::Int32 p1, ::System::Object* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp903(::RPG::Client::GridFightEquipItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp904(::XLua::LuaTable* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp905(::RPG::Client::RogueTournHexData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp906(::Class_1_303D5A33D1401D59* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp907(::UnityEngine::GameObject* p0, ::RPG::Client::OpenWorld::StreamingItemData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp908(::RPG::Client::OpenWorld::StreamingItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp909(::UnityEngine::GameObject* p0, ::UnityEngine::GameObject* p1, ::RPG::Client::OpenWorld::StreamingItemData* p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp910(::Class_1_BDA8DEEF59BE3031* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp911(::System::Int32 p0, ::System::Int32 p1, ::System::Int32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp912(::Spine::TrackEntry* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp913(::Spine::TrackEntry* p0, ::Spine::Event* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp914(::UnityEngine::UI::Graphic* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp915(::UnityEngine::UI::Graphic* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET))(this, p0, p1);
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
