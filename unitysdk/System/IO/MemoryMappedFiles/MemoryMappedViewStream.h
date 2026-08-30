#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryStream.h"

namespace System::IO::MemoryMappedFiles { class MemoryMappedView; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6CEBA0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E6CEC90)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E6CEB40)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CE310)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedViewStream_TypeDefinitionIndex = 3125;

	class MemoryMappedViewStream : public ::System::IO::UnmanagedMemoryStream
	{
	public:
		::System::IO::MemoryMappedFiles::MemoryMappedView* m_view; // 0x68

		::System::Void _ctor(::System::IO::MemoryMappedFiles::MemoryMappedView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryMappedFiles::MemoryMappedView*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_FLUSH_OFFSET))(this);
		}
	};
}
