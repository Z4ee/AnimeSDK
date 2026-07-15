#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaContentType_TypeDefinitionIndex = 2185;

	enum class XmlSchemaContentType : ::System::Int32
	{
		TextOnly = 0,
		Empty = 1,
		ElementOnly = 2,
		Mixed = 3,
	};
}
