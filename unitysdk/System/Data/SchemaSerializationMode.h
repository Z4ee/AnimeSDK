#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int SchemaSerializationMode_TypeDefinitionIndex = 38674;

	enum class SchemaSerializationMode : ::System::Int32
	{
		IncludeSchema = 1,
		ExcludeSchema = 2,
	};
}
