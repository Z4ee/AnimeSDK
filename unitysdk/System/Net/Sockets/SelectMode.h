#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SelectMode_TypeDefinitionIndex = 2894;

	enum class SelectMode : ::System::Int32
	{
		SelectRead = 0,
		SelectWrite = 1,
		SelectError = 2,
	};
}
