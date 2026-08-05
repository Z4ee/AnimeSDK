#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_VOLUMETRICCLOUDPERFORMANCEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9B3730)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricCloudV2Config_VolumetricCloudPerformanceProfile_TypeDefinitionIndex = 26908;

	class VolumetricCloudV2Config_VolumetricCloudPerformanceProfile : public ::System::Object
	{
	public:
		::System::Single phaseG; // 0x10
		::System::Single msScattFactor; // 0x14
		::System::Single msExtinFactor; // 0x18
		::System::Single msPhaseFactor; // 0x1C
		::System::UInt32 msCount; // 0x20
		::System::Single tracingMaxDistance; // 0x24
		::System::Int32 stepCountMax; // 0x28
		::System::Single stepDistance; // 0x2C
		::System::Single densityMultiplier; // 0x30
		::System::Single detailNoiseMipLevel; // 0x34
		::System::Single stopTracingTransmittanceThreshold; // 0x38
		::System::Single mobileJitterStrength; // 0x3C
		::System::Single mobileAbsorption; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICCLOUDV2CONFIG_VOLUMETRICCLOUDPERFORMANCEPROFILE__CTOR_OFFSET))(this);
		}
	};
}
