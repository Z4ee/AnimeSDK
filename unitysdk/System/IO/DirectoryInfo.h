#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileSystemInfo.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class FileInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_DIRECTORYINFO_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x17959450)
#define SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEDIRECTORIESITERATOR_OFFSET UNITYSDK_OFFSET(0x1795A220)
#define SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEFILESITERATOR_OFFSET UNITYSDK_OFFSET(0x1795A3B0)
#define SYSTEM_IO_DIRECTORYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x17958460)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_1_OFFSET UNITYSDK_OFFSET(0x17959B70)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x17959B40)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x1795A160)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1795A150)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_1_OFFSET UNITYSDK_OFFSET(0x1795A330)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x1795A2B0)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x179599A0)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x17959990)
#define SYSTEM_IO_DIRECTORYINFO_GETFILESSUBDIRS_OFFSET UNITYSDK_OFFSET(0x17959BC0)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_1_OFFSET UNITYSDK_OFFSET(0x17959720)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_2_OFFSET UNITYSDK_OFFSET(0x17959D40)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET UNITYSDK_OFFSET(0x17959710)
#define SYSTEM_IO_DIRECTORYINFO_GET_EXISTS_OFFSET UNITYSDK_OFFSET(0x179583E0)
#define SYSTEM_IO_DIRECTORYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17959700)
#define SYSTEM_IO_DIRECTORYINFO_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x17958370)
#define SYSTEM_IO_DIRECTORYINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17959570)
#define SYSTEM_IO_DIRECTORYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17959BB0)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17958310)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x179596E0)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17958D00)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryInfo_TypeDefinitionIndex = 706;

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

		::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* EnumerateDirectories()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* EnumerateDirectories_1(::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_1_OFFSET))(this, searchPattern, searchOption);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* CreateEnumerateDirectoriesIterator(::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEDIRECTORIESITERATOR_OFFSET))(this, searchPattern, searchOption);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* EnumerateFiles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* EnumerateFiles_1(::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_1_OFFSET))(this, searchPattern, searchOption);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* CreateEnumerateFilesIterator(::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEFILESITERATOR_OFFSET))(this, searchPattern, searchOption);
		}

		::System::Void CheckPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CHECKPATH_OFFSET))(this, path);
		}
	};
}
