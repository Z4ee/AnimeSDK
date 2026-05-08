#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileSystemInfo.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::IO { class FileInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_DIRECTORYINFO_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x1A6B9DA0)
#define SYSTEM_IO_DIRECTORYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1A6BA430)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_1_OFFSET UNITYSDK_OFFSET(0x1A6BA920)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x1A6BA8D0)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x1A6BA680)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1A6BA640)
#define SYSTEM_IO_DIRECTORYINFO_GETFILESSUBDIRS_OFFSET UNITYSDK_OFFSET(0x1A6BA990)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_1_OFFSET UNITYSDK_OFFSET(0x1A6BA480)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_2_OFFSET UNITYSDK_OFFSET(0x1A6BAB30)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET UNITYSDK_OFFSET(0x1A6BA440)
#define SYSTEM_IO_DIRECTORYINFO_GET_EXISTS_OFFSET UNITYSDK_OFFSET(0x1A6BA240)
#define SYSTEM_IO_DIRECTORYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A6BA370)
#define SYSTEM_IO_DIRECTORYINFO_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A6BA380)
#define SYSTEM_IO_DIRECTORYINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6B9EE0)
#define SYSTEM_IO_DIRECTORYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6BA980)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6B9CE0)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A6BA170)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B9C80)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryInfo_TypeDefinitionIndex = 673;

	class DirectoryInfo : public ::System::IO::FileSystemInfo
	{
	public:
		::System::String* parent; // 0x60
		::System::String* current; // 0x68

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CTOR_OFFSET))(this, path);
		}

		::System::Void _ctor_1(::System::String* path, ::System::Boolean simpleOriginalPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CTOR_1_OFFSET))(this, path, simpleOriginalPath);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_INITIALIZE_OFFSET))(this);
		}

		::System::Boolean get_Exists()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GET_EXISTS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GET_NAME_OFFSET))(this);
		}

		::System::IO::DirectoryInfo* get_Parent()
		{
			return ((::System::IO::DirectoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GET_PARENT_OFFSET))(this);
		}

		::System::Void Create()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CREATE_OFFSET))(this);
		}

		::Il2CppArray<::System::IO::FileInfo*>* GetFiles()
		{
			return ((::Il2CppArray<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET))(this);
		}

		::Il2CppArray<::System::IO::FileInfo*>* GetFiles_1(::System::String* searchPattern)
		{
			return ((::Il2CppArray<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_1_OFFSET))(this, searchPattern);
		}

		::Il2CppArray<::System::IO::DirectoryInfo*>* GetDirectories()
		{
			return ((::Il2CppArray<::System::IO::DirectoryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET))(this);
		}

		::Il2CppArray<::System::IO::DirectoryInfo*>* GetDirectories_1(::System::String* searchPattern)
		{
			return ((::Il2CppArray<::System::IO::DirectoryInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_1_OFFSET))(this, searchPattern);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET))(this);
		}

		::System::Void Delete_1(::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_DELETE_1_OFFSET))(this, recursive);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetFilesSubdirs(::System::Collections::ArrayList* l, ::System::String* pattern)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::ArrayList*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILESSUBDIRS_OFFSET))(this, l, pattern);
		}

		::Il2CppArray<::System::IO::FileInfo*>* GetFiles_2(::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::Il2CppArray<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_2_OFFSET))(this, searchPattern, searchOption);
		}

		::System::Void CheckPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CHECKPATH_OFFSET))(this, path);
		}
	};
}
