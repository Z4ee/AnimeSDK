#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaAttDef_Reserve_TypeDefinitionIndex = 2163;

	enum class SchemaAttDef_Reserve : ::System::Int32
	{
		None = 0,
		XmlSpace = 1,
		XmlLang = 2,
	};
}
