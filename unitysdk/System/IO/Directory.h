#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class DirectoryInfo; }

#define SYSTEM_IO_DIRECTORY_CREATEDIRECTORIESINTERNAL_OFFSET UNITYSDK_OFFSET(0x179580C0)
#define SYSTEM_IO_DIRECTORY_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17957DC0)
#define SYSTEM_IO_DIRECTORY_DELETE_1_OFFSET UNITYSDK_OFFSET(0x179589F0)
#define SYSTEM_IO_DIRECTORY_DELETE_OFFSET UNITYSDK_OFFSET(0x17958470)
#define SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x179577E0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x17957680)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x17957C60)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMNAMES_OFFSET UNITYSDK_OFFSET(0x17957940)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILES_1_OFFSET UNITYSDK_OFFSET(0x17957B30)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x179579D0)
#define SYSTEM_IO_DIRECTORY_EXISTS_OFFSET UNITYSDK_OFFSET(0x17958A30)
#define SYSTEM_IO_DIRECTORY_GETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17958AC0)
#define SYSTEM_IO_DIRECTORY_GETDEMANDDIR_OFFSET UNITYSDK_OFFSET(0x17959330)
#define SYSTEM_IO_DIRECTORY_GETDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x17957250)
#define SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x17956FE0)
#define SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x17957410)
#define SYSTEM_IO_DIRECTORY_GETFILES_1_OFFSET UNITYSDK_OFFSET(0x17956A80)
#define SYSTEM_IO_DIRECTORY_GETFILES_2_OFFSET UNITYSDK_OFFSET(0x17956C40)
#define SYSTEM_IO_DIRECTORY_GETFILES_OFFSET UNITYSDK_OFFSET(0x17956810)
#define SYSTEM_IO_DIRECTORY_GETPARENT_OFFSET UNITYSDK_OFFSET(0x17958BD0)
#define SYSTEM_IO_DIRECTORY_INSECUREGETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17958B00)
#define SYSTEM_IO_DIRECTORY_INTERNALENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x17957760)
#define SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x17957D40)
#define SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x17957AB0)
#define SYSTEM_IO_DIRECTORY_INTERNALGETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x17957130)
#define SYSTEM_IO_DIRECTORY_INTERNALGETFILEDIRECTORYNAMES_OFFSET UNITYSDK_OFFSET(0x17956EA0)
#define SYSTEM_IO_DIRECTORY_INTERNALGETFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x17957560)
#define SYSTEM_IO_DIRECTORY_INTERNALGETFILES_OFFSET UNITYSDK_OFFSET(0x17956960)
#define SYSTEM_IO_DIRECTORY_ISROOTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17958B40)
#define SYSTEM_IO_DIRECTORY_MOVE_OFFSET UNITYSDK_OFFSET(0x17958D50)
#define SYSTEM_IO_DIRECTORY_RECURSIVEDELETE_OFFSET UNITYSDK_OFFSET(0x17958650)
#define SYSTEM_IO_DIRECTORY_SETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17959180)

namespace System::IO
{
	inline static constexpr unsigned int Directory_TypeDefinitionIndex = 662;

