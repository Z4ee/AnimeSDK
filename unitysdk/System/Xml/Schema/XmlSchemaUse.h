#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaUse_TypeDefinitionIndex = 2196;

	enum class XmlSchemaUse : ::System::Int32
	{
		None = 0,
		Optional = 1,
		Prohibited = 2,
		Required = 3,
	};
}
