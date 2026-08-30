#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_NormalGroupNPCIndexKey.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIntroButton_ActivityIntroButtonConfig.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleSealTalkConfig.h"
#include "unitysdk/RPG/Client/AdventureBuffData.h"
#include "unitysdk/RPG/Client/AlleyPackStatistics.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/ChessRogueBoardCellEnterData.h"
#include "unitysdk/RPG/Client/FightFestProgress.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMoveInputData.h"
#include "unitysdk/RPG/Client/MazeAutoUseMPItemHintData_ItemEntry.h"
#include "unitysdk/RPG/Client/MissionModule_ResultValue.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/RPG/Client/PlayerLevelUpgradeData.h"
#include "unitysdk/RPG/Client/PlayerStaminaData.h"
#include "unitysdk/RPG/Client/PlayerWorldLevelUpgradeData.h"
#include "unitysdk/RPG/Client/Promises/TimeData.h"
#include "unitysdk/RPG/Client/QteCatchGhostRewindInstance_PathPoint.h"
#include "unitysdk/RPG/Client/RogueMiracleIdentifier.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoRarityData.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoWorldData.h"
#include "unitysdk/RPG/Client/UILineRenderer_Curve.h"
#include "unitysdk/RPG/Client/UIPolygon_VertexAttribute.h"
#include "unitysdk/RPG/Client/UIQuad_VertexAttribute.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayBossResult.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_ReplaySaveData.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityExtraProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AvatarPromotionExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarServantSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/BattleEventExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DialogueGroupExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint_FixPointParsePartData.h"
#include "unitysdk/RPG/GameCore/GuideChallengeTabExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/GuideRogueTabExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/ItemExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_BattleScoringData.h"
#include "unitysdk/RPG/GameCore/MainMissionExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MazeBuffExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MessageItemExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MonsterExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MonsterSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/PerformanceEExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/PlaneEventExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/PropExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RaidConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RewardExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RogueTalkNameColorExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/SpecialNPCDataExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/StageExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/StatusExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/SubMissionExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/TalkSentenceConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/TextmapExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/VoiceConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Ray2D.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params.h"
#include "unitysdk/UnityEngine/UI/TextPosition.h"
#include "unitysdk/UnityEngine/UI/TouchFilter_FilterParam.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Type; }
namespace XLua { class ObjectTranslator; }

