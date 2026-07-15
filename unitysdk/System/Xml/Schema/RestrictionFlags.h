#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RestrictionFlags_TypeDefinitionIndex = 2079;

	enum class RestrictionFlags : ::System::Int32
	{
		Length = 1,
		MinLength = 2,
		MaxLength = 4,
		Pattern = 8,
		Enumeration = 16,
		WhiteSpace = 32,
		MaxInclusive = 64,
		MaxExclusive = 128,
		MinInclusive = 256,
		MinExclusive = 512,
		TotalDigits = 1024,
		FractionDigits = 2048,
	};
}
