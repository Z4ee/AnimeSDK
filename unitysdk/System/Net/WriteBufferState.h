#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WriteBufferState_TypeDefinitionIndex = 3367;

	enum class WriteBufferState : ::System::Int32
	{
		Disabled = 0,
		Headers = 1,
		Buffer = 2,
		Playback = 3,
	};
}
