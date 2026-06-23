#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AttributeMatchState_TypeDefinitionIndex = 2086;

	enum class AttributeMatchState : ::System::Int32
	{
		AttributeFound = 0,
		AnyIdAttributeFound = 1,
		UndeclaredElementAndAttribute = 2,
		UndeclaredAttribute = 3,
		AnyAttributeLax = 4,
		AnyAttributeSkip = 5,
		ProhibitedAnyAttribute = 6,
		ProhibitedAttribute = 7,
		AttributeNameMismatch = 8,
		ValidateAttributeInvalidCall = 9,
	};
}
