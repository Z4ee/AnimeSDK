#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CookieVariant_TypeDefinitionIndex = 2786;

	enum class CookieVariant : ::System::Int32
	{
		Unknown = 0,
		Plain = 1,
		Rfc2109 = 2,
		Rfc2965 = 3,
		Default = 2,
	};
}
