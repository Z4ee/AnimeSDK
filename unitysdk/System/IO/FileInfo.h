#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileSystemInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::IO { class DirectoryInfo; }
namespace System::IO { class FileStream; }
namespace System::IO { class StreamWriter; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILEINFO_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x172EE760)
#define SYSTEM_IO_FILEINFO_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x172EE700)
#define SYSTEM_IO_FILEINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x172EE7C0)
#define SYSTEM_IO_FILEINFO_GETDISPLAYPATH_OFFSET UNITYSDK_OFFSET(0x172EE400)
#define SYSTEM_IO_FILEINFO_GET_DIRECTORYNAME_OFFSET UNITYSDK_OFFSET(0x172EE510)
#define SYSTEM_IO_FILEINFO_GET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0x172EE520)
#define SYSTEM_IO_FILEINFO_GET_EXISTS_OFFSET UNITYSDK_OFFSET(0x172EE850)
#define SYSTEM_IO_FILEINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x172EE590)
#define SYSTEM_IO_FILEINFO_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x172EE450)
#define SYSTEM_IO_FILEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x172EE440)
#define SYSTEM_IO_FILEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x172EE3C0)
#define SYSTEM_IO_FILEINFO_OPENREAD_OFFSET UNITYSDK_OFFSET(0x172EE940)
#define SYSTEM_IO_FILEINFO_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x172EE640)
#define SYSTEM_IO_FILEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B851E80)
#define SYSTEM_IO_FILEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172EE410)
#define SYSTEM_IO_FILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172E9370)

namespace System::IO
{
	inline static constexpr unsigned int FileInfo_TypeDefinitionIndex = 666;

	class FileInfo : public ::System::IO::FileSystemInfo
	{
	public:
		::System::String* _name; // 0x60

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Init(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::String* GetDisplayPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GETDISPLAYPATH_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_NAME_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_LENGTH_OFFSET))(this);
		}

		::System::String* get_DirectoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_DIRECTORYNAME_OFFSET))(this);
		}

		::System::IO::DirectoryInfo* get_Directory()
		{
			return ((::System::IO::DirectoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_DIRECTORY_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void set_IsReadOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_SET_ISREADONLY_OFFSET))(this, a1);
		}

		::System::IO::StreamWriter* CreateText()
		{
			return ((::System::IO::StreamWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_CREATETEXT_OFFSET))(this);
		}

		::System::IO::StreamWriter* AppendText()
		{
			return ((::System::IO::StreamWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_APPENDTEXT_OFFSET))(this);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_DELETE_OFFSET))(this);
		}

		::System::Boolean get_Exists()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_EXISTS_OFFSET))(this);
		}

		::System::IO::FileStream* OpenRead()
		{
			return ((::System::IO::FileStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_OPENREAD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_TOSTRING_OFFSET))(this);
		}
	};
}
