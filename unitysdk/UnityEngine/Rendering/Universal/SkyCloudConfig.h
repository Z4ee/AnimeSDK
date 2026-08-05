#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SKYCLOUDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D310F80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SkyCloudConfig_TypeDefinitionIndex = 26981;

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
		::System::Boolean lowEarthEnabled; // 0x88
		::UnityEngine::Texture* lowEarthTexture; // 0x90
		::System::Single lowEarthAlpha; // 0x98
		::System::Single lowEarthUvScale; // 0x9C
		::System::Single lowEarthPerspectiveTiling; // 0xA0
		::UnityEngine::Vector2 lowEarthUvOffset; // 0xA4
		::System::Single lowEarthCurvature; // 0xAC
		::System::Single lowEarthHorizonStart; // 0xB0
		::System::Single lowEarthHorizonFade; // 0xB4
		::UnityEngine::Color lowEarthTint; // 0xB8
		::UnityEngine::Color lowEarthFogColor; // 0xC8
		::System::Single lowEarthRimWidth; // 0xD8
		::UnityEngine::Color lowEarthRimColor; // 0xDC
		::System::Single lowEarthRimPower; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SKYCLOUDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
