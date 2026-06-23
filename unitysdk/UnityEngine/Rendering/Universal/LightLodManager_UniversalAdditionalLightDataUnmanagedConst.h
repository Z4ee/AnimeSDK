#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodManager_LightOptimizeConfigsUnmanaged.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDCONST_GET_ISRTXONLYLIGHT_OFFSET UNITYSDK_OFFSET(0x8C4B10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_UniversalAdditionalLightDataUnmanagedConst_TypeDefinitionIndex = 27370;

	struct alignas(4) LightLodManager_UniversalAdditionalLightDataUnmanagedConst
	{
		::UnityEngine::Rendering::Universal::LightLodManager_LightOptimizeConfigsUnmanaged qualityConfig; // 0x10
		::System::Int32 qualityMask; // 0x30
		::System::Int32 isRtxOnlyLightInt; // 0x34
		::System::Int32 gameObjectLayer; // 0x38
		::System::Single lightRange; // 0x3C
		::System::Single lightLodBiasMultiply; // 0x40
		::System::Int32 oldShadowType; // 0x44
		::System::Single oldSpecularAttenuation; // 0x48
		::System::Single oldDiffuseAttenuation; // 0x4C

		::System::Boolean get_isRtxOnlyLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDCONST_GET_ISRTXONLYLIGHT_OFFSET))(this);
		}
	};
}
