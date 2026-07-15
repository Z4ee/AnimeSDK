#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ExceptionArgument_TypeDefinitionIndex = 4967;

	enum class ExceptionArgument : ::System::Int32
	{
		length = 0,
		start = 1,
		minimumBufferSize = 2,
		elementIndex = 3,
		comparable = 4,
		comparer = 5,
		destination = 6,
		offset = 7,
		startSegment = 8,
		endSegment = 9,
		startIndex = 10,
		endIndex = 11,
		array = 12,
		culture = 13,
		manager = 14,
	};
}
