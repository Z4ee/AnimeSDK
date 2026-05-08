#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraUpdateProbePass_LyraProbeEstimatorData_TypeDefinitionIndex = 30517;

	struct alignas(4) LyraUpdateProbePass_LyraProbeEstimatorData
	{
		::UnityEngine::Vector3 Mean; // 0x10
		::System::Single Vbbr; // 0x1C
		::UnityEngine::Vector3 ShortMean; // 0x20
		::System::Single Inconsistency; // 0x2C
		::UnityEngine::Vector3 Variance; // 0x30
		::System::Single CachedBlendingFactor; // 0x3C
	};
}
