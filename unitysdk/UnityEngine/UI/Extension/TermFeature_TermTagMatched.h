#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TermFeature_TermTagMatched_TypeDefinitionIndex = 76530;

	struct alignas(4) TermFeature_TermTagMatched
	{
		::System::UInt16 token; // 0x10
		::System::Int32 start; // 0x14
		::System::Int32 end; // 0x18
	};
}
