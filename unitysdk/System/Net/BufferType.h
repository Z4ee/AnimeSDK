#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int BufferType_TypeDefinitionIndex = 3304;

	enum class BufferType : ::System::Int32
	{
		Empty = 0,
		Data = 1,
		Token = 2,
		Parameters = 3,
		Missing = 4,
		Extra = 5,
		Trailer = 6,
		Header = 7,
		Padding = 9,
		Stream = 10,
		ChannelBindings = 14,
		TargetHost = 16,
		ReadOnlyFlag = -2147483648,
		ReadOnlyWithChecksum = 268435456,
	};
}
