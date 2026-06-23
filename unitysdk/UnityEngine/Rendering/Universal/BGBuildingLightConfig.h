#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BGBUILDINGLIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C439350)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BGBuildingLightConfig_TypeDefinitionIndex = 26311;

	class BGBuildingLightConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Gradient* lightRamp; // 0x18
		::UnityEngine::Texture2D* rampTexture; // 0x20
		::UnityEngine::Texture2D* noiseTexture; // 0x28
		::System::Single lightAmount; // 0x30
		::System::Single startHeight; // 0x34
		::System::Single endHeight; // 0x38
		::System::Single rampTiling; // 0x3C
		::System::Single noiseTiling; // 0x40
		::System::Single lightNoiseWeight; // 0x44
		::System::Single lightNoiseOffset; // 0x48
		::System::Single lightIntensity; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BGBUILDINGLIGHTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
