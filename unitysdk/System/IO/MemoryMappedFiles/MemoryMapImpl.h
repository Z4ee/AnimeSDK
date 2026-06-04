#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileAccess.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CLOSEMAPPING_OFFSET UNITYSDK_OFFSET(0x1AD2D520)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AD38730)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AD2D610)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AD385B0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAP_OFFSET UNITYSDK_OFFSET(0x1AD38660)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AD385A0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILE_OFFSET UNITYSDK_OFFSET(0x1AD38BF0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_UNMAP_OFFSET UNITYSDK_OFFSET(0x1AD2D690)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMapImpl_TypeDefinitionIndex = 3114;

	class MemoryMapImpl : public ::System::Object
	{
	public:
		static ::System::IntPtr OpenFileInternal(::System::String* a1, ::System::IO::FileMode a2, ::System::String* a3, ::System::Int64& a4, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a5, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions a6, ::System::Int32& a7)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::IO::FileMode, ::System::String*, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILEINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void CloseMapping(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CLOSEMAPPING_OFFSET))(a1);
		}

		static ::System::Void Flush(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_FLUSH_OFFSET))(a1);
		}

		static ::System::Boolean Unmap(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_UNMAP_OFFSET))(a1);
		}

		static ::System::Int32 MapInternal(::System::IntPtr a1, ::System::Int64 a2, ::System::Int64& a3, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a4, ::System::IntPtr& a5, ::System::IntPtr& a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int64, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAPINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Map(::System::IntPtr a1, ::System::Int64 a2, ::System::Int64& a3, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a4, ::System::IntPtr& a5, ::System::IntPtr& a6)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Exception* CreateException(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CREATEEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::IntPtr OpenFile(::System::String* a1, ::System::IO::FileMode a2, ::System::String* a3, ::System::Int64& a4, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a5, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions a6)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::IO::FileMode, ::System::String*, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
