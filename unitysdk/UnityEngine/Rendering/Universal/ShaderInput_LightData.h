#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderInput_LightData_TypeDefinitionIndex = 24790;

	struct alignas(4) ShaderInput_LightData
	{
		::UnityEngine::Vector4 position; // 0x10
		::UnityEngine::Vector4 color; // 0x20
		::UnityEngine::Vector4 attenuation; // 0x30
		::UnityEngine::Vector4 spotDirection; // 0x40
		::UnityEngine::Vector4 occlusionProbeChannels; // 0x50
	};
}
