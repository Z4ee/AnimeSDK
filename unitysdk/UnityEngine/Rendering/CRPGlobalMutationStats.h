#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CRPPassGlobalMutationStats.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPGlobalMutationStats_TypeDefinitionIndex = 4829;

	struct alignas(8) CRPGlobalMutationStats
	{
		::Il2CppArray<::UnityEngine::Rendering::CRPPassGlobalMutationStats>* passes; // 0x10
	};
}
