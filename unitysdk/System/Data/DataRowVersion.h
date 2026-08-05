#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataRowVersion_TypeDefinitionIndex = 39262;

	enum class DataRowVersion : ::System::Int32
	{
		Original = 256,
		Current = 512,
		Proposed = 1024,
		Default = 1536,
	};
}
