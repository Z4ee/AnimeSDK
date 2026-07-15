#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaValidationFlags_TypeDefinitionIndex = 2210;

	enum class XmlSchemaValidationFlags : ::System::Int32
	{
		None = 0,
		ProcessInlineSchema = 1,
		ProcessSchemaLocation = 2,
		ReportValidationWarnings = 4,
		ProcessIdentityConstraints = 8,
		AllowXmlAttributes = 16,
	};
}
