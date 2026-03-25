#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryStream.h"

namespace System::IO::MemoryMappedFiles { class MemoryMappedView; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18487E10)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x18487F50)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x18487DB0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x184876C0)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedViewStream_TypeDefinitionIndex = 3112;

	class MemoryMappedViewStream : public ::System::IO::UnmanagedMemoryStream
	{
	public:
		::System::IO::MemoryMappedFiles::MemoryMappedView* m_view; // 0x68

		::System::Void _ctor(::System::IO::MemoryMappedFiles::MemoryMappedView* view)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryMappedFiles::MemoryMappedView*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM__CTOR_OFFSET))(this, view);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWSTREAM_FLUSH_OFFSET))(this);
		}
	};
}
