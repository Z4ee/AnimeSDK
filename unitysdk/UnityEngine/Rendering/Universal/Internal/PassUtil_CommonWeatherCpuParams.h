#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WeatherConfig;
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuFloatParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuTextureParams; }
namespace UnityEngine::Rendering::Universal::Internal { class CpuVector4Params; }
namespace UnityEngine::Rendering::Universal::Internal { class ICpuParams; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1D30A810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS_PUSH_OFFSET UNITYSDK_OFFSET(0x1D30A990)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS_SETDATA_OFFSET UNITYSDK_OFFSET(0x1D309930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D308300)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PassUtil_CommonWeatherCpuParams_TypeDefinitionIndex = 27109;

	class PassUtil_CommonWeatherCpuParams : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* SceneWaterPoolMap; // 0x10
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* ScreenRainDropAnimTexture; // 0x18
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* GlobalDetailAlbedoMap; // 0x20
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* RainDropFlow; // 0x28
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* CloudDistortMap; // 0x30
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* GlobalSceneEtherWaveTexture; // 0x38
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* WorldTwistAdditionalNoiseMap; // 0x40
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* moonGlow2Mask2; // 0x48
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* GlobalDetailLayerMask; // 0x50
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* SceneHeightMap; // 0x58
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* moonGlow2Params; // 0x60
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* buildingBotLightRamp; // 0x68
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* buildingBotLightParams2; // 0x70
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* LowCloud2DTexture; // 0x78
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* GlobalDetailMREMap; // 0x80
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* moonGlowBaseTex; // 0x88
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* LowCloudCubeTexture; // 0x90
		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* SeaPlanePosition; // 0x98
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* SkyLowEarthTexture; // 0xA0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* ScreenRainDropTexture; // 0xA8
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* buildingBotLightNoise; // 0xB0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* HighCloudTexture; // 0xB8
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* moonGlow2; // 0xC0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* moonGlow2Mask; // 0xC8
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* WetnessNoise; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* RainGroundNormalTex1; // 0xD8
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::ICpuParams*>* cpuParamsList; // 0xE0
		::UnityEngine::Rendering::Universal::Internal::CpuVector4Params* buildingBotLightParams1; // 0xE8
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* moonMaskTex; // 0xF0
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* GlobalDetailNormalMap; // 0xF8
		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* RainNormal; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void SetData(::UnityEngine::Rendering::Universal::VisualEnvironmentE* ve, ::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS_SETDATA_OFFSET))(this, ve, weatherConfig);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS_CLEARALL_OFFSET))(this);
		}

		::System::Void Push(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_COMMONWEATHERCPUPARAMS_PUSH_OFFSET))(this, cmd);
		}
	};
}