	class Directory : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>* GetFiles(::System::String* path)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_OFFSET))(path);
		}

		static ::Il2CppArray<::System::String*>* GetFiles_1(::System::String* path, ::System::String* searchPattern)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_1_OFFSET))(path, searchPattern);
		}

		static ::Il2CppArray<::System::String*>* GetFiles_2(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_2_OFFSET))(path, searchPattern, searchOption);
		}

		static ::Il2CppArray<::System::String*>* InternalGetFiles(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETFILES_OFFSET))(path, searchPattern, searchOption);
		}

		static ::Il2CppArray<::System::String*>* GetDirectories(::System::String* path)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET))(path);
		}

		static ::Il2CppArray<::System::String*>* GetDirectories_1(::System::String* path, ::System::String* searchPattern)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDIRECTORIES_1_OFFSET))(path, searchPattern);
		}

		static ::Il2CppArray<::System::String*>* InternalGetDirectories(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETDIRECTORIES_OFFSET))(path, searchPattern, searchOption);
		}

		static ::Il2CppArray<::System::String*>* GetFileSystemEntries(::System::String* path)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET))(path);
		}

		static ::Il2CppArray<::System::String*>* InternalGetFileSystemEntries(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETFILESYSTEMENTRIES_OFFSET))(path, searchPattern, searchOption);
		}

		static ::Il2CppArray<::System::String*>* InternalGetFileDirectoryNames(::System::String* path, ::System::String* userPathOriginal, ::System::String* searchPattern, ::System::Boolean includeFiles, ::System::Boolean includeDirs, ::System::IO::SearchOption searchOption, ::System::Boolean checkHost)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::IO::SearchOption, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETFILEDIRECTORYNAMES_OFFSET))(path, userPathOriginal, searchPattern, includeFiles, includeDirs, searchOption, checkHost);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateDirectories(::System::String* path)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET))(path);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateDirectories_1(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_1_OFFSET))(path, searchPattern, searchOption);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* InternalEnumerateDirectories(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALENUMERATEDIRECTORIES_OFFSET))(path, searchPattern, searchOption);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFiles(::System::String* path)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET))(path);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFiles_1(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILES_1_OFFSET))(path, searchPattern, searchOption);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* InternalEnumerateFiles(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILES_OFFSET))(path, searchPattern, searchOption);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFileSystemEntries(::System::String* path)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMENTRIES_OFFSET))(path);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* InternalEnumerateFileSystemEntries(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILESYSTEMENTRIES_OFFSET))(path, searchPattern, searchOption);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFileSystemNames(::System::String* path, ::System::String* searchPattern, ::System::IO::SearchOption searchOption, ::System::Boolean includeFiles, ::System::Boolean includeDirs)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMNAMES_OFFSET))(path, searchPattern, searchOption, includeFiles, includeDirs);
		}

		static ::System::IO::DirectoryInfo* CreateDirectory(::System::String* path)
		{
			return ((::System::IO::DirectoryInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_CREATEDIRECTORY_OFFSET))(path);
		}

		static ::System::IO::DirectoryInfo* CreateDirectoriesInternal(::System::String* path)
		{
			return ((::System::IO::DirectoryInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_CREATEDIRECTORIESINTERNAL_OFFSET))(path);
		}

		static ::System::Void Delete(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_DELETE_OFFSET))(path);
		}

		static ::System::Void RecursiveDelete(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_RECURSIVEDELETE_OFFSET))(path);
		}

		static ::System::Void Delete_1(::System::String* path, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_DELETE_1_OFFSET))(path, recursive);
		}

		static ::System::Boolean Exists(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_EXISTS_OFFSET))(path);
		}

		static ::System::String* GetCurrentDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETCURRENTDIRECTORY_OFFSET))();
		}

		static ::System::String* InsecureGetCurrentDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INSECUREGETCURRENTDIRECTORY_OFFSET))();
		}

		static ::System::Boolean IsRootDirectory(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ISROOTDIRECTORY_OFFSET))(path);
		}

		static ::System::IO::DirectoryInfo* GetParent(::System::String* path)
		{
			return ((::System::IO::DirectoryInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETPARENT_OFFSET))(path);
		}

		static ::System::Void Move(::System::String* sourceDirName, ::System::String* destDirName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_MOVE_OFFSET))(sourceDirName, destDirName);
		}

		static ::System::Void SetCurrentDirectory(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_SETCURRENTDIRECTORY_OFFSET))(path);
		}

		static ::System::String* GetDemandDir(::System::String* fullPath, ::System::Boolean thisDirOnly)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDEMANDDIR_OFFSET))(fullPath, thisDirOnly);
		}
	};
}
