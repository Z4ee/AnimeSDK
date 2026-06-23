#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataSetDateTime_TypeDefinitionIndex = 38605;

	enum class DataSetDateTime : ::System::Int32
	{
		Local = 1,
		Unspecified = 2,
		UnspecifiedLocal = 3,
		Utc = 4,
	};
}
