#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int GenericParameterAttributes_TypeDefinitionIndex = 560;

	enum class GenericParameterAttributes : ::System::Int32
	{
		None = 0,
		VarianceMask = 3,
		Covariant = 1,
		Contravariant = 2,
		SpecialConstraintMask = 28,
		ReferenceTypeConstraint = 4,
		NotNullableValueTypeConstraint = 8,
		DefaultConstructorConstraint = 16,
	};
}
