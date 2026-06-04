#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/MonoIOStat.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18717EF0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18717D80)
#define SYSTEM_IO_FILESYSTEMINFO_GET_DISPLAYPATH_OFFSET UNITYSDK_OFFSET(0x18717FB0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x187173D0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x187173C0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIMEUTC_OFFSET UNITYSDK_OFFSET(0x18717550)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x18717460)
#define SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x18717630)
#define SYSTEM_IO_FILESYSTEMINFO_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18717E00)
#define SYSTEM_IO_FILESYSTEMINFO_SET_DISPLAYPATH_OFFSET UNITYSDK_OFFSET(0x18717FC0)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18717300)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x187172D0)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemInfo_TypeDefinitionIndex = 676;

	class FileSystemInfo : public ::System::MarshalByRefObject
	{
	public:
		::System::String* _displayPath; // 0x18
		::System::String* OriginalPath; // 0x20
		::System::String* FullPath; // 0x28
		::System::IO::MonoIOStat _data; // 0x30
		::System::Int32 _dataInitialised; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET))(this);
		}

		::System::String* get_Extension()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET))(this);
		}

		::System::DateTime get_LastWriteTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIME_OFFSET))(this);
		}

		::System::DateTime get_LastWriteTimeUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIMEUTC_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET))(this);
		}

		::System::IO::FileAttributes get_Attributes()
		{
			return ((::System::IO::FileAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::System::IO::FileAttributes a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileAttributes))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_SET_ATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* get_DisplayPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_DISPLAYPATH_OFFSET))(this);
		}

		::System::Void set_DisplayPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_SET_DISPLAYPATH_OFFSET))(this, a1);
		}
	};
}
