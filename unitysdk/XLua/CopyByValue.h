#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_NormalGroupNPCIndexKey.h"
#include "unitysdk/RPG/Client/ActivityIntroButton_ActivityIntroButtonConfig.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleSealTalkConfig.h"
#include "unitysdk/RPG/Client/AdventureBuffData.h"
#include "unitysdk/RPG/Client/AlleyPackStatistics.h"
#include "unitysdk/RPG/Client/ChessRogueBoardCellEnterData.h"
#include "unitysdk/RPG/Client/Data/EventIndex.h"
#include "unitysdk/RPG/Client/Data/NameID.h"
#include "unitysdk/RPG/Client/FightFestProgress.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/Client/MissionModule_PlayMessage.h"
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
#include "unitysdk/RPG/Client/UILineRenderer_Curve.h"
#include "unitysdk/RPG/Client/UIPolygon_VertexAttribute.h"
#include "unitysdk/RPG/Client/UIQuad_VertexAttribute.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayBossResult.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_ReplaySaveData.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityExtraProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyBig.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AvatarPromotionExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarServantSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/BattleEventExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DialogueGroupExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
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

#define XLUA_COPYBYVALUE_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0xFE954C0)
#define XLUA_COPYBYVALUE_PACK_10_OFFSET UNITYSDK_OFFSET(0xFE801E0)
#define XLUA_COPYBYVALUE_PACK_11_OFFSET UNITYSDK_OFFSET(0xFE807A0)
#define XLUA_COPYBYVALUE_PACK_12_OFFSET UNITYSDK_OFFSET(0xFE80CA0)
#define XLUA_COPYBYVALUE_PACK_13_OFFSET UNITYSDK_OFFSET(0xFE80F40)
#define XLUA_COPYBYVALUE_PACK_14_OFFSET UNITYSDK_OFFSET(0xFE81300)
#define XLUA_COPYBYVALUE_PACK_15_OFFSET UNITYSDK_OFFSET(0xFE815B0)
#define XLUA_COPYBYVALUE_PACK_16_OFFSET UNITYSDK_OFFSET(0xFE81920)
#define XLUA_COPYBYVALUE_PACK_17_OFFSET UNITYSDK_OFFSET(0xFE81CE0)
#define XLUA_COPYBYVALUE_PACK_18_OFFSET UNITYSDK_OFFSET(0xFE82050)
#define XLUA_COPYBYVALUE_PACK_19_OFFSET UNITYSDK_OFFSET(0xFE82410)
#define XLUA_COPYBYVALUE_PACK_1_OFFSET UNITYSDK_OFFSET(0xFE7C960)
#define XLUA_COPYBYVALUE_PACK_20_OFFSET UNITYSDK_OFFSET(0xFE82780)
#define XLUA_COPYBYVALUE_PACK_21_OFFSET UNITYSDK_OFFSET(0xFE82B40)
#define XLUA_COPYBYVALUE_PACK_22_OFFSET UNITYSDK_OFFSET(0xFE82DF0)
#define XLUA_COPYBYVALUE_PACK_23_OFFSET UNITYSDK_OFFSET(0xFE830A0)
#define XLUA_COPYBYVALUE_PACK_24_OFFSET UNITYSDK_OFFSET(0xFE83410)
#define XLUA_COPYBYVALUE_PACK_25_OFFSET UNITYSDK_OFFSET(0xFE837D0)
#define XLUA_COPYBYVALUE_PACK_26_OFFSET UNITYSDK_OFFSET(0xFE83C10)
#define XLUA_COPYBYVALUE_PACK_27_OFFSET UNITYSDK_OFFSET(0xFE83F40)
#define XLUA_COPYBYVALUE_PACK_28_OFFSET UNITYSDK_OFFSET(0xFE841F0)
#define XLUA_COPYBYVALUE_PACK_29_OFFSET UNITYSDK_OFFSET(0xFE84560)
#define XLUA_COPYBYVALUE_PACK_2_OFFSET UNITYSDK_OFFSET(0xFE7CEF0)
#define XLUA_COPYBYVALUE_PACK_30_OFFSET UNITYSDK_OFFSET(0xFE849E0)
#define XLUA_COPYBYVALUE_PACK_31_OFFSET UNITYSDK_OFFSET(0xFE84E60)
#define XLUA_COPYBYVALUE_PACK_32_OFFSET UNITYSDK_OFFSET(0xFE852C0)
#define XLUA_COPYBYVALUE_PACK_33_OFFSET UNITYSDK_OFFSET(0xFE85680)
#define XLUA_COPYBYVALUE_PACK_34_OFFSET UNITYSDK_OFFSET(0xFE85930)
#define XLUA_COPYBYVALUE_PACK_35_OFFSET UNITYSDK_OFFSET(0xFE85BE0)
#define XLUA_COPYBYVALUE_PACK_36_OFFSET UNITYSDK_OFFSET(0xFE85E90)
#define XLUA_COPYBYVALUE_PACK_37_OFFSET UNITYSDK_OFFSET(0xFE86140)
#define XLUA_COPYBYVALUE_PACK_38_OFFSET UNITYSDK_OFFSET(0xFE866C0)
#define XLUA_COPYBYVALUE_PACK_39_OFFSET UNITYSDK_OFFSET(0xFE86A10)
#define XLUA_COPYBYVALUE_PACK_3_OFFSET UNITYSDK_OFFSET(0xFE7D4B0)
#define XLUA_COPYBYVALUE_PACK_40_OFFSET UNITYSDK_OFFSET(0xFE86ED0)
#define XLUA_COPYBYVALUE_PACK_41_OFFSET UNITYSDK_OFFSET(0xFE87430)
#define XLUA_COPYBYVALUE_PACK_42_OFFSET UNITYSDK_OFFSET(0xFE87FE0)
#define XLUA_COPYBYVALUE_PACK_43_OFFSET UNITYSDK_OFFSET(0xFE88960)
#define XLUA_COPYBYVALUE_PACK_44_OFFSET UNITYSDK_OFFSET(0xFE88D20)
#define XLUA_COPYBYVALUE_PACK_45_OFFSET UNITYSDK_OFFSET(0xFE89090)
#define XLUA_COPYBYVALUE_PACK_46_OFFSET UNITYSDK_OFFSET(0xFE890A0)
#define XLUA_COPYBYVALUE_PACK_47_OFFSET UNITYSDK_OFFSET(0xFE89640)
#define XLUA_COPYBYVALUE_PACK_48_OFFSET UNITYSDK_OFFSET(0xFE8A150)
#define XLUA_COPYBYVALUE_PACK_49_OFFSET UNITYSDK_OFFSET(0xFE8A740)
#define XLUA_COPYBYVALUE_PACK_4_OFFSET UNITYSDK_OFFSET(0xFE7DA70)
#define XLUA_COPYBYVALUE_PACK_50_OFFSET UNITYSDK_OFFSET(0xFE8A9F0)
#define XLUA_COPYBYVALUE_PACK_51_OFFSET UNITYSDK_OFFSET(0xFE8AE30)
#define XLUA_COPYBYVALUE_PACK_52_OFFSET UNITYSDK_OFFSET(0xFE8B650)
#define XLUA_COPYBYVALUE_PACK_53_OFFSET UNITYSDK_OFFSET(0xFE8C040)
#define XLUA_COPYBYVALUE_PACK_54_OFFSET UNITYSDK_OFFSET(0xFE8C5A0)
#define XLUA_COPYBYVALUE_PACK_55_OFFSET UNITYSDK_OFFSET(0xFE8CBA0)
#define XLUA_COPYBYVALUE_PACK_56_OFFSET UNITYSDK_OFFSET(0xFE8CE50)
#define XLUA_COPYBYVALUE_PACK_57_OFFSET UNITYSDK_OFFSET(0xFE8D1C0)
#define XLUA_COPYBYVALUE_PACK_58_OFFSET UNITYSDK_OFFSET(0xFE8D620)
#define XLUA_COPYBYVALUE_PACK_59_OFFSET UNITYSDK_OFFSET(0xFE8DC20)
#define XLUA_COPYBYVALUE_PACK_5_OFFSET UNITYSDK_OFFSET(0xFE7DF70)
#define XLUA_COPYBYVALUE_PACK_60_OFFSET UNITYSDK_OFFSET(0xFE8E440)
#define XLUA_COPYBYVALUE_PACK_61_OFFSET UNITYSDK_OFFSET(0xFE8EC70)
#define XLUA_COPYBYVALUE_PACK_62_OFFSET UNITYSDK_OFFSET(0xFE8EC80)
#define XLUA_COPYBYVALUE_PACK_63_OFFSET UNITYSDK_OFFSET(0xFE8F580)
#define XLUA_COPYBYVALUE_PACK_64_OFFSET UNITYSDK_OFFSET(0xFE8F7E0)
#define XLUA_COPYBYVALUE_PACK_65_OFFSET UNITYSDK_OFFSET(0xFE8FEB0)
#define XLUA_COPYBYVALUE_PACK_66_OFFSET UNITYSDK_OFFSET(0xFE90810)
#define XLUA_COPYBYVALUE_PACK_67_OFFSET UNITYSDK_OFFSET(0xFE90FC0)
#define XLUA_COPYBYVALUE_PACK_68_OFFSET UNITYSDK_OFFSET(0xFE91510)
#define XLUA_COPYBYVALUE_PACK_69_OFFSET UNITYSDK_OFFSET(0xFE91B80)
#define XLUA_COPYBYVALUE_PACK_6_OFFSET UNITYSDK_OFFSET(0xFE7E5C0)
#define XLUA_COPYBYVALUE_PACK_70_OFFSET UNITYSDK_OFFSET(0xFE92150)
#define XLUA_COPYBYVALUE_PACK_71_OFFSET UNITYSDK_OFFSET(0xFE92510)
#define XLUA_COPYBYVALUE_PACK_72_OFFSET UNITYSDK_OFFSET(0xFE928C0)
#define XLUA_COPYBYVALUE_PACK_73_OFFSET UNITYSDK_OFFSET(0xFE92C80)
#define XLUA_COPYBYVALUE_PACK_74_OFFSET UNITYSDK_OFFSET(0xFE930E0)
#define XLUA_COPYBYVALUE_PACK_75_OFFSET UNITYSDK_OFFSET(0xFE93680)
#define XLUA_COPYBYVALUE_PACK_76_OFFSET UNITYSDK_OFFSET(0xFE93C00)
#define XLUA_COPYBYVALUE_PACK_77_OFFSET UNITYSDK_OFFSET(0xFE94410)
#define XLUA_COPYBYVALUE_PACK_78_OFFSET UNITYSDK_OFFSET(0xFE947B0)
#define XLUA_COPYBYVALUE_PACK_79_OFFSET UNITYSDK_OFFSET(0xFE94CC0)
#define XLUA_COPYBYVALUE_PACK_7_OFFSET UNITYSDK_OFFSET(0xFE7EBC0)
#define XLUA_COPYBYVALUE_PACK_80_OFFSET UNITYSDK_OFFSET(0xFE7F870)
#define XLUA_COPYBYVALUE_PACK_81_OFFSET UNITYSDK_OFFSET(0xFE94E30)
#define XLUA_COPYBYVALUE_PACK_82_OFFSET UNITYSDK_OFFSET(0xFE94F60)
#define XLUA_COPYBYVALUE_PACK_83_OFFSET UNITYSDK_OFFSET(0xFE95080)
#define XLUA_COPYBYVALUE_PACK_84_OFFSET UNITYSDK_OFFSET(0xFE7F7E0)
#define XLUA_COPYBYVALUE_PACK_85_OFFSET UNITYSDK_OFFSET(0xFE802F0)
#define XLUA_COPYBYVALUE_PACK_86_OFFSET UNITYSDK_OFFSET(0xFE90A30)
#define XLUA_COPYBYVALUE_PACK_87_OFFSET UNITYSDK_OFFSET(0xFE808C0)
#define XLUA_COPYBYVALUE_PACK_88_OFFSET UNITYSDK_OFFSET(0xFE8B970)
#define XLUA_COPYBYVALUE_PACK_89_OFFSET UNITYSDK_OFFSET(0xFE951C0)
#define XLUA_COPYBYVALUE_PACK_8_OFFSET UNITYSDK_OFFSET(0xFE7F430)
#define XLUA_COPYBYVALUE_PACK_90_OFFSET UNITYSDK_OFFSET(0xFE952F0)
#define XLUA_COPYBYVALUE_PACK_9_OFFSET UNITYSDK_OFFSET(0xFE7F750)
#define XLUA_COPYBYVALUE_PACK_OFFSET UNITYSDK_OFFSET(0xFE7C4F0)
#define XLUA_COPYBYVALUE_UNPACK_100_OFFSET UNITYSDK_OFFSET(0xFE8AA80)
#define XLUA_COPYBYVALUE_UNPACK_101_OFFSET UNITYSDK_OFFSET(0xFE8AB30)
#define XLUA_COPYBYVALUE_UNPACK_102_OFFSET UNITYSDK_OFFSET(0xFE8AFD0)
#define XLUA_COPYBYVALUE_UNPACK_103_OFFSET UNITYSDK_OFFSET(0xFE8B1A0)
#define XLUA_COPYBYVALUE_UNPACK_104_OFFSET UNITYSDK_OFFSET(0xFE8BA10)
#define XLUA_COPYBYVALUE_UNPACK_105_OFFSET UNITYSDK_OFFSET(0xFE8BE10)
#define XLUA_COPYBYVALUE_UNPACK_106_OFFSET UNITYSDK_OFFSET(0xFE8C150)
#define XLUA_COPYBYVALUE_UNPACK_107_OFFSET UNITYSDK_OFFSET(0xFE8C290)
#define XLUA_COPYBYVALUE_UNPACK_108_OFFSET UNITYSDK_OFFSET(0xFE8C7B0)
#define XLUA_COPYBYVALUE_UNPACK_109_OFFSET UNITYSDK_OFFSET(0xFE8CA30)
#define XLUA_COPYBYVALUE_UNPACK_10_OFFSET UNITYSDK_OFFSET(0xFE7DC60)
#define XLUA_COPYBYVALUE_UNPACK_110_OFFSET UNITYSDK_OFFSET(0xFE8CC30)
#define XLUA_COPYBYVALUE_UNPACK_111_OFFSET UNITYSDK_OFFSET(0xFE8CCE0)
#define XLUA_COPYBYVALUE_UNPACK_112_OFFSET UNITYSDK_OFFSET(0xFE8CEE0)
#define XLUA_COPYBYVALUE_UNPACK_113_OFFSET UNITYSDK_OFFSET(0xFE8CF90)
#define XLUA_COPYBYVALUE_UNPACK_114_OFFSET UNITYSDK_OFFSET(0xFE8D2D0)
#define XLUA_COPYBYVALUE_UNPACK_115_OFFSET UNITYSDK_OFFSET(0xFE8D3F0)
#define XLUA_COPYBYVALUE_UNPACK_116_OFFSET UNITYSDK_OFFSET(0xFE8D6B0)
#define XLUA_COPYBYVALUE_UNPACK_117_OFFSET UNITYSDK_OFFSET(0xFE8D760)
#define XLUA_COPYBYVALUE_UNPACK_118_OFFSET UNITYSDK_OFFSET(0xFE8DC30)
#define XLUA_COPYBYVALUE_UNPACK_119_OFFSET UNITYSDK_OFFSET(0xFE8DC50)
#define XLUA_COPYBYVALUE_UNPACK_11_OFFSET UNITYSDK_OFFSET(0xFE7E0E0)
#define XLUA_COPYBYVALUE_UNPACK_120_OFFSET UNITYSDK_OFFSET(0xFE8E450)
#define XLUA_COPYBYVALUE_UNPACK_121_OFFSET UNITYSDK_OFFSET(0xFE8E480)
#define XLUA_COPYBYVALUE_UNPACK_122_OFFSET UNITYSDK_OFFSET(0xFE8EC90)
#define XLUA_COPYBYVALUE_UNPACK_123_OFFSET UNITYSDK_OFFSET(0xFE8ECB0)
#define XLUA_COPYBYVALUE_UNPACK_124_OFFSET UNITYSDK_OFFSET(0xFE8ECC0)
#define XLUA_COPYBYVALUE_UNPACK_125_OFFSET UNITYSDK_OFFSET(0xFE8F590)
#define XLUA_COPYBYVALUE_UNPACK_126_OFFSET UNITYSDK_OFFSET(0xFE8F5B0)
#define XLUA_COPYBYVALUE_UNPACK_127_OFFSET UNITYSDK_OFFSET(0xFE8F8F0)
#define XLUA_COPYBYVALUE_UNPACK_128_OFFSET UNITYSDK_OFFSET(0xFE8FA10)
#define XLUA_COPYBYVALUE_UNPACK_129_OFFSET UNITYSDK_OFFSET(0xFE90150)
#define XLUA_COPYBYVALUE_UNPACK_12_OFFSET UNITYSDK_OFFSET(0xFE7E330)
#define XLUA_COPYBYVALUE_UNPACK_130_OFFSET UNITYSDK_OFFSET(0xFE90440)
#define XLUA_COPYBYVALUE_UNPACK_131_OFFSET UNITYSDK_OFFSET(0xFE90AC0)
#define XLUA_COPYBYVALUE_UNPACK_132_OFFSET UNITYSDK_OFFSET(0xFE90D90)
#define XLUA_COPYBYVALUE_UNPACK_133_OFFSET UNITYSDK_OFFSET(0xFE910D0)
#define XLUA_COPYBYVALUE_UNPACK_134_OFFSET UNITYSDK_OFFSET(0xFE91210)
#define XLUA_COPYBYVALUE_UNPACK_135_OFFSET UNITYSDK_OFFSET(0xFE916B0)
#define XLUA_COPYBYVALUE_UNPACK_136_OFFSET UNITYSDK_OFFSET(0xFE91880)
#define XLUA_COPYBYVALUE_UNPACK_137_OFFSET UNITYSDK_OFFSET(0xFE91D20)
#define XLUA_COPYBYVALUE_UNPACK_138_OFFSET UNITYSDK_OFFSET(0xFE91EE0)
#define XLUA_COPYBYVALUE_UNPACK_139_OFFSET UNITYSDK_OFFSET(0xFE92280)
#define XLUA_COPYBYVALUE_UNPACK_13_OFFSET UNITYSDK_OFFSET(0xFE7E730)
#define XLUA_COPYBYVALUE_UNPACK_140_OFFSET UNITYSDK_OFFSET(0xFE923A0)
#define XLUA_COPYBYVALUE_UNPACK_141_OFFSET UNITYSDK_OFFSET(0xFE925A0)
#define XLUA_COPYBYVALUE_UNPACK_142_OFFSET UNITYSDK_OFFSET(0xFE92650)
#define XLUA_COPYBYVALUE_UNPACK_143_OFFSET UNITYSDK_OFFSET(0xFE929D0)
#define XLUA_COPYBYVALUE_UNPACK_144_OFFSET UNITYSDK_OFFSET(0xFE92B10)
#define XLUA_COPYBYVALUE_UNPACK_145_OFFSET UNITYSDK_OFFSET(0xFE92D10)
#define XLUA_COPYBYVALUE_UNPACK_146_OFFSET UNITYSDK_OFFSET(0xFE92DB0)
#define XLUA_COPYBYVALUE_UNPACK_147_OFFSET UNITYSDK_OFFSET(0xFE93280)
#define XLUA_COPYBYVALUE_UNPACK_148_OFFSET UNITYSDK_OFFSET(0xFE93430)
#define XLUA_COPYBYVALUE_UNPACK_149_OFFSET UNITYSDK_OFFSET(0xFE937A0)
#define XLUA_COPYBYVALUE_UNPACK_14_OFFSET UNITYSDK_OFFSET(0xFE7E8F0)
#define XLUA_COPYBYVALUE_UNPACK_150_OFFSET UNITYSDK_OFFSET(0xFE938C0)
#define XLUA_COPYBYVALUE_UNPACK_151_OFFSET UNITYSDK_OFFSET(0xFE93E60)
#define XLUA_COPYBYVALUE_UNPACK_152_OFFSET UNITYSDK_OFFSET(0xFE941A0)
#define XLUA_COPYBYVALUE_UNPACK_153_OFFSET UNITYSDK_OFFSET(0xFE944B0)
#define XLUA_COPYBYVALUE_UNPACK_154_OFFSET UNITYSDK_OFFSET(0xFE94580)
#define XLUA_COPYBYVALUE_UNPACK_155_OFFSET UNITYSDK_OFFSET(0xFE94910)
#define XLUA_COPYBYVALUE_UNPACK_156_OFFSET UNITYSDK_OFFSET(0xFE94A90)
#define XLUA_COPYBYVALUE_UNPACK_157_OFFSET UNITYSDK_OFFSET(0xFE94D60)
#define XLUA_COPYBYVALUE_UNPACK_158_OFFSET UNITYSDK_OFFSET(0xFE7FD70)
#define XLUA_COPYBYVALUE_UNPACK_159_OFFSET UNITYSDK_OFFSET(0xFE94EC0)
#define XLUA_COPYBYVALUE_UNPACK_15_OFFSET UNITYSDK_OFFSET(0xFE7ED00)
#define XLUA_COPYBYVALUE_UNPACK_160_OFFSET UNITYSDK_OFFSET(0xFE94FF0)
#define XLUA_COPYBYVALUE_UNPACK_161_OFFSET UNITYSDK_OFFSET(0xFE95110)
#define XLUA_COPYBYVALUE_UNPACK_162_OFFSET UNITYSDK_OFFSET(0xFE7FCE0)
#define XLUA_COPYBYVALUE_UNPACK_163_OFFSET UNITYSDK_OFFSET(0xFE804C0)
#define XLUA_COPYBYVALUE_UNPACK_164_OFFSET UNITYSDK_OFFSET(0xFE90D00)
#define XLUA_COPYBYVALUE_UNPACK_165_OFFSET UNITYSDK_OFFSET(0xFE80A80)
#define XLUA_COPYBYVALUE_UNPACK_166_OFFSET UNITYSDK_OFFSET(0xFE8BD80)
#define XLUA_COPYBYVALUE_UNPACK_167_OFFSET UNITYSDK_OFFSET(0xFE95260)
#define XLUA_COPYBYVALUE_UNPACK_168_OFFSET UNITYSDK_OFFSET(0xFE95380)
#define XLUA_COPYBYVALUE_UNPACK_16_OFFSET UNITYSDK_OFFSET(0xFE7EEE0)
#define XLUA_COPYBYVALUE_UNPACK_17_OFFSET UNITYSDK_OFFSET(0xFE7F900)
#define XLUA_COPYBYVALUE_UNPACK_18_OFFSET UNITYSDK_OFFSET(0xFE7FE00)
#define XLUA_COPYBYVALUE_UNPACK_19_OFFSET UNITYSDK_OFFSET(0xFE7FC40)
#define XLUA_COPYBYVALUE_UNPACK_1_OFFSET UNITYSDK_OFFSET(0xFE7C590)
#define XLUA_COPYBYVALUE_UNPACK_20_OFFSET UNITYSDK_OFFSET(0xFE7FF70)
#define XLUA_COPYBYVALUE_UNPACK_21_OFFSET UNITYSDK_OFFSET(0xFE80380)
#define XLUA_COPYBYVALUE_UNPACK_22_OFFSET UNITYSDK_OFFSET(0xFE80570)
#define XLUA_COPYBYVALUE_UNPACK_23_OFFSET UNITYSDK_OFFSET(0xFE80950)
#define XLUA_COPYBYVALUE_UNPACK_24_OFFSET UNITYSDK_OFFSET(0xFE80B30)
#define XLUA_COPYBYVALUE_UNPACK_25_OFFSET UNITYSDK_OFFSET(0xFE80D30)
#define XLUA_COPYBYVALUE_UNPACK_26_OFFSET UNITYSDK_OFFSET(0xFE80DE0)
#define XLUA_COPYBYVALUE_UNPACK_27_OFFSET UNITYSDK_OFFSET(0xFE81060)
#define XLUA_COPYBYVALUE_UNPACK_28_OFFSET UNITYSDK_OFFSET(0xFE81190)
#define XLUA_COPYBYVALUE_UNPACK_29_OFFSET UNITYSDK_OFFSET(0xFE81390)
#define XLUA_COPYBYVALUE_UNPACK_2_OFFSET UNITYSDK_OFFSET(0xFE7C660)
#define XLUA_COPYBYVALUE_UNPACK_30_OFFSET UNITYSDK_OFFSET(0xFE81440)
#define XLUA_COPYBYVALUE_UNPACK_31_OFFSET UNITYSDK_OFFSET(0xFE81640)
#define XLUA_COPYBYVALUE_UNPACK_32_OFFSET UNITYSDK_OFFSET(0xFE816F0)
#define XLUA_COPYBYVALUE_UNPACK_33_OFFSET UNITYSDK_OFFSET(0xFE81A30)
#define XLUA_COPYBYVALUE_UNPACK_34_OFFSET UNITYSDK_OFFSET(0xFE81B70)
#define XLUA_COPYBYVALUE_UNPACK_35_OFFSET UNITYSDK_OFFSET(0xFE81D70)
#define XLUA_COPYBYVALUE_UNPACK_36_OFFSET UNITYSDK_OFFSET(0xFE81E20)
#define XLUA_COPYBYVALUE_UNPACK_37_OFFSET UNITYSDK_OFFSET(0xFE82160)
#define XLUA_COPYBYVALUE_UNPACK_38_OFFSET UNITYSDK_OFFSET(0xFE822A0)
#define XLUA_COPYBYVALUE_UNPACK_39_OFFSET UNITYSDK_OFFSET(0xFE824A0)
#define XLUA_COPYBYVALUE_UNPACK_3_OFFSET UNITYSDK_OFFSET(0xFE7CA30)
#define XLUA_COPYBYVALUE_UNPACK_40_OFFSET UNITYSDK_OFFSET(0xFE82550)
#define XLUA_COPYBYVALUE_UNPACK_41_OFFSET UNITYSDK_OFFSET(0xFE82890)
#define XLUA_COPYBYVALUE_UNPACK_42_OFFSET UNITYSDK_OFFSET(0xFE829D0)
#define XLUA_COPYBYVALUE_UNPACK_43_OFFSET UNITYSDK_OFFSET(0xFE82BD0)
#define XLUA_COPYBYVALUE_UNPACK_44_OFFSET UNITYSDK_OFFSET(0xFE82C80)
#define XLUA_COPYBYVALUE_UNPACK_45_OFFSET UNITYSDK_OFFSET(0xFE82E80)
#define XLUA_COPYBYVALUE_UNPACK_46_OFFSET UNITYSDK_OFFSET(0xFE82F30)
#define XLUA_COPYBYVALUE_UNPACK_47_OFFSET UNITYSDK_OFFSET(0xFE83130)
#define XLUA_COPYBYVALUE_UNPACK_48_OFFSET UNITYSDK_OFFSET(0xFE831E0)
#define XLUA_COPYBYVALUE_UNPACK_49_OFFSET UNITYSDK_OFFSET(0xFE83520)
#define XLUA_COPYBYVALUE_UNPACK_4_OFFSET UNITYSDK_OFFSET(0xFE7CB20)
#define XLUA_COPYBYVALUE_UNPACK_50_OFFSET UNITYSDK_OFFSET(0xFE83660)
#define XLUA_COPYBYVALUE_UNPACK_51_OFFSET UNITYSDK_OFFSET(0xFE83860)
#define XLUA_COPYBYVALUE_UNPACK_52_OFFSET UNITYSDK_OFFSET(0xFE83910)
#define XLUA_COPYBYVALUE_UNPACK_53_OFFSET UNITYSDK_OFFSET(0xFE83CE0)
#define XLUA_COPYBYVALUE_UNPACK_54_OFFSET UNITYSDK_OFFSET(0xFE83DD0)
#define XLUA_COPYBYVALUE_UNPACK_55_OFFSET UNITYSDK_OFFSET(0xFE83FD0)
#define XLUA_COPYBYVALUE_UNPACK_56_OFFSET UNITYSDK_OFFSET(0xFE84080)
#define XLUA_COPYBYVALUE_UNPACK_57_OFFSET UNITYSDK_OFFSET(0xFE84280)
#define XLUA_COPYBYVALUE_UNPACK_58_OFFSET UNITYSDK_OFFSET(0xFE84330)
#define XLUA_COPYBYVALUE_UNPACK_59_OFFSET UNITYSDK_OFFSET(0xFE84670)
#define XLUA_COPYBYVALUE_UNPACK_5_OFFSET UNITYSDK_OFFSET(0xFE7CFE0)
#define XLUA_COPYBYVALUE_UNPACK_60_OFFSET UNITYSDK_OFFSET(0xFE847B0)
#define XLUA_COPYBYVALUE_UNPACK_61_OFFSET UNITYSDK_OFFSET(0xFE84AF0)
#define XLUA_COPYBYVALUE_UNPACK_62_OFFSET UNITYSDK_OFFSET(0xFE84C30)
#define XLUA_COPYBYVALUE_UNPACK_63_OFFSET UNITYSDK_OFFSET(0xFE84F70)
#define XLUA_COPYBYVALUE_UNPACK_64_OFFSET UNITYSDK_OFFSET(0xFE85090)
#define XLUA_COPYBYVALUE_UNPACK_65_OFFSET UNITYSDK_OFFSET(0xFE853D0)
#define XLUA_COPYBYVALUE_UNPACK_66_OFFSET UNITYSDK_OFFSET(0xFE85510)
#define XLUA_COPYBYVALUE_UNPACK_67_OFFSET UNITYSDK_OFFSET(0xFE85710)
#define XLUA_COPYBYVALUE_UNPACK_68_OFFSET UNITYSDK_OFFSET(0xFE857C0)
#define XLUA_COPYBYVALUE_UNPACK_69_OFFSET UNITYSDK_OFFSET(0xFE859C0)
#define XLUA_COPYBYVALUE_UNPACK_6_OFFSET UNITYSDK_OFFSET(0xFE7D0E0)
#define XLUA_COPYBYVALUE_UNPACK_70_OFFSET UNITYSDK_OFFSET(0xFE85A70)
#define XLUA_COPYBYVALUE_UNPACK_71_OFFSET UNITYSDK_OFFSET(0xFE85C70)
#define XLUA_COPYBYVALUE_UNPACK_72_OFFSET UNITYSDK_OFFSET(0xFE85D20)
#define XLUA_COPYBYVALUE_UNPACK_73_OFFSET UNITYSDK_OFFSET(0xFE85F20)
#define XLUA_COPYBYVALUE_UNPACK_74_OFFSET UNITYSDK_OFFSET(0xFE85FD0)
#define XLUA_COPYBYVALUE_UNPACK_75_OFFSET UNITYSDK_OFFSET(0xFE861D0)
#define XLUA_COPYBYVALUE_UNPACK_76_OFFSET UNITYSDK_OFFSET(0xFE86280)
#define XLUA_COPYBYVALUE_UNPACK_77_OFFSET UNITYSDK_OFFSET(0xFE867B0)
#define XLUA_COPYBYVALUE_UNPACK_78_OFFSET UNITYSDK_OFFSET(0xFE868B0)
#define XLUA_COPYBYVALUE_UNPACK_79_OFFSET UNITYSDK_OFFSET(0xFE86B30)
#define XLUA_COPYBYVALUE_UNPACK_7_OFFSET UNITYSDK_OFFSET(0xFE7D5A0)
#define XLUA_COPYBYVALUE_UNPACK_80_OFFSET UNITYSDK_OFFSET(0xFE86C60)
#define XLUA_COPYBYVALUE_UNPACK_81_OFFSET UNITYSDK_OFFSET(0xFE86FE0)
#define XLUA_COPYBYVALUE_UNPACK_82_OFFSET UNITYSDK_OFFSET(0xFE87120)
#define XLUA_COPYBYVALUE_UNPACK_83_OFFSET UNITYSDK_OFFSET(0xFE87640)
#define XLUA_COPYBYVALUE_UNPACK_84_OFFSET UNITYSDK_OFFSET(0xFE878C0)
#define XLUA_COPYBYVALUE_UNPACK_85_OFFSET UNITYSDK_OFFSET(0xFE88330)
#define XLUA_COPYBYVALUE_UNPACK_86_OFFSET UNITYSDK_OFFSET(0xFE886F0)
#define XLUA_COPYBYVALUE_UNPACK_87_OFFSET UNITYSDK_OFFSET(0xFE88A70)
#define XLUA_COPYBYVALUE_UNPACK_88_OFFSET UNITYSDK_OFFSET(0xFE88BB0)
#define XLUA_COPYBYVALUE_UNPACK_89_OFFSET UNITYSDK_OFFSET(0xFE88DB0)
#define XLUA_COPYBYVALUE_UNPACK_8_OFFSET UNITYSDK_OFFSET(0xFE7D6A0)
#define XLUA_COPYBYVALUE_UNPACK_90_OFFSET UNITYSDK_OFFSET(0xFE88E60)
#define XLUA_COPYBYVALUE_UNPACK_91_OFFSET UNITYSDK_OFFSET(0xFE890B0)
#define XLUA_COPYBYVALUE_UNPACK_92_OFFSET UNITYSDK_OFFSET(0xFE890C0)
#define XLUA_COPYBYVALUE_UNPACK_93_OFFSET UNITYSDK_OFFSET(0xFE890D0)
#define XLUA_COPYBYVALUE_UNPACK_94_OFFSET UNITYSDK_OFFSET(0xFE89990)
#define XLUA_COPYBYVALUE_UNPACK_95_OFFSET UNITYSDK_OFFSET(0xFE89D80)
#define XLUA_COPYBYVALUE_UNPACK_96_OFFSET UNITYSDK_OFFSET(0xFE8A370)
#define XLUA_COPYBYVALUE_UNPACK_97_OFFSET UNITYSDK_OFFSET(0xFE8A5D0)
#define XLUA_COPYBYVALUE_UNPACK_98_OFFSET UNITYSDK_OFFSET(0xFE8A7D0)
#define XLUA_COPYBYVALUE_UNPACK_99_OFFSET UNITYSDK_OFFSET(0xFE8A880)
#define XLUA_COPYBYVALUE_UNPACK_9_OFFSET UNITYSDK_OFFSET(0xFE7DB60)
#define XLUA_COPYBYVALUE_UNPACK_OFFSET UNITYSDK_OFFSET(0xFE7C2C0)

