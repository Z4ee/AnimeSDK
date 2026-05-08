#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_UniversalAdditionalLightDataUnmanagedMutable_TypeDefinitionIndex = 30026;

	struct alignas(4) LightLodManager_UniversalAdditionalLightDataUnmanagedMutable
	{
		::System::Single diffuseAttenuationFade; // 0x10
		::System::Single specularAttenuationFade; // 0x14
		::System::Single diffuseAttenuation; // 0x18
		::System::Single specularAttenuation; // 0x1C
	};
}