#define XLUA_COPYBYVALUE_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0xE846CE0)
#define XLUA_COPYBYVALUE_PACK_10_OFFSET UNITYSDK_OFFSET(0xE831620)
#define XLUA_COPYBYVALUE_PACK_11_OFFSET UNITYSDK_OFFSET(0xE831C80)
#define XLUA_COPYBYVALUE_PACK_12_OFFSET UNITYSDK_OFFSET(0xE832030)
#define XLUA_COPYBYVALUE_PACK_13_OFFSET UNITYSDK_OFFSET(0xE8323E0)
#define XLUA_COPYBYVALUE_PACK_14_OFFSET UNITYSDK_OFFSET(0xE832930)
#define XLUA_COPYBYVALUE_PACK_15_OFFSET UNITYSDK_OFFSET(0xE833070)
#define XLUA_COPYBYVALUE_PACK_16_OFFSET UNITYSDK_OFFSET(0xE833820)
#define XLUA_COPYBYVALUE_PACK_17_OFFSET UNITYSDK_OFFSET(0xE833DA0)
#define XLUA_COPYBYVALUE_PACK_18_OFFSET UNITYSDK_OFFSET(0xE8346D0)
#define XLUA_COPYBYVALUE_PACK_19_OFFSET UNITYSDK_OFFSET(0xE835280)
#define XLUA_COPYBYVALUE_PACK_1_OFFSET UNITYSDK_OFFSET(0xE82D930)
#define XLUA_COPYBYVALUE_PACK_20_OFFSET UNITYSDK_OFFSET(0xE835790)
#define XLUA_COPYBYVALUE_PACK_21_OFFSET UNITYSDK_OFFSET(0xE835E40)
#define XLUA_COPYBYVALUE_PACK_22_OFFSET UNITYSDK_OFFSET(0xE8362C0)
#define XLUA_COPYBYVALUE_PACK_23_OFFSET UNITYSDK_OFFSET(0xE836850)
#define XLUA_COPYBYVALUE_PACK_24_OFFSET UNITYSDK_OFFSET(0xE837130)
#define XLUA_COPYBYVALUE_PACK_25_OFFSET UNITYSDK_OFFSET(0xE837B80)
#define XLUA_COPYBYVALUE_PACK_26_OFFSET UNITYSDK_OFFSET(0xE838510)
#define XLUA_COPYBYVALUE_PACK_27_OFFSET UNITYSDK_OFFSET(0xE838C10)
#define XLUA_COPYBYVALUE_PACK_28_OFFSET UNITYSDK_OFFSET(0xE838FD0)
#define XLUA_COPYBYVALUE_PACK_29_OFFSET UNITYSDK_OFFSET(0xE839340)
#define XLUA_COPYBYVALUE_PACK_2_OFFSET UNITYSDK_OFFSET(0xE82DDF0)
#define XLUA_COPYBYVALUE_PACK_30_OFFSET UNITYSDK_OFFSET(0xE839960)
#define XLUA_COPYBYVALUE_PACK_31_OFFSET UNITYSDK_OFFSET(0xE83A250)
#define XLUA_COPYBYVALUE_PACK_32_OFFSET UNITYSDK_OFFSET(0xE83AA70)
#define XLUA_COPYBYVALUE_PACK_33_OFFSET UNITYSDK_OFFSET(0xE83ACE0)
#define XLUA_COPYBYVALUE_PACK_34_OFFSET UNITYSDK_OFFSET(0xE83B160)
#define XLUA_COPYBYVALUE_PACK_35_OFFSET UNITYSDK_OFFSET(0xE83B5E0)
#define XLUA_COPYBYVALUE_PACK_36_OFFSET UNITYSDK_OFFSET(0xE83BA60)
#define XLUA_COPYBYVALUE_PACK_37_OFFSET UNITYSDK_OFFSET(0xE83BE20)
#define XLUA_COPYBYVALUE_PACK_38_OFFSET UNITYSDK_OFFSET(0xE83C0D0)
#define XLUA_COPYBYVALUE_PACK_39_OFFSET UNITYSDK_OFFSET(0xE83C370)
#define XLUA_COPYBYVALUE_PACK_3_OFFSET UNITYSDK_OFFSET(0xE82E2B0)
#define XLUA_COPYBYVALUE_PACK_40_OFFSET UNITYSDK_OFFSET(0xE8393D0)
#define XLUA_COPYBYVALUE_PACK_41_OFFSET UNITYSDK_OFFSET(0xE83C880)
#define XLUA_COPYBYVALUE_PACK_42_OFFSET UNITYSDK_OFFSET(0xE83CD20)
#define XLUA_COPYBYVALUE_PACK_43_OFFSET UNITYSDK_OFFSET(0xE83CFD0)
#define XLUA_COPYBYVALUE_PACK_44_OFFSET UNITYSDK_OFFSET(0xE83D280)
#define XLUA_COPYBYVALUE_PACK_45_OFFSET UNITYSDK_OFFSET(0xE83D5F0)
#define XLUA_COPYBYVALUE_PACK_46_OFFSET UNITYSDK_OFFSET(0xE83D780)
#define XLUA_COPYBYVALUE_PACK_47_OFFSET UNITYSDK_OFFSET(0xE83DAF0)
#define XLUA_COPYBYVALUE_PACK_48_OFFSET UNITYSDK_OFFSET(0xE83DEB0)
#define XLUA_COPYBYVALUE_PACK_49_OFFSET UNITYSDK_OFFSET(0xE83E160)
#define XLUA_COPYBYVALUE_PACK_4_OFFSET UNITYSDK_OFFSET(0xE82E800)
#define XLUA_COPYBYVALUE_PACK_50_OFFSET UNITYSDK_OFFSET(0xE83E410)
#define XLUA_COPYBYVALUE_PACK_51_OFFSET UNITYSDK_OFFSET(0xE83E6C0)
#define XLUA_COPYBYVALUE_PACK_52_OFFSET UNITYSDK_OFFSET(0xE83EA30)
#define XLUA_COPYBYVALUE_PACK_53_OFFSET UNITYSDK_OFFSET(0xE83EDF0)
#define XLUA_COPYBYVALUE_PACK_54_OFFSET UNITYSDK_OFFSET(0xE83F160)
#define XLUA_COPYBYVALUE_PACK_55_OFFSET UNITYSDK_OFFSET(0xE83F520)
#define XLUA_COPYBYVALUE_PACK_56_OFFSET UNITYSDK_OFFSET(0xE83F7C0)
#define XLUA_COPYBYVALUE_PACK_57_OFFSET UNITYSDK_OFFSET(0xE83FC40)
#define XLUA_COPYBYVALUE_PACK_58_OFFSET UNITYSDK_OFFSET(0xE840000)
#define XLUA_COPYBYVALUE_PACK_59_OFFSET UNITYSDK_OFFSET(0xE8402B0)
#define XLUA_COPYBYVALUE_PACK_5_OFFSET UNITYSDK_OFFSET(0xE82F3A0)
#define XLUA_COPYBYVALUE_PACK_60_OFFSET UNITYSDK_OFFSET(0xE840560)
#define XLUA_COPYBYVALUE_PACK_61_OFFSET UNITYSDK_OFFSET(0xE840810)
#define XLUA_COPYBYVALUE_PACK_62_OFFSET UNITYSDK_OFFSET(0xE840AC0)
#define XLUA_COPYBYVALUE_PACK_63_OFFSET UNITYSDK_OFFSET(0xE840D60)
#define XLUA_COPYBYVALUE_PACK_64_OFFSET UNITYSDK_OFFSET(0xE841120)
#define XLUA_COPYBYVALUE_PACK_65_OFFSET UNITYSDK_OFFSET(0xE841490)
#define XLUA_COPYBYVALUE_PACK_66_OFFSET UNITYSDK_OFFSET(0xE841900)
#define XLUA_COPYBYVALUE_PACK_67_OFFSET UNITYSDK_OFFSET(0xE841CF0)
#define XLUA_COPYBYVALUE_PACK_68_OFFSET UNITYSDK_OFFSET(0xE842150)
#define XLUA_COPYBYVALUE_PACK_69_OFFSET UNITYSDK_OFFSET(0xE8426C0)
#define XLUA_COPYBYVALUE_PACK_6_OFFSET UNITYSDK_OFFSET(0xE82FEF0)
#define XLUA_COPYBYVALUE_PACK_70_OFFSET UNITYSDK_OFFSET(0xE837D90)
#define XLUA_COPYBYVALUE_PACK_71_OFFSET UNITYSDK_OFFSET(0xE834AC0)
#define XLUA_COPYBYVALUE_PACK_72_OFFSET UNITYSDK_OFFSET(0xE843460)
#define XLUA_COPYBYVALUE_PACK_73_OFFSET UNITYSDK_OFFSET(0xE843A90)
#define XLUA_COPYBYVALUE_PACK_74_OFFSET UNITYSDK_OFFSET(0xE844290)
#define XLUA_COPYBYVALUE_PACK_75_OFFSET UNITYSDK_OFFSET(0xE8446B0)
#define XLUA_COPYBYVALUE_PACK_76_OFFSET UNITYSDK_OFFSET(0xE844C30)
#define XLUA_COPYBYVALUE_PACK_77_OFFSET UNITYSDK_OFFSET(0xE845610)
#define XLUA_COPYBYVALUE_PACK_78_OFFSET UNITYSDK_OFFSET(0xE845AC0)
#define XLUA_COPYBYVALUE_PACK_79_OFFSET UNITYSDK_OFFSET(0xE831760)
#define XLUA_COPYBYVALUE_PACK_7_OFFSET UNITYSDK_OFFSET(0xE830320)
#define XLUA_COPYBYVALUE_PACK_80_OFFSET UNITYSDK_OFFSET(0xE8349F0)
#define XLUA_COPYBYVALUE_PACK_81_OFFSET UNITYSDK_OFFSET(0xE844E90)
#define XLUA_COPYBYVALUE_PACK_82_OFFSET UNITYSDK_OFFSET(0xE846530)
#define XLUA_COPYBYVALUE_PACK_83_OFFSET UNITYSDK_OFFSET(0xE846650)
#define XLUA_COPYBYVALUE_PACK_84_OFFSET UNITYSDK_OFFSET(0xE846780)
#define XLUA_COPYBYVALUE_PACK_85_OFFSET UNITYSDK_OFFSET(0xE8468A0)
#define XLUA_COPYBYVALUE_PACK_86_OFFSET UNITYSDK_OFFSET(0xE82E9A0)
#define XLUA_COPYBYVALUE_PACK_87_OFFSET UNITYSDK_OFFSET(0xE82D3B0)
#define XLUA_COPYBYVALUE_PACK_88_OFFSET UNITYSDK_OFFSET(0xE833290)
#define XLUA_COPYBYVALUE_PACK_89_OFFSET UNITYSDK_OFFSET(0xE82F6F0)
#define XLUA_COPYBYVALUE_PACK_8_OFFSET UNITYSDK_OFFSET(0xE8307A0)
#define XLUA_COPYBYVALUE_PACK_90_OFFSET UNITYSDK_OFFSET(0xE833F40)
#define XLUA_COPYBYVALUE_PACK_91_OFFSET UNITYSDK_OFFSET(0xE8469E0)
#define XLUA_COPYBYVALUE_PACK_92_OFFSET UNITYSDK_OFFSET(0xE846B10)
#define XLUA_COPYBYVALUE_PACK_9_OFFSET UNITYSDK_OFFSET(0xE830E70)
#define XLUA_COPYBYVALUE_PACK_OFFSET UNITYSDK_OFFSET(0xE82D210)
#define XLUA_COPYBYVALUE_UNPACK_100_OFFSET UNITYSDK_OFFSET(0xE83E4A0)
#define XLUA_COPYBYVALUE_UNPACK_101_OFFSET UNITYSDK_OFFSET(0xE83E550)
#define XLUA_COPYBYVALUE_UNPACK_102_OFFSET UNITYSDK_OFFSET(0xE83E750)
#define XLUA_COPYBYVALUE_UNPACK_103_OFFSET UNITYSDK_OFFSET(0xE83E800)
#define XLUA_COPYBYVALUE_UNPACK_104_OFFSET UNITYSDK_OFFSET(0xE83EB40)
#define XLUA_COPYBYVALUE_UNPACK_105_OFFSET UNITYSDK_OFFSET(0xE83EC80)
#define XLUA_COPYBYVALUE_UNPACK_106_OFFSET UNITYSDK_OFFSET(0xE83EE80)
#define XLUA_COPYBYVALUE_UNPACK_107_OFFSET UNITYSDK_OFFSET(0xE83EF30)
#define XLUA_COPYBYVALUE_UNPACK_108_OFFSET UNITYSDK_OFFSET(0xE83F270)
#define XLUA_COPYBYVALUE_UNPACK_109_OFFSET UNITYSDK_OFFSET(0xE83F3B0)
#define XLUA_COPYBYVALUE_UNPACK_10_OFFSET UNITYSDK_OFFSET(0xE82EC80)
#define XLUA_COPYBYVALUE_UNPACK_110_OFFSET UNITYSDK_OFFSET(0xE83F5B0)
#define XLUA_COPYBYVALUE_UNPACK_111_OFFSET UNITYSDK_OFFSET(0xE83F660)
#define XLUA_COPYBYVALUE_UNPACK_112_OFFSET UNITYSDK_OFFSET(0xE83F8E0)
#define XLUA_COPYBYVALUE_UNPACK_113_OFFSET UNITYSDK_OFFSET(0xE83FA10)
#define XLUA_COPYBYVALUE_UNPACK_114_OFFSET UNITYSDK_OFFSET(0xE83FD50)
#define XLUA_COPYBYVALUE_UNPACK_115_OFFSET UNITYSDK_OFFSET(0xE83FE90)
#define XLUA_COPYBYVALUE_UNPACK_116_OFFSET UNITYSDK_OFFSET(0xE840090)
#define XLUA_COPYBYVALUE_UNPACK_117_OFFSET UNITYSDK_OFFSET(0xE840140)
#define XLUA_COPYBYVALUE_UNPACK_118_OFFSET UNITYSDK_OFFSET(0xE840340)
#define XLUA_COPYBYVALUE_UNPACK_119_OFFSET UNITYSDK_OFFSET(0xE8403F0)
#define XLUA_COPYBYVALUE_UNPACK_11_OFFSET UNITYSDK_OFFSET(0xE82F780)
#define XLUA_COPYBYVALUE_UNPACK_120_OFFSET UNITYSDK_OFFSET(0xE8405F0)
#define XLUA_COPYBYVALUE_UNPACK_121_OFFSET UNITYSDK_OFFSET(0xE8406A0)
#define XLUA_COPYBYVALUE_UNPACK_122_OFFSET UNITYSDK_OFFSET(0xE8408A0)
#define XLUA_COPYBYVALUE_UNPACK_123_OFFSET UNITYSDK_OFFSET(0xE840950)
#define XLUA_COPYBYVALUE_UNPACK_124_OFFSET UNITYSDK_OFFSET(0xE840B50)
#define XLUA_COPYBYVALUE_UNPACK_125_OFFSET UNITYSDK_OFFSET(0xE840C00)
#define XLUA_COPYBYVALUE_UNPACK_126_OFFSET UNITYSDK_OFFSET(0xE840E80)
#define XLUA_COPYBYVALUE_UNPACK_127_OFFSET UNITYSDK_OFFSET(0xE840FB0)
#define XLUA_COPYBYVALUE_UNPACK_128_OFFSET UNITYSDK_OFFSET(0xE8411B0)
#define XLUA_COPYBYVALUE_UNPACK_129_OFFSET UNITYSDK_OFFSET(0xE841260)
#define XLUA_COPYBYVALUE_UNPACK_12_OFFSET UNITYSDK_OFFSET(0xE82FBF0)
#define XLUA_COPYBYVALUE_UNPACK_130_OFFSET UNITYSDK_OFFSET(0xE841530)
#define XLUA_COPYBYVALUE_UNPACK_131_OFFSET UNITYSDK_OFFSET(0xE841600)
#define XLUA_COPYBYVALUE_UNPACK_132_OFFSET UNITYSDK_OFFSET(0xE8419D0)
#define XLUA_COPYBYVALUE_UNPACK_133_OFFSET UNITYSDK_OFFSET(0xE841AC0)
#define XLUA_COPYBYVALUE_UNPACK_134_OFFSET UNITYSDK_OFFSET(0xE841E00)
#define XLUA_COPYBYVALUE_UNPACK_135_OFFSET UNITYSDK_OFFSET(0xE841F20)
#define XLUA_COPYBYVALUE_UNPACK_136_OFFSET UNITYSDK_OFFSET(0xE8422B0)
#define XLUA_COPYBYVALUE_UNPACK_137_OFFSET UNITYSDK_OFFSET(0xE842430)
#define XLUA_COPYBYVALUE_UNPACK_138_OFFSET UNITYSDK_OFFSET(0xE842830)
#define XLUA_COPYBYVALUE_UNPACK_139_OFFSET UNITYSDK_OFFSET(0xE8429F0)
#define XLUA_COPYBYVALUE_UNPACK_13_OFFSET UNITYSDK_OFFSET(0xE82FFC0)
#define XLUA_COPYBYVALUE_UNPACK_140_OFFSET UNITYSDK_OFFSET(0xE838100)
#define XLUA_COPYBYVALUE_UNPACK_141_OFFSET UNITYSDK_OFFSET(0xE842DC0)
#define XLUA_COPYBYVALUE_UNPACK_142_OFFSET UNITYSDK_OFFSET(0xE835010)
#define XLUA_COPYBYVALUE_UNPACK_143_OFFSET UNITYSDK_OFFSET(0xE843190)
#define XLUA_COPYBYVALUE_UNPACK_144_OFFSET UNITYSDK_OFFSET(0xE8435A0)
#define XLUA_COPYBYVALUE_UNPACK_145_OFFSET UNITYSDK_OFFSET(0xE843780)
#define XLUA_COPYBYVALUE_UNPACK_146_OFFSET UNITYSDK_OFFSET(0xE843C00)
#define XLUA_COPYBYVALUE_UNPACK_147_OFFSET UNITYSDK_OFFSET(0xE843E50)
#define XLUA_COPYBYVALUE_UNPACK_148_OFFSET UNITYSDK_OFFSET(0xE844380)
#define XLUA_COPYBYVALUE_UNPACK_149_OFFSET UNITYSDK_OFFSET(0xE844480)
#define XLUA_COPYBYVALUE_UNPACK_14_OFFSET UNITYSDK_OFFSET(0xE8300B0)
#define XLUA_COPYBYVALUE_UNPACK_150_OFFSET UNITYSDK_OFFSET(0xE8447C0)
#define XLUA_COPYBYVALUE_UNPACK_151_OFFSET UNITYSDK_OFFSET(0xE8448E0)
#define XLUA_COPYBYVALUE_UNPACK_152_OFFSET UNITYSDK_OFFSET(0xE844F80)
#define XLUA_COPYBYVALUE_UNPACK_153_OFFSET UNITYSDK_OFFSET(0xE8453C0)
#define XLUA_COPYBYVALUE_UNPACK_154_OFFSET UNITYSDK_OFFSET(0xE845730)
#define XLUA_COPYBYVALUE_UNPACK_155_OFFSET UNITYSDK_OFFSET(0xE845850)
#define XLUA_COPYBYVALUE_UNPACK_156_OFFSET UNITYSDK_OFFSET(0xE845B60)
#define XLUA_COPYBYVALUE_UNPACK_157_OFFSET UNITYSDK_OFFSET(0xE845C30)
#define XLUA_COPYBYVALUE_UNPACK_158_OFFSET UNITYSDK_OFFSET(0xE831980)
#define XLUA_COPYBYVALUE_UNPACK_159_OFFSET UNITYSDK_OFFSET(0xE845E60)
#define XLUA_COPYBYVALUE_UNPACK_15_OFFSET UNITYSDK_OFFSET(0xE830430)
#define XLUA_COPYBYVALUE_UNPACK_160_OFFSET UNITYSDK_OFFSET(0xE834F20)
#define XLUA_COPYBYVALUE_UNPACK_161_OFFSET UNITYSDK_OFFSET(0xE846160)
#define XLUA_COPYBYVALUE_UNPACK_162_OFFSET UNITYSDK_OFFSET(0xE8452C0)
#define XLUA_COPYBYVALUE_UNPACK_163_OFFSET UNITYSDK_OFFSET(0xE8465C0)
#define XLUA_COPYBYVALUE_UNPACK_164_OFFSET UNITYSDK_OFFSET(0xE8466E0)
#define XLUA_COPYBYVALUE_UNPACK_165_OFFSET UNITYSDK_OFFSET(0xE846810)
#define XLUA_COPYBYVALUE_UNPACK_166_OFFSET UNITYSDK_OFFSET(0xE846930)
#define XLUA_COPYBYVALUE_UNPACK_167_OFFSET UNITYSDK_OFFSET(0xE82EBF0)
#define XLUA_COPYBYVALUE_UNPACK_168_OFFSET UNITYSDK_OFFSET(0xE82D610)
#define XLUA_COPYBYVALUE_UNPACK_169_OFFSET UNITYSDK_OFFSET(0xE833560)
#define XLUA_COPYBYVALUE_UNPACK_16_OFFSET UNITYSDK_OFFSET(0xE830570)
#define XLUA_COPYBYVALUE_UNPACK_170_OFFSET UNITYSDK_OFFSET(0xE82FB40)
#define XLUA_COPYBYVALUE_UNPACK_171_OFFSET UNITYSDK_OFFSET(0xE834190)
#define XLUA_COPYBYVALUE_UNPACK_172_OFFSET UNITYSDK_OFFSET(0xE846A80)
#define XLUA_COPYBYVALUE_UNPACK_173_OFFSET UNITYSDK_OFFSET(0xE846BA0)
#define XLUA_COPYBYVALUE_UNPACK_17_OFFSET UNITYSDK_OFFSET(0xE8308B0)
#define XLUA_COPYBYVALUE_UNPACK_18_OFFSET UNITYSDK_OFFSET(0xE8309D0)
#define XLUA_COPYBYVALUE_UNPACK_19_OFFSET UNITYSDK_OFFSET(0xE831110)
#define XLUA_COPYBYVALUE_UNPACK_1_OFFSET UNITYSDK_OFFSET(0xE82D440)
#define XLUA_COPYBYVALUE_UNPACK_20_OFFSET UNITYSDK_OFFSET(0xE831400)
#define XLUA_COPYBYVALUE_UNPACK_21_OFFSET UNITYSDK_OFFSET(0xE831800)
#define XLUA_COPYBYVALUE_UNPACK_22_OFFSET UNITYSDK_OFFSET(0xE831A50)
#define XLUA_COPYBYVALUE_UNPACK_23_OFFSET UNITYSDK_OFFSET(0xE831D90)
#define XLUA_COPYBYVALUE_UNPACK_24_OFFSET UNITYSDK_OFFSET(0xE831EC0)
#define XLUA_COPYBYVALUE_UNPACK_25_OFFSET UNITYSDK_OFFSET(0xE8320C0)
#define XLUA_COPYBYVALUE_UNPACK_26_OFFSET UNITYSDK_OFFSET(0xE832170)
#define XLUA_COPYBYVALUE_UNPACK_27_OFFSET UNITYSDK_OFFSET(0xE8324F0)
#define XLUA_COPYBYVALUE_UNPACK_28_OFFSET UNITYSDK_OFFSET(0xE832630)
#define XLUA_COPYBYVALUE_UNPACK_29_OFFSET UNITYSDK_OFFSET(0xE832AD0)
#define XLUA_COPYBYVALUE_UNPACK_2_OFFSET UNITYSDK_OFFSET(0xE82D6C0)
#define XLUA_COPYBYVALUE_UNPACK_30_OFFSET UNITYSDK_OFFSET(0xE832CA0)
#define XLUA_COPYBYVALUE_UNPACK_31_OFFSET UNITYSDK_OFFSET(0xE833320)
#define XLUA_COPYBYVALUE_UNPACK_32_OFFSET UNITYSDK_OFFSET(0xE8335F0)
#define XLUA_COPYBYVALUE_UNPACK_33_OFFSET UNITYSDK_OFFSET(0xE833930)
#define XLUA_COPYBYVALUE_UNPACK_34_OFFSET UNITYSDK_OFFSET(0xE833A70)
#define XLUA_COPYBYVALUE_UNPACK_35_OFFSET UNITYSDK_OFFSET(0xE833FE0)
#define XLUA_COPYBYVALUE_UNPACK_36_OFFSET UNITYSDK_OFFSET(0xE834220)
#define XLUA_COPYBYVALUE_UNPACK_37_OFFSET UNITYSDK_OFFSET(0xE834BB0)
#define XLUA_COPYBYVALUE_UNPACK_38_OFFSET UNITYSDK_OFFSET(0xE835110)
#define XLUA_COPYBYVALUE_UNPACK_39_OFFSET UNITYSDK_OFFSET(0xE835310)
#define XLUA_COPYBYVALUE_UNPACK_3_OFFSET UNITYSDK_OFFSET(0xE82DA40)
#define XLUA_COPYBYVALUE_UNPACK_40_OFFSET UNITYSDK_OFFSET(0xE8353C0)
#define XLUA_COPYBYVALUE_UNPACK_41_OFFSET UNITYSDK_OFFSET(0xE8359B0)
#define XLUA_COPYBYVALUE_UNPACK_42_OFFSET UNITYSDK_OFFSET(0xE835C10)
#define XLUA_COPYBYVALUE_UNPACK_43_OFFSET UNITYSDK_OFFSET(0xE835F60)
#define XLUA_COPYBYVALUE_UNPACK_44_OFFSET UNITYSDK_OFFSET(0xE836090)
#define XLUA_COPYBYVALUE_UNPACK_45_OFFSET UNITYSDK_OFFSET(0xE836460)
#define XLUA_COPYBYVALUE_UNPACK_46_OFFSET UNITYSDK_OFFSET(0xE836620)
#define XLUA_COPYBYVALUE_UNPACK_47_OFFSET UNITYSDK_OFFSET(0xE8369F0)
#define XLUA_COPYBYVALUE_UNPACK_48_OFFSET UNITYSDK_OFFSET(0xE836BC0)
#define XLUA_COPYBYVALUE_UNPACK_49_OFFSET UNITYSDK_OFFSET(0xE837480)
#define XLUA_COPYBYVALUE_UNPACK_4_OFFSET UNITYSDK_OFFSET(0xE82DB80)
#define XLUA_COPYBYVALUE_UNPACK_50_OFFSET UNITYSDK_OFFSET(0xE837870)
#define XLUA_COPYBYVALUE_UNPACK_51_OFFSET UNITYSDK_OFFSET(0xE837E80)
#define XLUA_COPYBYVALUE_UNPACK_52_OFFSET UNITYSDK_OFFSET(0xE838200)
#define XLUA_COPYBYVALUE_UNPACK_53_OFFSET UNITYSDK_OFFSET(0xE838720)
#define XLUA_COPYBYVALUE_UNPACK_54_OFFSET UNITYSDK_OFFSET(0xE8389A0)
#define XLUA_COPYBYVALUE_UNPACK_55_OFFSET UNITYSDK_OFFSET(0xE838D40)
#define XLUA_COPYBYVALUE_UNPACK_56_OFFSET UNITYSDK_OFFSET(0xE838E60)
#define XLUA_COPYBYVALUE_UNPACK_57_OFFSET UNITYSDK_OFFSET(0xE839060)
#define XLUA_COPYBYVALUE_UNPACK_58_OFFSET UNITYSDK_OFFSET(0xE839110)
#define XLUA_COPYBYVALUE_UNPACK_59_OFFSET UNITYSDK_OFFSET(0xE8393E0)
#define XLUA_COPYBYVALUE_UNPACK_5_OFFSET UNITYSDK_OFFSET(0xE82DF00)
#define XLUA_COPYBYVALUE_UNPACK_60_OFFSET UNITYSDK_OFFSET(0xE8394A0)
#define XLUA_COPYBYVALUE_UNPACK_61_OFFSET UNITYSDK_OFFSET(0xE839970)
#define XLUA_COPYBYVALUE_UNPACK_62_OFFSET UNITYSDK_OFFSET(0xE839990)
#define XLUA_COPYBYVALUE_UNPACK_63_OFFSET UNITYSDK_OFFSET(0xE83A260)
#define XLUA_COPYBYVALUE_UNPACK_64_OFFSET UNITYSDK_OFFSET(0xE83A280)
#define XLUA_COPYBYVALUE_UNPACK_65_OFFSET UNITYSDK_OFFSET(0xE83AA80)
#define XLUA_COPYBYVALUE_UNPACK_66_OFFSET UNITYSDK_OFFSET(0xE83AAB0)
#define XLUA_COPYBYVALUE_UNPACK_67_OFFSET UNITYSDK_OFFSET(0xE83ADF0)
#define XLUA_COPYBYVALUE_UNPACK_68_OFFSET UNITYSDK_OFFSET(0xE83AF30)
#define XLUA_COPYBYVALUE_UNPACK_69_OFFSET UNITYSDK_OFFSET(0xE83B270)
#define XLUA_COPYBYVALUE_UNPACK_6_OFFSET UNITYSDK_OFFSET(0xE82E040)
#define XLUA_COPYBYVALUE_UNPACK_70_OFFSET UNITYSDK_OFFSET(0xE83B3B0)
#define XLUA_COPYBYVALUE_UNPACK_71_OFFSET UNITYSDK_OFFSET(0xE83B6F0)
#define XLUA_COPYBYVALUE_UNPACK_72_OFFSET UNITYSDK_OFFSET(0xE83B830)
#define XLUA_COPYBYVALUE_UNPACK_73_OFFSET UNITYSDK_OFFSET(0xE83BB70)
#define XLUA_COPYBYVALUE_UNPACK_74_OFFSET UNITYSDK_OFFSET(0xE83BCB0)
#define XLUA_COPYBYVALUE_UNPACK_75_OFFSET UNITYSDK_OFFSET(0xE83BEB0)
#define XLUA_COPYBYVALUE_UNPACK_76_OFFSET UNITYSDK_OFFSET(0xE83BF60)
#define XLUA_COPYBYVALUE_UNPACK_77_OFFSET UNITYSDK_OFFSET(0xE83C160)
#define XLUA_COPYBYVALUE_UNPACK_78_OFFSET UNITYSDK_OFFSET(0xE83C200)
#define XLUA_COPYBYVALUE_UNPACK_79_OFFSET UNITYSDK_OFFSET(0xE83C400)
#define XLUA_COPYBYVALUE_UNPACK_7_OFFSET UNITYSDK_OFFSET(0xE82E3C0)
#define XLUA_COPYBYVALUE_UNPACK_80_OFFSET UNITYSDK_OFFSET(0xE839490)
#define XLUA_COPYBYVALUE_UNPACK_81_OFFSET UNITYSDK_OFFSET(0xE83C4B0)
#define XLUA_COPYBYVALUE_UNPACK_82_OFFSET UNITYSDK_OFFSET(0xE83CA10)
#define XLUA_COPYBYVALUE_UNPACK_83_OFFSET UNITYSDK_OFFSET(0xE83CBB0)
#define XLUA_COPYBYVALUE_UNPACK_84_OFFSET UNITYSDK_OFFSET(0xE83CDB0)
#define XLUA_COPYBYVALUE_UNPACK_85_OFFSET UNITYSDK_OFFSET(0xE83CE60)
#define XLUA_COPYBYVALUE_UNPACK_86_OFFSET UNITYSDK_OFFSET(0xE83D060)
#define XLUA_COPYBYVALUE_UNPACK_87_OFFSET UNITYSDK_OFFSET(0xE83D110)
#define XLUA_COPYBYVALUE_UNPACK_88_OFFSET UNITYSDK_OFFSET(0xE83D310)
#define XLUA_COPYBYVALUE_UNPACK_89_OFFSET UNITYSDK_OFFSET(0xE83D3C0)
#define XLUA_COPYBYVALUE_UNPACK_8_OFFSET UNITYSDK_OFFSET(0xE82E500)
#define XLUA_COPYBYVALUE_UNPACK_90_OFFSET UNITYSDK_OFFSET(0xE83D600)
#define XLUA_COPYBYVALUE_UNPACK_91_OFFSET UNITYSDK_OFFSET(0xE83D610)
#define XLUA_COPYBYVALUE_UNPACK_92_OFFSET UNITYSDK_OFFSET(0xE83D810)
#define XLUA_COPYBYVALUE_UNPACK_93_OFFSET UNITYSDK_OFFSET(0xE83D8C0)
#define XLUA_COPYBYVALUE_UNPACK_94_OFFSET UNITYSDK_OFFSET(0xE83DC00)
#define XLUA_COPYBYVALUE_UNPACK_95_OFFSET UNITYSDK_OFFSET(0xE83DD40)
#define XLUA_COPYBYVALUE_UNPACK_96_OFFSET UNITYSDK_OFFSET(0xE83DF40)
#define XLUA_COPYBYVALUE_UNPACK_97_OFFSET UNITYSDK_OFFSET(0xE83DFF0)
#define XLUA_COPYBYVALUE_UNPACK_98_OFFSET UNITYSDK_OFFSET(0xE83E1F0)
#define XLUA_COPYBYVALUE_UNPACK_99_OFFSET UNITYSDK_OFFSET(0xE83E2A0)
#define XLUA_COPYBYVALUE_UNPACK_9_OFFSET UNITYSDK_OFFSET(0xE82EA30)
#define XLUA_COPYBYVALUE_UNPACK_OFFSET UNITYSDK_OFFSET(0xE82CEE0)

