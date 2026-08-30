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

#define SYSTEM_IO_DIRECTORYINFO_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x18DA9860)
#define SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEDIRECTORIESITERATOR_OFFSET UNITYSDK_OFFSET(0x18DAA8C0)
#define SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEFILESITERATOR_OFFSET UNITYSDK_OFFSET(0x18DAAA90)
#define SYSTEM_IO_DIRECTORYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x18DA8870)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_1_OFFSET UNITYSDK_OFFSET(0x18DAA020)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x18DA9FF0)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x18DAA800)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x18DAA7F0)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_1_OFFSET UNITYSDK_OFFSET(0x18DAA9F0)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x18DAA950)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_1_OFFSET UNITYSDK_OFFSET(0x18DA9E00)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x18DA9DF0)
#define SYSTEM_IO_DIRECTORYINFO_GETFILESSUBDIRS_OFFSET UNITYSDK_OFFSET(0x18DAA070)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_1_OFFSET UNITYSDK_OFFSET(0x18DA9B30)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_2_OFFSET UNITYSDK_OFFSET(0x18DAA230)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET UNITYSDK_OFFSET(0x18DA9B20)
#define SYSTEM_IO_DIRECTORYINFO_GET_EXISTS_OFFSET UNITYSDK_OFFSET(0x18DA87F0)
#define SYSTEM_IO_DIRECTORYINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18DA9B10)
#define SYSTEM_IO_DIRECTORYINFO_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x18DA8780)
#define SYSTEM_IO_DIRECTORYINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18DA9980)
#define SYSTEM_IO_DIRECTORYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18DAA060)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18DA8720)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18DA9AF0)
#define SYSTEM_IO_DIRECTORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA9110)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryInfo_TypeDefinitionIndex = 708;

	class DirectoryInfo : public ::System::IO::FileSystemInfo
	{
	public:
		::System::String* parent; // 0x60
		::System::String* current; // 0x68

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO__CTOR_2_OFFSET))(this, a1, a2);
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

		::Il2CppArray<::System::IO::FileInfo*>* GetFiles_1(::System::String* a1)
		{
			return ((::Il2CppArray<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::IO::DirectoryInfo*>* GetDirectories()
		{
			return ((::Il2CppArray<::System::IO::DirectoryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET))(this);
		}

		::Il2CppArray<::System::IO::DirectoryInfo*>* GetDirectories_1(::System::String* a1)
		{
			return ((::Il2CppArray<::System::IO::DirectoryInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_1_OFFSET))(this, a1);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET))(this);
		}

		::System::Void Delete_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_DELETE_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetFilesSubdirs(::System::Collections::ArrayList* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::ArrayList*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILESSUBDIRS_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::IO::FileInfo*>* GetFiles_2(::System::String* a1, ::System::IO::SearchOption a2)
		{
			return ((::Il2CppArray<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_2_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* EnumerateDirectories()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* EnumerateDirectories_1(::System::String* a1, ::System::IO::SearchOption a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>* CreateEnumerateDirectoriesIterator(::System::String* a1, ::System::IO::SearchOption a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::DirectoryInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEDIRECTORIESITERATOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* EnumerateFiles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* EnumerateFiles_1(::System::String* a1, ::System::IO::SearchOption a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* CreateEnumerateFilesIterator(::System::String* a1, ::System::IO::SearchOption a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::PVOID, ::System::String*, ::System::IO::SearchOption))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CREATEENUMERATEFILESITERATOR_OFFSET))(this, a1, a2);
		}

		::System::Void CheckPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_CHECKPATH_OFFSET))(this, a1);
		}
	};
}
