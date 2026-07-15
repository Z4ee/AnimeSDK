#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FieldPacking_TypeDefinitionIndex = 34136;

	enum class FieldPacking : ::System::Int32
	{
		NoPacking = 0,
		R11G11B10 = 1,
		PackedFloat = 2,
		PackedUint = 3,
	};
}
