#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADA860)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SRPGlobalParameters_TypeDefinitionIndex = 6023;

	class SRPGlobalParameters : public ::System::Object
	{
	public:
		::System::Single PerLightInOutEpsilon; // 0x10
		::System::Single AdditionalLightsDiffuseOnlyDistThreshold; // 0x14
		::System::Boolean AdditionalLightsParticleUsedDiffuseOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
