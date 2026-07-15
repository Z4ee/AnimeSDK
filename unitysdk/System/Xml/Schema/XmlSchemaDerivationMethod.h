#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDerivationMethod_TypeDefinitionIndex = 2187;

	enum class XmlSchemaDerivationMethod : ::System::Int32
	{
		Empty = 0,
		Substitution = 1,
		Extension = 2,
		Restriction = 4,
		List = 8,
		Union = 16,
		All = 255,
		None = 256,
	};
}
