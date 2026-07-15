#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedType_TypeDefinitionIndex = 2605;

	enum class ListChangedType : ::System::Int32
	{
		Reset = 0,
		ItemAdded = 1,
		ItemDeleted = 2,
		ItemMoved = 3,
		ItemChanged = 4,
		PropertyDescriptorAdded = 5,
		PropertyDescriptorDeleted = 6,
		PropertyDescriptorChanged = 7,
	};
}
