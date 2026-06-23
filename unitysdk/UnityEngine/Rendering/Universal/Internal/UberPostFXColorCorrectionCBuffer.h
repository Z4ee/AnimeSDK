#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UberPostFXColorCorrectionCBuffer_TypeDefinitionIndex = 26535;

	struct alignas(4) UberPostFXColorCorrectionCBuffer
	{
		::UnityEngine::Vector4 UberPostColorCorrectionPacked0; // 0x10
		::UnityEngine::Vector4 UberPostColorCorrectionPacked1; // 0x20
		::UnityEngine::Vector4 UberPostColorCorrectionPacked2; // 0x30
		::UnityEngine::Vector4 UberPostColorCorrectionPacked3; // 0x40
	};
}
