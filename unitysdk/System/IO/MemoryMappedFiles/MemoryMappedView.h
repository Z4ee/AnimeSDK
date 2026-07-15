#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileAccess.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32::SafeHandles { class SafeMemoryMappedViewHandle; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_CREATE_OFFSET UNITYSDK_OFFSET(0x17E25250)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x17E25950)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E25810)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_FLUSH_OFFSET UNITYSDK_OFFSET(0x17E257E0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_ACCESS_OFFSET UNITYSDK_OFFSET(0x17E257D0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x17E25A30)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_POINTEROFFSET_OFFSET UNITYSDK_OFFSET(0x17E257B0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x17E257C0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_VIEWHANDLE_OFFSET UNITYSDK_OFFSET(0x17E257A0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x17E25780)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedView_TypeDefinitionIndex = 3120;

	class MemoryMappedView : public ::System::Object
	{
	public:
		::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle* m_viewHandle; // 0x10
		::System::IO::MemoryMappedFiles::MemoryMappedFileAccess m_access; // 0x18
		::System::Int64 m_size; // 0x20
		::System::Int64 m_pointerOffset; // 0x28

		::System::Void _ctor(::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a4)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle*, ::System::Int64, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle* get_ViewHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeMemoryMappedViewHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_VIEWHANDLE_OFFSET))(this);
		}

		::System::Int64 get_PointerOffset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_POINTEROFFSET_OFFSET))(this);
		}

		::System::Int64 get_Size()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_SIZE_OFFSET))(this);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedFileAccess get_Access()
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFileAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_ACCESS_OFFSET))(this);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedView* Create(::System::IntPtr a1, ::System::Int64 a2, ::System::Int64 a3, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a4)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedView*(*)(::System::IntPtr, ::System::Int64, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Flush(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_FLUSH_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_DISPOSE_1_OFFSET))(this);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDVIEW_GET_ISCLOSED_OFFSET))(this);
		}
	};
}
