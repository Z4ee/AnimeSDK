#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CharacterGhostCBuffer_TypeDefinitionIndex = 30398;

	struct alignas(4) CharacterGhostCBuffer
	{
		::UnityEngine::Vector4 _CharacterGhostParams; // 0x10
		::UnityEngine::Vector4 _CharacterGhostDistortionParams; // 0x20
		::UnityEngine::Vector4 _MaskParams; // 0x30
	};
}
