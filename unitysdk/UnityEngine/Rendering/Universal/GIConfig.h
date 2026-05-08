#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GICONFIG_GICONFIGGETKODAMAGIPARAMS_OFFSET UNITYSDK_OFFSET(0x19688390)
#define UNITYENGINE_RENDERING_UNIVERSAL_GICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19688520)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GIConfig_TypeDefinitionIndex = 29964;

	class GIConfig : public ::System::Object
	{
	public:
		::System::Single skyIntensity; // 0x10
		::UnityEngine::Color skyColor; // 0x14
		::UnityEngine::Color middleColor; // 0x24
		::UnityEngine::Color groundColor; // 0x34
		::System::Boolean ambientSHUseTriLight; // 0x44
		::UnityEngine::Rendering::SphericalHarmonicsL2 bakedSH; // 0x48
		::System::Single dynamicObjectGIIntensity; // 0xB4
		::System::Single emissionHueIntensity; // 0xB8
		::System::Single cloudShadowIntensityForGI; // 0xBC
		::System::Single secondaryBounceIntensity; // 0xC0
		::System::Single skyIndirectIntensity; // 0xC4
		::System::Single sceneInteriorFakeBrightness; // 0xC8

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
