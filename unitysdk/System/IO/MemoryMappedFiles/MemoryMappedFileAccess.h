#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedFileAccess_TypeDefinitionIndex = 3112;

	enum class MemoryMappedFileAccess : ::System::Int32
	{
		ReadWrite = 0,
		Read = 1,
		Write = 2,
		CopyOnWrite = 3,
		ReadExecute = 4,
		ReadWriteExecute = 5,
	};
}
