#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/IO/WatcherChangeTypes.h"

namespace System { class String; }

#define SYSTEM_IO_FILESYSTEMEVENTARGS_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C64F480)
#define SYSTEM_IO_FILESYSTEMEVENTARGS_GET_FULLPATH_OFFSET UNITYSDK_OFFSET(0x1C64F490)
#define SYSTEM_IO_FILESYSTEMEVENTARGS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C64F4A0)
#define SYSTEM_IO_FILESYSTEMEVENTARGS_SETNAME_OFFSET UNITYSDK_OFFSET(0x1C64F470)
#define SYSTEM_IO_FILESYSTEMEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64F400)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemEventArgs_TypeDefinitionIndex = 3222;

	class FileSystemEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* directory; // 0x10
		::System::String* name; // 0x18
		::System::IO::WatcherChangeTypes changeType; // 0x20

		::System::Void _ctor(::System::IO::WatcherChangeTypes changeType, ::System::String* directory, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::WatcherChangeTypes, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTARGS__CTOR_OFFSET))(this, changeType, directory, name);
		}

		::System::Void SetName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTARGS_SETNAME_OFFSET))(this, name);
		}

		::System::IO::WatcherChangeTypes get_ChangeType()
		{
			return ((::System::IO::WatcherChangeTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTARGS_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::String* get_FullPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTARGS_GET_FULLPATH_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTARGS_GET_NAME_OFFSET))(this);
		}
	};
}
