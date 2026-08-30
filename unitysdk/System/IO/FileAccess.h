#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileAccess_TypeDefinitionIndex = 712;

	enum class FileAccess : ::System::Int32
	{
		Read = 1,
		Write = 2,
		ReadWrite = 3,
	};
}
