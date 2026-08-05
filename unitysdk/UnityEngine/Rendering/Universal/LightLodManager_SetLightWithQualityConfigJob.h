#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodManager_SetLightWithQualityConfigOutput.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodManager_UniversalAdditionalLightDataUnmanagedConst.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodManager_UniversalAdditionalLightDataUnmanagedMutable.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_SETLIGHTWITHQUALITYCONFIGJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA39770)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_SetLightWithQualityConfigJob_TypeDefinitionIndex = 27546;

	struct alignas(8) LightLodManager_SetLightWithQualityConfigJob
	{
		// static const ::System::Single SPECULAR_FADE_START_DISTANCE; // 0x0
		// static const ::System::Single SPECULAR_FADE_END_DISTANCE; // 0x0
		// static const ::System::Single SHADOW_FADE_START_DISTANCE; // 0x0
		// static const ::System::Single SHADOW_FADE_END_DISTANCE; // 0x0
		// static const ::System::Single DIFFUSE_FADE_START_DISTANCE; // 0x0
		// static const ::System::Single DIFFUSE_FADE_END_DISTANCE; // 0x0
		::UnityEngine::Vector3 triggerPosition; // 0x10
		::System::Int32 lightLodQuality; // 0x1C
		::System::Single maxRangeMultiply; // 0x20
		::System::Single globalLightLodBias; // 0x24
		::UnityEngine::LayerMask triggerLayerMask; // 0x28
		::System::Boolean triggerActive; // 0x2C
		::System::Boolean isApplicationPlaying; // 0x2D
		::System::Boolean isRtxActive; // 0x2E
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodManager_UniversalAdditionalLightDataUnmanagedConst> lightDataConstList; // 0x30
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodManager_UniversalAdditionalLightDataUnmanagedMutable> lightDataMutableList; // 0x40
		::Unity::Collections::NativeList_1<::UnityEngine::Vector3> lightPositions; // 0x50
		::System::Int32 startIndex; // 0x60
		::System::Int32 count; // 0x64
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightLodManager_SetLightWithQualityConfigOutput> outputs; // 0x68

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_SETLIGHTWITHQUALITYCONFIGJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
