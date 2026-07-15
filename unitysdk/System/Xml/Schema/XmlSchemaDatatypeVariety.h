#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDatatypeVariety_TypeDefinitionIndex = 2077;

	enum class XmlSchemaDatatypeVariety : ::System::Int32
	{
		Atomic = 0,
		List = 1,
		Union = 2,
	};
}
