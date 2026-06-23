#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int HttpBehaviour_TypeDefinitionIndex = 3320;

	enum class HttpBehaviour : ::System::Byte
	{
		Unknown = 0x0,
		HTTP10 = 0x1,
		HTTP11PartiallyCompliant = 0x2,
		HTTP11 = 0x3,
	};
}
