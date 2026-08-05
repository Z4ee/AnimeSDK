#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/Vector4i.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraUpdateProbePass_ProbeClipmapEntry_TypeDefinitionIndex = 26938;

	struct alignas(4) LyraUpdateProbePass_ProbeClipmapEntry
	{
		::UnityEngine::Vector4 WorldPosToProbeCoord; // 0x10
		::UnityEngine::Vector4 ProbeCoordToWorldPos; // 0x20
		::UnityEngine::Rendering::Universal::Internal::Vector4i ProbeCoordShift; // 0x30
	};
}
