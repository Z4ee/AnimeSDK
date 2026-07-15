#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngineInternal
{
	inline static constexpr unsigned int TypeInferenceRules_TypeDefinitionIndex = 3910;

	enum class TypeInferenceRules : ::System::Int32
	{
		TypeReferencedByFirstArgument = 0,
		TypeReferencedBySecondArgument = 1,
		ArrayOfTypeReferencedByFirstArgument = 2,
		TypeOfFirstArgument = 3,
	};
}
