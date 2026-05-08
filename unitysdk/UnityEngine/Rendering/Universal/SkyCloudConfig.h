#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SKYCLOUDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F35BF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SkyCloudConfig_TypeDefinitionIndex = 29970;

	class SkyCloudConfig : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* cloudColorRamp; // 0x10
		::UnityEngine::Color CloudPhaseColor; // 0x18
		::System::Single cloudPhaseG; // 0x28
		::System::Single cloudScatteringIntensity; // 0x2C
		::System::Single cloudDistortIntensity; // 0x30
		::System::Single lowCloudVerticalFade; // 0x34
		::System::Single horizonFade; // 0x38
		::System::Single cloudOffsetY; // 0x3C
		::System::Single cloudBaseRot; // 0x40
		::System::Single cloudRotSpeed; // 0x44
		::UnityEngine::Color highCloudColor; // 0x48
		::System::Single highCloudIntensity0; // 0x58
		::System::Single highCloudIntensity1; // 0x5C
		::System::Single highCloudIntensity2; // 0x60
		::System::Single highCloudHeight; // 0x64
		::System::Single cloudMoveSpeed; // 0x68
		::System::Boolean lowCloudTextureIsCubeMap; // 0x6C
		::System::Boolean lowCloudFillDome; // 0x6D
		::UnityEngine::Texture* lowCloudTexture; // 0x70
		::UnityEngine::Texture* highCloudTexture; // 0x78
		::UnityEngine::Texture* cloudDistortMap; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SKYCLOUDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
