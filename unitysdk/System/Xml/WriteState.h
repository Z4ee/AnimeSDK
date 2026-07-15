#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int WriteState_TypeDefinitionIndex = 1877;

	enum class WriteState : ::System::Int32
	{
		Start = 0,
		Prolog = 1,
		Element = 2,
		Attribute = 3,
		Content = 4,
		Closed = 5,
		Error = 6,
	};
}
