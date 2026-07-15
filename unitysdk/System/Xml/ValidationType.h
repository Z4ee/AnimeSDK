#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int ValidationType_TypeDefinitionIndex = 1823;

	enum class ValidationType : ::System::Int32
	{
		None = 0,
		Auto = 1,
		DTD = 2,
		XDR = 3,
		Schema = 4,
	};
}
