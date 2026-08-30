#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/HandleInheritability.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileAccess.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32::SafeHandles { class SafeMemoryMappedFileHandle; }
namespace System { class String; }
namespace System::IO { class FileStream; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFileSecurity; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewStream; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CORESHMCREATE_OFFSET UNITYSDK_OFFSET(0x1E6CDF50)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1E6CDD50)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_OFFSET UNITYSDK_OFFSET(0x1E6CDBB0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_1_OFFSET UNITYSDK_OFFSET(0x1E6CE0D0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_OFFSET UNITYSDK_OFFSET(0x1E6CE0B0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_1_OFFSET UNITYSDK_OFFSET(0x1E6CE410)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_2_OFFSET UNITYSDK_OFFSET(0x1E6CE460)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_OFFSET UNITYSDK_OFFSET(0x1E6CE3C0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWSTREAM_OFFSET UNITYSDK_OFFSET(0x1E6CE0F0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E6CE5B0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6CE530)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_GETFILEACCESS_OFFSET UNITYSDK_OFFSET(0x1E6CE660)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CDD40)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedFile_TypeDefinitionIndex = 3127;

	class MemoryMappedFile : public ::System::Object
	{
	public:
		::Microsoft::Win32::SafeHandles::SafeMemoryMappedFileHandle* handle; // 0x10
		::System::IO::FileStream* stream; // 0x18
		::System::Boolean keepOpen; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE__CTOR_OFFSET))(this);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateFromFile(::System::String* a1, ::System::IO::FileMode a2)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_OFFSET))(a1, a2);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateFromFile_1(::System::String* a1, ::System::IO::FileMode a2, ::System::String* a3, ::System::Int64 a4, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a5)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::IO::FileMode, ::System::String*, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CoreShmCreate(::System::String* a1, ::System::Int64 a2, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a3, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions a4, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity* a5, ::System::IO::HandleInheritability a6, ::System::IO::FileMode a7)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity*, ::System::IO::HandleInheritability, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CORESHMCREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateNew(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_OFFSET))(a1, a2);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateNew_1(::System::String* a1, ::System::Int64 a2, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a3, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions a4, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity* a5, ::System::IO::HandleInheritability a6)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity*, ::System::IO::HandleInheritability))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewStream* CreateViewStream(::System::Int64 a1, ::System::Int64 a2, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a3)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewStream*(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWSTREAM_OFFSET))(this, a1, a2, a3);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* CreateViewAccessor()
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_OFFSET))(this);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* CreateViewAccessor_1(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_1_OFFSET))(this, a1, a2);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* CreateViewAccessor_2(::System::Int64 a1, ::System::Int64 a2, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a3)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::IO::FileAccess GetFileAccess(::System::IO::MemoryMappedFiles::MemoryMappedFileAccess a1)
		{
			return ((::System::IO::FileAccess(*)(::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_GETFILEACCESS_OFFSET))(a1);
		}
	};
}
