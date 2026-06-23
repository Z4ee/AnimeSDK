#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0B610)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricCloudConfig_TypeDefinitionIndex = 26887;

	class VolumetricCloudConfig : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::UnityEngine::Vector3 boundCenter; // 0x14
		::UnityEngine::Vector3 boundSize; // 0x20
		::UnityEngine::Texture2D* cloudGradientMap; // 0x30
		::UnityEngine::Texture2D* cloudMap; // 0x38
		::System::Single cloudMapSize; // 0x40
		::System::Single cloudDensity; // 0x44
		::System::Single cloudCoverage; // 0x48
		::System::Single cloudType; // 0x4C
		::UnityEngine::Texture3D* cloudVolumeNoise; // 0x50
		::System::Single cloudNoiseSize; // 0x58
		::UnityEngine::Vector4 cloudNoiseWeights; // 0x5C
		::System::Single cloudNoiseIntensity; // 0x6C
		::System::Single cloudHorizontalSpeed; // 0x70
		::System::Single cloudVerticalSpeed; // 0x74
		::UnityEngine::Texture2D* cloudDistortMap; // 0x78
		::UnityEngine::Vector2 cloudDistortMapSize; // 0x80
		::System::Single cloudDistortIntensity; // 0x88
		::System::Single cloudDistortRange; // 0x8C
		::System::Single cloudDistortHorizontalSpeed; // 0x90
		::System::Single cloudDistortVerticalSpeed; // 0x94
		::UnityEngine::Color cloudMainLightColor; // 0x98
		::UnityEngine::Color cloudAmbientColor; // 0xA8
		::UnityEngine::Vector3 cloudPhaseG; // 0xB8
		::System::Single cloudMultiScatteringEccentricity; // 0xC4
		::System::Single cloudMultiScatteringContribution; // 0xC8
		::System::Single cloudMultiScatteringOcclusion; // 0xCC
		::System::Single cloudFogScale; // 0xD0
		::System::Boolean previewFallback; // 0xD4
		::UnityEngine::Texture2D* fallbackCloudMap; // 0xD8
		::System::Single fallbackCloudMapSize; // 0xE0
		::System::Single fallbackCloudHeight; // 0xE4
		::System::Single fallbackCloudSpeed; // 0xE8
		::System::Single fallbackCloudDensity; // 0xEC
		::System::Single fallbackCloudCoverage; // 0xF0
		::UnityEngine::Color fallbackCloudColor; // 0xF4
		::System::Single fallbackCloudFogScale; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
