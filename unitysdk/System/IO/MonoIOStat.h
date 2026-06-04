#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO
{
	inline static constexpr unsigned int MonoIOStat_TypeDefinitionIndex = 721;

	struct alignas(8) MonoIOStat
	{
		::System::IO::FileAttributes fileAttributes; // 0x10
		::System::Int64 Length; // 0x18
		::System::Int64 CreationTime; // 0x20
		::System::Int64 LastAccessTime; // 0x28
		::System::Int64 LastWriteTime; // 0x30
	};
}
