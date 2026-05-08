#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data::Common
{
	inline static constexpr unsigned int ObjectStorage_Families_TypeDefinitionIndex = 37132;

	enum class ObjectStorage_Families : ::System::Int32
	{
		DATETIME = 0,
		NUMBER = 1,
		STRING = 2,
		BOOLEAN = 3,
		ARRAY = 4,
	};
}
