#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlStandalone_TypeDefinitionIndex = 1888;

	enum class XmlStandalone : ::System::Int32
	{
		Omit = 0,
		Yes = 1,
		No = 2,
	};
}
