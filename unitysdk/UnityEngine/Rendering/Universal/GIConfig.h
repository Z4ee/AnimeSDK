#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GICONFIG_GICONFIGGETKODAMAGIPARAMS_OFFSET UNITYSDK_OFFSET(0x1CB105D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB10760)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GIConfig_TypeDefinitionIndex = 27299;

	class GIConfig : public ::System::Object
	{
	public:
		::System::Single skyIntensity; // 0x10
		::UnityEngine::Color skyColor; // 0x14
		::UnityEngine::Color middleColor; // 0x24
		::UnityEngine::Color groundColor; // 0x34
		::System::Boolean useRTXGICustomSkySH; // 0x44
		::System::Single rtxSkyIntensity; // 0x48
		::UnityEngine::Color rtxSkyColor; // 0x4C
		::UnityEngine::Color rtxMiddleColor; // 0x5C
		::UnityEngine::Color rtxGroundColor; // 0x6C
		::System::Boolean ambientSHUseTriLight; // 0x7C
		::UnityEngine::Rendering::SphericalHarmonicsL2 bakedSH; // 0x80
		::System::Single dynamicObjectGIIntensity; // 0xEC
		::System::Single emissionHueIntensity; // 0xF0
		::System::Single cloudShadowIntensityForGI; // 0xF4
		::System::Single secondaryBounceIntensity; // 0xF8
		::System::Single skyIndirectIntensity; // 0xFC
		::System::Single sceneInteriorFakeBrightness; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GICONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 GIConfigGetKodamaGIParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GICONFIG_GICONFIGGETKODAMAGIPARAMS_OFFSET))(this);
		}
	};
}
