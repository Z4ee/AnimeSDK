#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int MonoFileType_TypeDefinitionIndex = 721;

	enum class MonoFileType : ::System::Int32
	{
		Unknown = 0,
		Disk = 1,
		Char = 2,
		Pipe = 3,
		Remote = 32768,
	};
}
