#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FieldPrecision_TypeDefinitionIndex = 34137;

	enum class FieldPrecision : ::System::Int32
	{
		Half = 0,
		Real = 1,
		Default = 2,
	};
}
