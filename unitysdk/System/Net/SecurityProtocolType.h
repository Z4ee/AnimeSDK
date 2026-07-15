#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int SecurityProtocolType_TypeDefinitionIndex = 2717;

	enum class SecurityProtocolType : ::System::Int32
	{
		SystemDefault = 0,
		Ssl3 = 48,
		Tls = 192,
		Tls11 = 768,
		Tls12 = 3072,
	};
}
