#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedFileOptions_TypeDefinitionIndex = 3113;

	enum class MemoryMappedFileOptions : ::System::Int32
	{
		None = 0,
		DelayAllocatePages = 67108864,
	};
}
