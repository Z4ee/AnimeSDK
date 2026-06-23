#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int CompiledIdentityConstraint_ConstraintRole_TypeDefinitionIndex = 1951;

	enum class CompiledIdentityConstraint_ConstraintRole : ::System::Int32
	{
		Unique = 0,
		Key = 1,
		Keyref = 2,
	};
}
