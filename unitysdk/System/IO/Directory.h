#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class DirectoryInfo; }

#define SYSTEM_IO_DIRECTORY_CREATEDIRECTORIESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1870A210)
#define SYSTEM_IO_DIRECTORY_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x18709F30)
#define SYSTEM_IO_DIRECTORY_DELETE_1_OFFSET UNITYSDK_OFFSET(0x1870AB10)
#define SYSTEM_IO_DIRECTORY_DELETE_OFFSET UNITYSDK_OFFSET(0x1870A5C0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x18709950)
#define SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x187097F0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x18709DD0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMNAMES_OFFSET UNITYSDK_OFFSET(0x18709AB0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILES_1_OFFSET UNITYSDK_OFFSET(0x18709CA0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x18709B40)
#define SYSTEM_IO_DIRECTORY_EXISTS_OFFSET UNITYSDK_OFFSET(0x1870AB50)
#define SYSTEM_IO_DIRECTORY_GETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1870ABE0)
#define SYSTEM_IO_DIRECTORY_GETDEMANDDIR_OFFSET UNITYSDK_OFFSET(0x1870B450)
#define SYSTEM_IO_DIRECTORY_GETDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x187094F0)
#define SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x18709310)
#define SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x18709640)
#define SYSTEM_IO_DIRECTORY_GETFILES_1_OFFSET UNITYSDK_OFFSET(0x18708EB0)
#define SYSTEM_IO_DIRECTORY_GETFILES_2_OFFSET UNITYSDK_OFFSET(0x18709000)
#define SYSTEM_IO_DIRECTORY_GETFILES_OFFSET UNITYSDK_OFFSET(0x18708CD0)
#define SYSTEM_IO_DIRECTORY_GETPARENT_OFFSET UNITYSDK_OFFSET(0x1870ACF0)
#define SYSTEM_IO_DIRECTORY_INSECUREGETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1870AC20)
#define SYSTEM_IO_DIRECTORY_INTERNALENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x187098D0)
#define SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x18709EB0)
#define SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x18709C20)
#define SYSTEM_IO_DIRECTORY_INTERNALGETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x18709430)
#define SYSTEM_IO_DIRECTORY_INTERNALGETFILEDIRECTORYNAMES_OFFSET UNITYSDK_OFFSET(0x18709230)
#define SYSTEM_IO_DIRECTORY_INTERNALGETFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x18709730)
#define SYSTEM_IO_DIRECTORY_INTERNALGETFILES_OFFSET UNITYSDK_OFFSET(0x18708DF0)
#define SYSTEM_IO_DIRECTORY_ISROOTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1870AC60)
#define SYSTEM_IO_DIRECTORY_MOVE_OFFSET UNITYSDK_OFFSET(0x1870AE70)
#define SYSTEM_IO_DIRECTORY_RECURSIVEDELETE_OFFSET UNITYSDK_OFFSET(0x1870A780)
#define SYSTEM_IO_DIRECTORY_SETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1870B2A0)

namespace System::IO
{
	inline static constexpr unsigned int Directory_TypeDefinitionIndex = 661;

	class Directory : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>* GetFiles(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetFiles_1(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* GetFiles_2(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_2_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* InternalGetFiles(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETFILES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* GetDirectories(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetDirectories_1(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDIRECTORIES_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* InternalGetDirectories(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETDIRECTORIES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* GetFileSystemEntries(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* InternalGetFileSystemEntries(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETFILESYSTEMENTRIES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* InternalGetFileDirectoryNames(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::IO::SearchOption a6, ::System::Boolean a7)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::IO::SearchOption, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETFILEDIRECTORYNAMES_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateDirectories(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateDirectories_1(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* InternalEnumerateDirectories(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALENUMERATEDIRECTORIES_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFiles(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFiles_1(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* InternalEnumerateFiles(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILES_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFileSystemEntries(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMENTRIES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* InternalEnumerateFileSystemEntries(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALENUMERATEFILESYSTEMENTRIES_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EnumerateFileSystemNames(::System::String* a1, ::System::String* a2, ::System::IO::SearchOption a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILESYSTEMNAMES_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::IO::DirectoryInfo* CreateDirectory(::System::String* a1)
		{
			return ((::System::IO::DirectoryInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_CREATEDIRECTORY_OFFSET))(a1);
		}

		static ::System::IO::DirectoryInfo* CreateDirectoriesInternal(::System::String* a1)
		{
			return ((::System::IO::DirectoryInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_CREATEDIRECTORIESINTERNAL_OFFSET))(a1);
		}

		static ::System::Void Delete(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_DELETE_OFFSET))(a1);
		}

		static ::System::Void RecursiveDelete(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_RECURSIVEDELETE_OFFSET))(a1);
		}

		static ::System::Void Delete_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_DELETE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_EXISTS_OFFSET))(a1);
		}

		static ::System::String* GetCurrentDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETCURRENTDIRECTORY_OFFSET))();
		}

		static ::System::String* InsecureGetCurrentDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INSECUREGETCURRENTDIRECTORY_OFFSET))();
		}

		static ::System::Boolean IsRootDirectory(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ISROOTDIRECTORY_OFFSET))(a1);
		}

		static ::System::IO::DirectoryInfo* GetParent(::System::String* a1)
		{
			return ((::System::IO::DirectoryInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETPARENT_OFFSET))(a1);
		}

		static ::System::Void Move(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_MOVE_OFFSET))(a1, a2);
		}

		static ::System::Void SetCurrentDirectory(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_SETCURRENTDIRECTORY_OFFSET))(a1);
		}

		static ::System::String* GetDemandDir(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDEMANDDIR_OFFSET))(a1, a2);
		}
	};
}
