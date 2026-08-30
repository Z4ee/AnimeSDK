#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileAttributes_TypeDefinitionIndex = 713;

	enum class FileAttributes : ::System::Int32
	{
		Archive = 32,
		Compressed = 2048,
		Device = 64,
		Directory = 16,
		Encrypted = 16384,
		Hidden = 2,
		Normal = 128,
		NotContentIndexed = 8192,
		Offline = 4096,
		ReadOnly = 1,
		ReparsePoint = 1024,
		SparseFile = 512,
		System = 4,
		Temporary = 256,
		IntegrityStream = 32768,
		NoScrubData = 131072,
	};
}
