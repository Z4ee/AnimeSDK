#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileAccess.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CLOSEMAPPING_OFFSET UNITYSDK_OFFSET(0x1847B7E0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18486A80)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_FLUSH_OFFSET UNITYSDK_OFFSET(0x1847B8D0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAPINTERNAL_OFFSET UNITYSDK_OFFSET(0x18486900)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAP_OFFSET UNITYSDK_OFFSET(0x184869B0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x184868F0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILE_OFFSET UNITYSDK_OFFSET(0x18486F40)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_UNMAP_OFFSET UNITYSDK_OFFSET(0x1847B950)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMapImpl_TypeDefinitionIndex = 3113;

	class MemoryMapImpl : public ::System::Object
	{
	public:
		static ::System::IntPtr OpenFileInternal(::System::String* path, ::System::IO::FileMode mode, ::System::String* mapName, ::System::Int64& capacity, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions options, ::System::Int32& error)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::IO::FileMode, ::System::String*, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILEINTERNAL_OFFSET))(path, mode, mapName, capacity, access, options, error);
		}

		static ::System::Void CloseMapping(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CLOSEMAPPING_OFFSET))(handle);
		}

		static ::System::Void Flush(::System::IntPtr file_handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_FLUSH_OFFSET))(file_handle);
		}

		static ::System::Boolean Unmap(::System::IntPtr mmap_handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_UNMAP_OFFSET))(mmap_handle);
		}

		static ::System::Int32 MapInternal(::System::IntPtr handle, ::System::Int64 offset, ::System::Int64& size, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access, ::System::IntPtr& mmap_handle, ::System::IntPtr& base_address)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int64, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAPINTERNAL_OFFSET))(handle, offset, size, access, mmap_handle, base_address);
		}

		static ::System::Void Map(::System::IntPtr handle, ::System::Int64 offset, ::System::Int64& size, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access, ::System::IntPtr& mmap_handle, ::System::IntPtr& base_address)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int64, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_MAP_OFFSET))(handle, offset, size, access, mmap_handle, base_address);
		}

		static ::System::Exception* CreateException(::System::Int32 error, ::System::String* path)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_CREATEEXCEPTION_OFFSET))(error, path);
		}

		static ::System::IntPtr OpenFile(::System::String* path, ::System::IO::FileMode mode, ::System::String* mapName, ::System::Int64& capacity, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions options)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::IO::FileMode, ::System::String*, ::System::Int64&, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPIMPL_OPENFILE_OFFSET))(path, mode, mapName, capacity, access, options);
		}
	};
}
