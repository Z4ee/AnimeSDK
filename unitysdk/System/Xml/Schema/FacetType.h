#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int FacetType_TypeDefinitionIndex = 2190;

	enum class FacetType : ::System::Int32
	{
		None = 0,
		Length = 1,
		MinLength = 2,
		MaxLength = 3,
		Pattern = 4,
		Whitespace = 5,
		Enumeration = 6,
		MinExclusive = 7,
		MinInclusive = 8,
		MaxExclusive = 9,
		MaxInclusive = 10,
		TotalDigits = 11,
		FractionDigits = 12,
	};
}
