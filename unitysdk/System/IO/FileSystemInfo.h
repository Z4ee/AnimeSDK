#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/MonoIOStat.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DDDD520)
#define SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DDDD3A0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIMEUTC_OFFSET UNITYSDK_OFFSET(0x1DDDCCD0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIME_OFFSET UNITYSDK_OFFSET(0x1DDDCB60)
#define SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x1DDDCA30)
#define SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1DDDCA20)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIMEUTC_OFFSET UNITYSDK_OFFSET(0x1DDDCF90)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIME_OFFSET UNITYSDK_OFFSET(0x1DDDCE20)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIMEUTC_OFFSET UNITYSDK_OFFSET(0x1DDDD250)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x1DDDD0E0)
#define SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x1DDDBD80)
#define SYSTEM_IO_FILESYSTEMINFO_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DDDD440)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDBC30)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDB7F0)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemInfo_TypeDefinitionIndex = 645;

	class FileSystemInfo : public ::System::MarshalByRefObject
	{
	public:
		::System::String* FullPath; // 0x18
		::System::String* OriginalPath; // 0x20
		::System::String* _displayPath; // 0x28
		::System::Int32 _dataInitialised; // 0x30
		::System::IO::MonoIOStat _data; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO__CTOR_1_OFFSET))(this, info, context);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET))(this);
		}

		::System::String* get_Extension()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET))(this);
		}

		::System::DateTime get_CreationTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIME_OFFSET))(this);
		}

		::System::DateTime get_CreationTimeUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_CREATIONTIMEUTC_OFFSET))(this);
		}

		::System::DateTime get_LastAccessTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIME_OFFSET))(this);
		}

		::System::DateTime get_LastAccessTimeUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LASTACCESSTIMEUTC_OFFSET))(this);
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

		::System::Void set_Attributes(::System::IO::FileAttributes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileAttributes))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_SET_ATTRIBUTES_OFFSET))(this, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
