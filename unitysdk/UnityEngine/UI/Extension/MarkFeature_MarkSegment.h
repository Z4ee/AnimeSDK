#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int MarkFeature_MarkSegment_TypeDefinitionIndex = 54818;

	struct alignas(4) MarkFeature_MarkSegment
	{
		::System::Int32 startGi; // 0x10
		::System::Int32 endGi; // 0x14
		::System::Int32 lineNumber; // 0x18
	};
}
