#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SKYGRIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE00290)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SkyGridConfig_TypeDefinitionIndex = 27372;

	class SkyGridConfig : public ::System::Object
	{
	public:
		::System::Boolean EnableSkyGrid; // 0x10
		::System::Single gridHeight; // 0x14
		::UnityEngine::Texture2D* gridTexture; // 0x18
		::UnityEngine::Texture2D* gridNnoiseTexture; // 0x20
		::UnityEngine::Color gridColor; // 0x28
		::System::Single gridStrength; // 0x38
		::System::Single gridNoiseSpeed; // 0x3C
		::System::Single gridNoiseStrenth; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SKYGRIDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
