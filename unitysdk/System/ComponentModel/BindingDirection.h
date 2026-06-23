#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int BindingDirection_TypeDefinitionIndex = 2823;

	enum class BindingDirection : ::System::Int32
	{
		OneWay = 0,
		TwoWay = 1,
	};
}
