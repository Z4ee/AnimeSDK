#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int ReadState_TypeDefinitionIndex = 2874;

	enum class ReadState : ::System::Int32
	{
		None = 0,
		Status = 1,
		Headers = 2,
		Content = 3,
		Aborted = 4,
	};
}