namespace XLua
{
	inline static constexpr unsigned int CopyByValue_TypeDefinitionIndex = 50461;

	class CopyByValue : public ::System::Object
	{
	public:
		static ::System::Void UnPack(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::Conflict_NormalGroupNPCIndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack(::System::IntPtr a1, ::System::Int32 a2, ::Conflict_NormalGroupNPCIndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_1(::System::IntPtr a1, ::System::Int32 a2, ::Conflict_NormalGroupNPCIndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_2(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_1(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_3(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_4(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_2(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_5(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_6(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_3(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_7(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_8(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::AdventureBuffData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_8_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_4(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AdventureBuffData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_9(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AdventureBuffData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_10(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::AlleyPackStatistics& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_10_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_5(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AlleyPackStatistics a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_11(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AlleyPackStatistics& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_11_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_12(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::CakeBubbleOffset& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::CakeBubbleOffset&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_12_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_6(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::CakeBubbleOffset a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::CakeBubbleOffset))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_13(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::CakeBubbleOffset& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::CakeBubbleOffset&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_13_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_14(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ChessRogueBoardCellEnterData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_14_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_7(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ChessRogueBoardCellEnterData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_15(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ChessRogueBoardCellEnterData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_15_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_16(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::FightFestProgress& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_16_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_8(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FightFestProgress a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_17(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FightFestProgress& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_17_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_18(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::FindChestMarkConfig& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_18_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_9(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FindChestMarkConfig a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_19(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FindChestMarkConfig& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_19_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_20(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_20_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_10(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_10_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_21(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_21_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_22(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_22_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_11(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_11_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_23(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_23_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_24(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::MissionModule_ResultValue& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_24_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_12(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MissionModule_ResultValue a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_12_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_25(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MissionModule_ResultValue& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_25_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_26(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::MultipleDropTimesData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_26_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_13(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MultipleDropTimesData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_13_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_27(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MultipleDropTimesData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_27_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_28(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::PlayerLevelUpgradeData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_28_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_14(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerLevelUpgradeData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_14_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_29(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerLevelUpgradeData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_29_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_30(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::PlayerStaminaData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_30_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_15(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerStaminaData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_15_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_31(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerStaminaData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_31_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_32(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::PlayerWorldLevelUpgradeData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_32_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_16(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerWorldLevelUpgradeData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_16_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_33(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerWorldLevelUpgradeData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_33_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_34(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::Promises::TimeData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_34_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_17(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::Promises::TimeData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_17_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_35(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::Promises::TimeData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_35_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_36(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_36_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_18(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_18_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_37(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_37_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_38(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::RogueMiracleIdentifier& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_38_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_19(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::RogueMiracleIdentifier a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_19_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_39(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::RogueMiracleIdentifier& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_39_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_40(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_40_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_20(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_20_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_41(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_41_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_42(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::TextID& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_42_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_21(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_21_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_43(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TextID& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_43_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_44(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_44_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_22(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_22_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_45(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_45_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_46(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_46_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_23(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_23_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_47(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_47_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_48(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::UILineRenderer_Curve& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_48_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_24(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UILineRenderer_Curve a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_24_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_49(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UILineRenderer_Curve& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_49_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_50(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::UIPolygon_VertexAttribute& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_50_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_25(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIPolygon_VertexAttribute a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_25_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_51(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIPolygon_VertexAttribute& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_51_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_52(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::UIQuad_VertexAttribute& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_52_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_26(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIQuad_VertexAttribute a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_26_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_53(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIQuad_VertexAttribute& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_53_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_54(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::WolfBroGunPlayBossResult& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_54_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_27(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayBossResult a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_27_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_55(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayBossResult& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_55_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_56(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_56_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_28(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_28_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_57(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_57_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_58(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityDynamicFloatInjection& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_58_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_29(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityDynamicFloatInjection a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_29_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_59(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityDynamicFloatInjection& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_59_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_60(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityExtraProperty& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_60_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_30(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityExtraProperty a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_30_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_61(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityExtraProperty& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_61_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_62(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityLinearPropertyWithOverride& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_62_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_31(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearPropertyWithOverride a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_31_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_63(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearPropertyWithOverride& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_63_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_64(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityLinearProperty& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_64_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_32(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearProperty a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_32_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_65(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearProperty& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_65_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_66(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_66_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_33(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_33_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_67(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_67_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_68(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_68_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_34(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_34_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_69(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_69_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_70(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_70_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_35(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_35_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_71(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_71_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_72(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_72_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_36(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_36_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_73(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_73_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_74(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::BattleEventExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_74_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_37(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::BattleEventExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_37_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_75(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::BattleEventExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_75_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_76(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::CommonIndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_76_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_38(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::CommonIndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_38_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_77(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::CommonIndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_77_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_78(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_78_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_39(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_39_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_79(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_79_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_40(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_40_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_80(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_80_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_81(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::FixPoint_FixPointParsePartData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint_FixPointParsePartData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_81_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_41(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint_FixPointParsePartData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint_FixPointParsePartData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_41_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_82(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint_FixPointParsePartData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint_FixPointParsePartData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_82_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_83(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_83_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_42(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_42_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_84(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_84_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_85(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_85_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_43(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_43_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_86(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_86_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_87(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::ItemExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_87_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_44(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::ItemExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_44_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_88(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::ItemExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_88_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_89(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::LevelDataComponent_BattleScoringData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_89_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_45(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::LevelDataComponent_BattleScoringData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_45_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_90(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::LevelDataComponent_BattleScoringData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_90_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_91(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MainMissionExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_91_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_46(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MainMissionExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_46_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_92(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MainMissionExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_92_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_93(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MazeBuffExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_93_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_47(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MazeBuffExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_47_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_94(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MazeBuffExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_94_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_95(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MessageItemExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_95_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_48(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MessageItemExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_48_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_96(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MessageItemExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_96_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_97(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MonsterExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_97_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_49(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_49_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_98(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_98_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_99(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_99_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_50(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_50_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_100(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_100_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_101(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::PerformanceEExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_101_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_51(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PerformanceEExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_51_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_102(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PerformanceEExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_102_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_103(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::PlaneEventExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_103_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_52(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PlaneEventExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_52_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_104(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PlaneEventExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_104_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_105(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::PropExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_105_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_53(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PropExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_53_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_106(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PropExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_106_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_107(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::RaidConfigExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_107_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_54(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RaidConfigExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_54_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_108(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RaidConfigExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_108_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_109(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::RewardExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_109_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_55(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RewardExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_55_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_110(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RewardExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_110_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_111(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_111_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_56(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_56_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_112(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_112_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_113(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_113_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_57(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_57_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_114(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_114_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_115(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_115_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_58(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_58_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_116(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_116_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_117(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::StageExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_117_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_59(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StageExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_59_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_118(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StageExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_118_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_119(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::StatusExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_119_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_60(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StatusExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_60_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_120(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StatusExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_120_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_121(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::SubMissionExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_121_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_61(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SubMissionExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_61_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_122(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SubMissionExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_122_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_123(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_123_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_62(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_62_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_124(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_124_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_125(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::TextmapExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_125_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_63(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TextmapExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_63_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_126(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TextmapExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_126_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_127(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_127_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_64(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_64_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_128(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_128_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_129(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::MVector2& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_129_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_65(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_65_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_130(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector2& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_130_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_131(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::MVector3& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_131_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_66(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_66_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_132(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector3& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_132_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_133(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::SuperScrollView::RowColumnPair& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_133_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_67(::System::IntPtr a1, ::System::Int32 a2, ::SuperScrollView::RowColumnPair a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_67_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_134(::System::IntPtr a1, ::System::Int32 a2, ::SuperScrollView::RowColumnPair& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_134_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_135(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::BoundingSphere& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_135_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_68(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::BoundingSphere a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_68_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_136(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::BoundingSphere& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_136_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_137(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Bounds& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_137_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_69(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Bounds a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_69_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_138(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Bounds& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_138_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_139(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_139_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_70(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_70_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_140(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Color& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_140_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_141(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_141_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_71(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_71_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_142(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_142_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_143(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Ray2D& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_143_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_72(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray2D a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_72_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_144(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray2D& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_144_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_145(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Ray& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Ray&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_145_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_73(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_73_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_146(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_146_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_147(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Rect& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_147_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_74(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Rect a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_74_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_148(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Rect& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_148_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_149(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_149_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_75(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_75_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_150(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_150_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_151(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::SmoothMaskMaterial_Params& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_151_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_76(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::SmoothMaskMaterial_Params a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_76_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_152(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::SmoothMaskMaterial_Params& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_152_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_153(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::TextPosition& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_153_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_77(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TextPosition a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_77_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_154(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TextPosition& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_154_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_155(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::TouchFilter_FilterParam& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_155_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_78(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TouchFilter_FilterParam a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_78_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_156(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TouchFilter_FilterParam& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_156_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_157(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_157_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_79(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_79_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_158(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_158_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_159(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_159_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_80(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_80_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_160(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_160_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_161(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Vector4& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_161_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_81(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_81_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_162(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_162_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_82(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_82_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_163(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_163_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_83(::System::IntPtr a1, ::System::Int32 a2, ::System::SByte a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_83_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_164(::System::IntPtr a1, ::System::Int32 a2, ::System::SByte& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::SByte&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_164_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_84(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_84_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_165(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_165_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_85(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_85_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_166(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_166_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_86(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_86_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_167(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_167_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_87(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_87_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_168(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_168_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_88(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_88_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_169(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_169_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_89(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_89_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_170(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt64& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt64&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_170_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_90(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_90_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_171(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_171_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_91(::System::IntPtr a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_91_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_172(::System::IntPtr a1, ::System::Int32 a2, ::System::Double& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_172_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_92(::System::IntPtr a1, ::System::Int32 a2, ::System::Decimal a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_92_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_173(::System::IntPtr a1, ::System::Int32 a2, ::System::Decimal& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_173_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsStruct(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_ISSTRUCT_OFFSET))(a1);
		}
	};
}
