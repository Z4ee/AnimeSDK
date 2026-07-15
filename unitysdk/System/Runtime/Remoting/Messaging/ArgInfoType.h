#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ArgInfoType_TypeDefinitionIndex = 1289;

	enum class ArgInfoType : ::System::Byte
	{
		In = 0x0,
		Out = 0x1,
	};
}
