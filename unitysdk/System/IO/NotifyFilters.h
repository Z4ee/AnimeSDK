#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int NotifyFilters_TypeDefinitionIndex = 3230;

	enum class NotifyFilters : ::System::Int32
	{
		Attributes = 4,
		CreationTime = 64,
		DirectoryName = 2,
		FileName = 1,
		LastAccess = 32,
		LastWrite = 16,
		Security = 256,
		Size = 8,
	};
}
