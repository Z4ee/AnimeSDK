#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPProbeDebugInfo_TypeDefinitionIndex = 4866;

	struct alignas(4) CRPProbeDebugInfo
	{
		::System::Int32 profileType; // 0x10
	};
}
