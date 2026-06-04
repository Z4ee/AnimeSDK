#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicMaterialCombine_TypeDefinitionIndex = 5293;

	enum class PhysicMaterialCombine : ::System::Int32
	{
		Average = 0,
		Minimum = 2,
		Multiply = 1,
		Maximum = 3,
	};
}
