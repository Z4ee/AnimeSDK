#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ReflectionProbe; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeBlendInfo_TypeDefinitionIndex = 4704;

	struct alignas(8) ReflectionProbeBlendInfo
	{
		::UnityEngine::ReflectionProbe* probe; // 0x10
		::System::Single weight; // 0x18
	};
}
