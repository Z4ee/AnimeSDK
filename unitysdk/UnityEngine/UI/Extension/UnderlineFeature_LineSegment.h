#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UnderlineFeature_LineSegment_TypeDefinitionIndex = 75318;

	struct alignas(4) UnderlineFeature_LineSegment
	{
		::System::Int32 startGi; // 0x10
		::System::Int32 endGi; // 0x14
		::System::Single baseY; // 0x18
	};
}
