#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CRPDebugAsset__EngineProflieType_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/DebugOverlaySetting.h"
#include "unitysdk/UnityEngine/Rendering/DeepCameraSettings.h"
#include "unitysdk/UnityEngine/Rendering/PathTracingSettings.h"
#include "unitysdk/UnityEngine/Rendering/RTReflectionSettings.h"
#include "unitysdk/UnityEngine/Rendering/SSPRSettings.h"
#include "unitysdk/UnityEngine/Rendering/SceneViewDrawModeSetting.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPDebugAsset_TypeDefinitionIndex = 4814;

	struct alignas(8) CRPDebugAsset
	{
		::UnityEngine::Rendering::DebugOverlaySetting debugOverlaySetting; // 0x10
		::System::Single localLightLerpDelta; // 0x50
		::System::Int32 UtilityMaterial; // 0x54
		::System::Int32 ConeMesh; // 0x58
		::UnityEngine::Rendering::SceneViewDrawModeSetting drawModeSetting; // 0x5C
		::UnityEngine::Rendering::SSPRSettings ssprSettings; // 0x7C
		::UnityEngine::Rendering::DeepCameraSettings deepSettings; // 0xE8
		::UnityEngine::Rendering::PathTracingSettings pathTracingsettings; // 0xFC
		::UnityEngine::Rendering::RTReflectionSettings rtReflectionSettings; // 0x11C
		::UnityEngine::Rendering::CRPDebugAsset__EngineProflieType_e__FixedBuffer EngineProflieType; // 0x134
		::System::Single objOffsetY; // 0x174
		::System::Boolean EnableClusterLightDebug; // 0x178
		::System::Int32 DebugOCAtlas; // 0x17C
		::System::Int32 FogEmissionBakeCS; // 0x180
		::System::Int32 FogEmissionRayTracingShader; // 0x184
		::System::Int32 GlobalSDFBakingCS; // 0x188
		::System::Int32 GlobalSDFBakingRS; // 0x18C
		::System::Int32 GlobalSDFBakingMaterial; // 0x190
		::System::Int32 GlobalSDFVisualizeMaterial; // 0x194
		::System::Int32 GlobalSDFUpdateDebugCS; // 0x198
		::System::Int32 AdaptiveTessellationDebugMaterial; // 0x19C
		::System::Int32 PathTracingShader; // 0x1A0
		::System::Int32 PathTracingUtilsCS; // 0x1A4
		::System::Single OverrideTime; // 0x1A8
		::System::Int32 csmDebugSlice; // 0x1AC
		::System::Int32 srpDebugDrawIndex; // 0x1B0
		::System::Boolean forceUpdateCacheMatrix; // 0x1B4
		::System::Int32 AOVLocalLightRTIID; // 0x1B8
		::System::Single ClusterVisualizeOpacity; // 0x1BC
		::System::Int32 VoxelDebugPass; // 0x1C0
		::System::UInt64 _Flag; // 0x1C8
	};
}
