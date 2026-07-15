#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/BakedSettings.h"
#include "unitysdk/UnityEngine/Rendering/CRPShadowFilterMode.h"
#include "unitysdk/UnityEngine/Rendering/PcssSettings.h"
#include "unitysdk/UnityEngine/Rendering/SelfShadowSettings.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowRuntimeSettings_TypeDefinitionIndex = 4875;

	struct alignas(8) ShadowRuntimeSettings
	{
		::System::Boolean m_isStoryMode; // 0x10
		::System::Boolean m_enableShadowCache; // 0x11
		::System::Boolean m_debugForceDisableShadowCache; // 0x12
		::System::Int32 m_storyCharacterCount; // 0x14
		::UnityEngine::GameObject* m_localPlayerGO; // 0x18
		::System::Boolean m_enableCSMBlend; // 0x20
		::System::Boolean m_mainShadowEnable; // 0x21
		::System::Boolean m_csmTextureArray; // 0x22
		::System::Int32 m_csmCascadeCount; // 0x24
		::System::Int32 m_csmShadowResolution; // 0x28
		::UnityEngine::Vector3 m_csmSplitPrecent; // 0x2C
		::System::Single m_shadowNearOffset; // 0x38
		::UnityEngine::Rendering::CRPShadowFilterMode m_shadowFilterMode; // 0x3C
		::System::Single m_csmBlendRange; // 0x40
		::System::Single m_shadowDistance; // 0x44
		::System::Single m_ShadowDepthBias; // 0x48
		::System::Single m_ShadowNormalBias; // 0x4C
		::System::Boolean m_enableFOVStable; // 0x50
		::System::Single m_maxFOVDiff; // 0x54
		::System::Boolean m_enableIndoorPOSMFallbackShadow; // 0x58
		::System::Boolean m_enableOutDoorPOSMFallbackShadow; // 0x59
		::System::Boolean m_enableIndoorCharacterShadow; // 0x5A
		::UnityEngine::Rendering::PcssSettings m_pcssSettings; // 0x5C
		::UnityEngine::Rendering::PcssSettings m_pcssSettingsPOSM; // 0xA4
		::System::Int32 m_maxPOSMUpdCount; // 0xEC
		::System::Boolean m_enablePerObjectShadow; // 0xF0
		::System::Boolean m_isUnlimitShadowCount; // 0xF1
		::System::Int32 m_maxPerObjectShadowCount; // 0xF4
		::System::Int32 m_maxLocalPerObjectShadowCount; // 0xF8
		::System::Int32 m_minPOSMCacheCount; // 0xFC
		::System::Int32 m_posmSlotResolution; // 0x100
		::System::Single m_posmShadowRange; // 0x104
		::System::Boolean m_enablePOSMOverlay; // 0x108
		::System::Single m_posmHighQulityRange; // 0x10C
		::System::Single m_posmShadowVolumeExt; // 0x110
		::System::Single m_posmCullingBoundsScale; // 0x114
		::System::Boolean m_shadowmapDepth32; // 0x118
		::System::Boolean m_useReverseZBuffer; // 0x119
		::System::Boolean m_enableCheckDetachable; // 0x11A
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_shadowmapFormat; // 0x11C
		::System::Boolean m_supportsSoftShadows; // 0x120
		::System::Boolean m_forceShadowPointSampling; // 0x121
		::System::Boolean m_supportsBoxFilterForShadows; // 0x122
		::System::Single m_shadowCascadeBlendCullingFactor; // 0x124
		::System::Int32 m_maxShadowOnlyLightCount; // 0x128
		::System::Int32 m_maxAdditionalLightCount; // 0x12C
		::System::Int32 m_additionalShadowResolution; // 0x130
		::System::Int32 m_maxCachedAdditionalLightCount; // 0x134
		::System::Int32 m_maxRealtimeShadowLightCount; // 0x138
		::System::Int32 m_realtimeShadowLightSlotResolution; // 0x13C
		::System::Boolean m_enableLocalLightShadow; // 0x140
		::System::Int32 m_shadowOnlyShadowSlotResolution; // 0x144
		::System::Int32 m_shadowOnlyLightUpdateFreq; // 0x148
		::System::Int32 m_additionalLightUpdateFreq; // 0x14C
		::System::Boolean m_enableLightCollisionCache; // 0x150
		::System::Boolean m_onePassShadowOnlyResolve; // 0x151
		::System::Boolean m_indoorShadowDirty; // 0x152
		::System::Boolean m_CSMDepthValid; // 0x153
		::System::Int32 m_cameraChangedVersion; // 0x154
		::System::Single m_rangeCut; // 0x158
		::System::Single m_lightRangeCut; // 0x15C
		::System::Boolean m_enableShadowVolumeCulling; // 0x160
		::System::Single m_maxHeightDiff; // 0x164
		::System::Single m_minPitchDegree; // 0x168
		::UnityEngine::Vector4 m_splitExtents; // 0x16C
		::UnityEngine::Rendering::BakedSettings m_bakedSettings; // 0x17C
		::System::Boolean m_enableProbeBlend; // 0x18C
		::UnityEngine::Rendering::SelfShadowSettings m_selfShadowSettings; // 0x190
		::System::Boolean m_enableShadow; // 0x19C
		::System::Boolean m_inDoor; // 0x19D
	};
}
