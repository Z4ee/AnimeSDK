#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryAccessor.h"

namespace Microsoft::Win32::SafeHandles { class SafeMemoryMappedViewHandle; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedView; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A34B60)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_FLUSH_OFFSET UNITYSDK_OFFSET(0x19A34C80)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_GET_SAFEMEMORYMAPPEDVIEWHANDLE_OFFSET UNITYSDK_OFFSET(0x19A34B40)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A34670)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedViewAccessor_TypeDefinitionIndex = 3124;

	class MemoryMappedViewAccessor : public ::System::IO::UnmanagedMemoryAccessor
	{
	public:
		::System::IO::MemoryMappedFiles::MemoryMappedView* m_view; // 0x30

		::System::Void _ctor(::System::IO::MemoryMappedFiles::MemoryMappedView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryMappedFiles::MemoryMappedView*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR__CTOR_OFFSET))(this, a1);
		}

		::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle* get_SafeMemoryMappedViewHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_GET_SAFEMEMORYMAPPEDVIEWHANDLE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_FLUSH_OFFSET))(this);
		}
	};
}