namespace XLua
{
	inline static constexpr unsigned int CopyByValue_TypeDefinitionIndex = 40390;

	class CopyByValue : public ::System::Object
	{
	public:
		static ::System::Void UnPack(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Vector2& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Vector2 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_1(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Vector2& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_1_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_2(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Vector3& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_2_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_1(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Vector3 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_1_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_3(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Vector3& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_3_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_4(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_4_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_2(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Vector4 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_2_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_5(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Vector4& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_5_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_6(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Color& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_6_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_3(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Color field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_3_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_7(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Color& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_7_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_8(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Quaternion& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_8_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_4(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Quaternion field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_4_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_9(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Quaternion& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_9_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_10(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Ray& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Ray&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_10_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_5(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Ray field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_5_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_11(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Ray& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_11_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_12(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Bounds& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_12_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_6(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Bounds field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_6_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_13(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Bounds& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_13_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_14(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Ray2D& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_14_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_7(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Ray2D field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_7_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_15(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Ray2D& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_15_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_16(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::Data::EventIndex& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::Data::EventIndex&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_16_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_8(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::Data::EventIndex field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Data::EventIndex))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_8_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_17(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::Data::EventIndex& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Data::EventIndex&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_17_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_18(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::Data::NameID& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::Data::NameID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_18_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_9(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::Data::NameID field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Data::NameID))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_9_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_19(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::Data::NameID& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Data::NameID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_19_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_20(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_20_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_10(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_10_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_21(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_21_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_22(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::TextID& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_22_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_11(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::TextID field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_11_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_23(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::TextID& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_23_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_24(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::RewardExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_24_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_12(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::RewardExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_12_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_25(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::RewardExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_25_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_26(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::TextmapExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_26_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_13(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::TextmapExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_13_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_27(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::TextmapExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_27_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_28(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::ItemExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_28_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_14(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::ItemExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_14_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_29(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::ItemExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_29_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_30(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::MainMissionExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_30_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_15(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MainMissionExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_15_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_31(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MainMissionExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_31_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_32(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_32_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_16(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_16_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_33(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_33_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_34(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::StageExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_34_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_17(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::StageExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_17_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_35(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::StageExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_35_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_36(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_36_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_18(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_18_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_37(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_37_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_38(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::SubMissionExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_38_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_19(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::SubMissionExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_19_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_39(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::SubMissionExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_39_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_40(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_40_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_20(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_20_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_41(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_41_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_42(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::StatusExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_42_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_21(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::StatusExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_21_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_43(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::StatusExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_43_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_44(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::MonsterExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_44_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_22(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MonsterExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_22_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_45(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MonsterExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_45_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_46(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_46_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_23(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_23_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_47(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_47_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_48(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::MazeBuffExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_48_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_24(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MazeBuffExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_24_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_49(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MazeBuffExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_49_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_50(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::PropExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_50_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_25(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::PropExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_25_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_51(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::PropExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_51_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_52(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::MVector3& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_52_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_26(::System::IntPtr buff, ::System::Int32 offset, ::RPG::MVector3 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_26_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_53(::System::IntPtr buff, ::System::Int32 offset, ::RPG::MVector3& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_53_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_54(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_54_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_27(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_27_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_55(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_55_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_56(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_56_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_28(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_28_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_57(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_57_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_58(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::PlaneEventExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_58_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_29(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::PlaneEventExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_29_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_59(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::PlaneEventExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_59_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_60(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_60_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_30(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_30_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_61(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_61_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_62(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_62_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_31(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_31_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_63(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_63_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_64(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::RaidConfigExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_64_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_32(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::RaidConfigExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_32_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_65(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::RaidConfigExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_65_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_66(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_66_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_33(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_33_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_67(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_67_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_68(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::BattleEventExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_68_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_34(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::BattleEventExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_34_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_69(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::BattleEventExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_69_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_70(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::MessageItemExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_70_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_35(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MessageItemExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_35_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_71(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::MessageItemExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_71_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_72(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::PerformanceEExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_72_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_36(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::PerformanceEExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_36_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_73(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::PerformanceEExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_73_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_74(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_74_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_37(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_37_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_75(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_75_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_76(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::Rect& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_76_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_38(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Rect field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_38_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_77(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::Rect& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_77_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_78(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_78_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_39(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_39_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_79(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_79_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_80(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::MultipleDropTimesData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_80_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_40(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::MultipleDropTimesData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_40_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_81(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::MultipleDropTimesData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_81_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_82(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::UIQuad_VertexAttribute& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_82_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_41(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::UIQuad_VertexAttribute field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_41_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_83(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::UIQuad_VertexAttribute& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_83_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_84(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::AlleyPackStatistics& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_84_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_42(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::AlleyPackStatistics field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_42_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_85(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::AlleyPackStatistics& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_85_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_86(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::ChessRogueBoardCellEnterData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_86_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_43(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ChessRogueBoardCellEnterData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_43_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_87(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ChessRogueBoardCellEnterData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_87_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_88(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_88_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_44(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_44_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_89(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_89_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_90(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::LevelDataComponent_BattleScoringData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_90_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_45(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::LevelDataComponent_BattleScoringData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_45_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_91(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::LevelDataComponent_BattleScoringData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_91_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_46(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::FixPoint field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_46_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_92(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::FixPoint& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_92_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_93(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::UILineRenderer_Curve& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_93_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_47(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::UILineRenderer_Curve field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_47_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_94(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::UILineRenderer_Curve& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_94_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_95(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_95_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_48(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_48_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_96(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_96_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_97(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::MissionModule_PlayMessage& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_PlayMessage&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_97_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_49(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::MissionModule_PlayMessage field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_PlayMessage))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_49_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_98(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::MissionModule_PlayMessage& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_PlayMessage&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_98_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_99(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_99_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_50(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_50_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_100(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_100_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_101(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::Conflict_NormalGroupNPCIndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_101_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_51(::System::IntPtr buff, ::System::Int32 offset, ::Conflict_NormalGroupNPCIndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_51_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_102(::System::IntPtr buff, ::System::Int32 offset, ::Conflict_NormalGroupNPCIndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_102_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_103(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_103_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_52(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_52_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_104(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_104_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_105(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_105_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_53(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_53_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_106(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_106_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_107(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::UIPolygon_VertexAttribute& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_107_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_54(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::UIPolygon_VertexAttribute field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_54_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_108(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::UIPolygon_VertexAttribute& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_108_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_109(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::MissionModule_ResultValue& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_109_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_55(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::MissionModule_ResultValue field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_55_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_110(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::MissionModule_ResultValue& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_110_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_111(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::RogueMiracleIdentifier& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_111_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_56(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::RogueMiracleIdentifier field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_56_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_112(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::RogueMiracleIdentifier& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_112_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_113(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::SuperScrollView::RowColumnPair& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_113_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_57(::System::IntPtr buff, ::System::Int32 offset, ::SuperScrollView::RowColumnPair field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_57_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_114(::System::IntPtr buff, ::System::Int32 offset, ::SuperScrollView::RowColumnPair& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_114_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_115(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AbilityDynamicFloatInjection& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_115_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_58(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityDynamicFloatInjection field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_58_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_116(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityDynamicFloatInjection& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_116_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_117(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AbilityExtraProperty& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_117_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_59(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityExtraProperty field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_59_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_118(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityExtraProperty& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_118_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_119(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AbilityLinearProperty& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_119_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_60(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityLinearProperty field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_60_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_120(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityLinearProperty& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_120_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_121(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AbilityLinearPropertyBig& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyBig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_121_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_61(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityLinearPropertyBig field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyBig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_61_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_122(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityLinearPropertyBig& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyBig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_122_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_62(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::BigFixPoint field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BigFixPoint))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_62_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_123(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::BigFixPoint& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BigFixPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_123_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_124(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::AbilityLinearPropertyWithOverride& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_124_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_63(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityLinearPropertyWithOverride field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_63_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_125(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::AbilityLinearPropertyWithOverride& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_125_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_126(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::FightFestProgress& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_126_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_64(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::FightFestProgress field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_64_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_127(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::FightFestProgress& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_127_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_128(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::FindChestMarkConfig& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_128_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_65(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::FindChestMarkConfig field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_65_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_129(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::FindChestMarkConfig& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_129_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_130(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::PlayerStaminaData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_130_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_66(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::PlayerStaminaData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_66_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_131(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::PlayerStaminaData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_131_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_132(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::PlayerWorldLevelUpgradeData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_132_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_67(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::PlayerWorldLevelUpgradeData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_67_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_133(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::PlayerWorldLevelUpgradeData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_133_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_134(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::PlayerLevelUpgradeData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_134_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_68(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::PlayerLevelUpgradeData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_68_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_135(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::PlayerLevelUpgradeData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_135_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_136(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::AdventureBuffData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_136_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_69(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::AdventureBuffData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_69_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_137(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::AdventureBuffData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_137_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_138(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::WolfBroGunPlayBossResult& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_138_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_70(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::WolfBroGunPlayBossResult field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_70_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_139(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::WolfBroGunPlayBossResult& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_139_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_140(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_140_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_71(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_71_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_141(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_141_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_142(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_142_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_72(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_72_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_143(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_143_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_144(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::GameCore::CommonIndexKey& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_144_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_73(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::CommonIndexKey field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_73_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_145(::System::IntPtr buff, ::System::Int32 offset, ::RPG::GameCore::CommonIndexKey& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_145_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_146(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::Client::Promises::TimeData& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_146_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_74(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::Promises::TimeData field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_74_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_147(::System::IntPtr buff, ::System::Int32 offset, ::RPG::Client::Promises::TimeData& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_147_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_148(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::UI::TextPosition& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_148_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_75(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::TextPosition field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_75_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_149(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::TextPosition& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_149_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_150(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::UI::SmoothMaskMaterial_Params& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_150_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_76(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::SmoothMaskMaterial_Params field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_76_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_151(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::SmoothMaskMaterial_Params& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_151_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_152(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::UI::TouchFilter_FilterParam& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_152_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_77(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::TouchFilter_FilterParam field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_77_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_153(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::UI::TouchFilter_FilterParam& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_153_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_154(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::UnityEngine::BoundingSphere& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_154_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_78(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::BoundingSphere field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_78_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_155(::System::IntPtr buff, ::System::Int32 offset, ::UnityEngine::BoundingSphere& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_155_OFFSET))(buff, offset, field);
		}

		static ::System::Void UnPack_156(::XLua::ObjectTranslator* translator, ::System::IntPtr L, ::System::Int32 idx, ::RPG::MVector2& val)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_156_OFFSET))(translator, L, idx, val);
		}

		static ::System::Boolean Pack_79(::System::IntPtr buff, ::System::Int32 offset, ::RPG::MVector2 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_79_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_157(::System::IntPtr buff, ::System::Int32 offset, ::RPG::MVector2& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_157_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_80(::System::IntPtr buff, ::System::Int32 offset, ::System::Byte field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_80_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_158(::System::IntPtr buff, ::System::Int32 offset, ::System::Byte& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_158_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_81(::System::IntPtr buff, ::System::Int32 offset, ::System::SByte field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_81_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_159(::System::IntPtr buff, ::System::Int32 offset, ::System::SByte& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::SByte&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_159_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_82(::System::IntPtr buff, ::System::Int32 offset, ::System::Int16 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_82_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_160(::System::IntPtr buff, ::System::Int32 offset, ::System::Int16& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_160_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_83(::System::IntPtr buff, ::System::Int32 offset, ::System::UInt16 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_83_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_161(::System::IntPtr buff, ::System::Int32 offset, ::System::UInt16& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_161_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_84(::System::IntPtr buff, ::System::Int32 offset, ::System::Int32 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_84_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_162(::System::IntPtr buff, ::System::Int32 offset, ::System::Int32& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_162_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_85(::System::IntPtr buff, ::System::Int32 offset, ::System::UInt32 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_85_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_163(::System::IntPtr buff, ::System::Int32 offset, ::System::UInt32& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_163_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_86(::System::IntPtr buff, ::System::Int32 offset, ::System::Int64 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_86_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_164(::System::IntPtr buff, ::System::Int32 offset, ::System::Int64& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_164_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_87(::System::IntPtr buff, ::System::Int32 offset, ::System::UInt64 field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_87_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_165(::System::IntPtr buff, ::System::Int32 offset, ::System::UInt64& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt64&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_165_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_88(::System::IntPtr buff, ::System::Int32 offset, ::System::Single field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_88_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_166(::System::IntPtr buff, ::System::Int32 offset, ::System::Single& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_166_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_89(::System::IntPtr buff, ::System::Int32 offset, ::System::Double field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_89_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_167(::System::IntPtr buff, ::System::Int32 offset, ::System::Double& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_167_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean Pack_90(::System::IntPtr buff, ::System::Int32 offset, ::System::Decimal field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_90_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean UnPack_168(::System::IntPtr buff, ::System::Int32 offset, ::System::Decimal& field)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_168_OFFSET))(buff, offset, field);
		}

		static ::System::Boolean IsStruct(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_ISSTRUCT_OFFSET))(type);
		}
	};
}
