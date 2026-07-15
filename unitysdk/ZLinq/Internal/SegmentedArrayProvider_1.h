#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZLinq/Internal/InlineArray27_1.h"

namespace ZLinq::Internal
{
	inline static constexpr unsigned int SegmentedArrayProvider_1_TypeDefinitionIndex = 6398;

	template <typename T>
	struct SegmentedArrayProvider_1
	{
		::System::Span_1<T> currentSegment; // 0x0
		::System::Int32 countInCurrentSegment; // 0x0
		::System::Span_1<T> initialBuffer; // 0x0
		::ZLinq::Internal::InlineArray27_1<::Il2CppArray<T>*> segments; // 0x0
		::System::Int32 segmentsCount; // 0x0
		::System::Int32 countInFinishedSegments; // 0x0
	};
}
