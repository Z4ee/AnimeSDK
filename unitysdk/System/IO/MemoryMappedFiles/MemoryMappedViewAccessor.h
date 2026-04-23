#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryAccessor.h"

namespace Microsoft::Win32::SafeHandles { class SafeMemoryMappedViewHandle; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedView; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19EC2A80)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_FLUSH_OFFSET UNITYSDK_OFFSET(0x19EC2BE0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_GET_SAFEMEMORYMAPPEDVIEWHANDLE_OFFSET UNITYSDK_OFFSET(0x19EC2A60)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC27B0)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedViewAccessor_TypeDefinitionIndex = 3112;

	class MemoryMappedViewAccessor : public ::System::IO::UnmanagedMemoryAccessor
	{
	public:
		::System::IO::MemoryMappedFiles::MemoryMappedView* m_view; // 0x30

		::System::Void _ctor(::System::IO::MemoryMappedFiles::MemoryMappedView* view)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryMappedFiles::MemoryMappedView*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR__CTOR_OFFSET))(this, view);
		}

		::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle* get_SafeMemoryMappedViewHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_GET_SAFEMEMORYMAPPEDVIEWHANDLE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEWACCESSOR_FLUSH_OFFSET))(this);
		}
	};
}
