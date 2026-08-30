#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/IO/FileAttributes.h"
#include "unitysdk/System/IO/MonoIOStat.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D464D90)
#define SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D464C20)
#define SYSTEM_IO_FILESYSTEMINFO_GET_DISPLAYPATH_OFFSET UNITYSDK_OFFSET(0x1D464E50)
#define SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x1D464270)
#define SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1D464260)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIMEUTC_OFFSET UNITYSDK_OFFSET(0x1D4643F0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x1D464300)
#define SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x1D4644D0)
#define SYSTEM_IO_FILESYSTEMINFO_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D464CA0)
#define SYSTEM_IO_FILESYSTEMINFO_SET_DISPLAYPATH_OFFSET UNITYSDK_OFFSET(0x1D464E60)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4641A0)
#define SYSTEM_IO_FILESYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D464170)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemInfo_TypeDefinitionIndex = 679;

	class FileSystemInfo : public ::System::MarshalByRefObject
	{
	public:
		::System::String* FullPath; // 0x18
		::System::String* _displayPath; // 0x20
		::System::String* OriginalPath; // 0x28
		::System::Int32 _dataInitialised; // 0x30
		::System::IO::MonoIOStat _data; // 0x38

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
