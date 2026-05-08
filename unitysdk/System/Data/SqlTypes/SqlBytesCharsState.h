#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlBytesCharsState_TypeDefinitionIndex = 37096;

	enum class SqlBytesCharsState : ::System::Int32
	{
		Null = 0,
		Buffer = 1,
		Stream = 3,
	};
}
