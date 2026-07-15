#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlOutputMethod_TypeDefinitionIndex = 1879;

	enum class XmlOutputMethod : ::System::Int32
	{
		Xml = 0,
		Html = 1,
		Text = 2,
		AutoDetect = 3,
	};
}
