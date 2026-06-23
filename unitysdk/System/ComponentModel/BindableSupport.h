#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int BindableSupport_TypeDefinitionIndex = 2822;

	enum class BindableSupport : ::System::Int32
	{
		No = 0,
		Yes = 1,
		Default = 2,
	};
}
