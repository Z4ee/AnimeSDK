#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaWhiteSpace_TypeDefinitionIndex = 1984;

	enum class XmlSchemaWhiteSpace : ::System::Int32
	{
		Preserve = 0,
		Replace = 1,
		Collapse = 2,
	};
}
