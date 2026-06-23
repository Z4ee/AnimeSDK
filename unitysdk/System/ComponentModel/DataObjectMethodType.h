#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectMethodType_TypeDefinitionIndex = 2853;

	enum class DataObjectMethodType : ::System::Int32
	{
		Fill = 0,
		Select = 1,
		Update = 2,
		Insert = 3,
		Delete = 4,
	};
}
