#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileMode_TypeDefinitionIndex = 712;

	enum class FileMode : ::System::Int32
	{
		CreateNew = 1,
		Create = 2,
		Open = 3,
		OpenOrCreate = 4,
		Truncate = 5,
		Append = 6,
	};
}
