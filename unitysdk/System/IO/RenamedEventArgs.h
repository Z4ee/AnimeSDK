#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileSystemEventArgs.h"
#include "unitysdk/System/IO/WatcherChangeTypes.h"

namespace System { class String; }

#define SYSTEM_IO_RENAMEDEVENTARGS_GET_OLDFULLPATH_OFFSET UNITYSDK_OFFSET(0x1C6D1420)
#define SYSTEM_IO_RENAMEDEVENTARGS_GET_OLDNAME_OFFSET UNITYSDK_OFFSET(0x1C6D1430)
#define SYSTEM_IO_RENAMEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D1390)

namespace System::IO
{
	inline static constexpr unsigned int RenamedEventArgs_TypeDefinitionIndex = 3232;

	class RenamedEventArgs : public ::System::IO::FileSystemEventArgs
	{
	public:
		::System::String* oldName; // 0x28
		::System::String* oldFullPath; // 0x30

		::System::Void _ctor(::System::IO::WatcherChangeTypes changeType, ::System::String* directory, ::System::String* name, ::System::String* oldName)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::WatcherChangeTypes, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_RENAMEDEVENTARGS__CTOR_OFFSET))(this, changeType, directory, name, oldName);
		}

		::System::String* get_OldFullPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_RENAMEDEVENTARGS_GET_OLDFULLPATH_OFFSET))(this);
		}

		::System::String* get_OldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_RENAMEDEVENTARGS_GET_OLDNAME_OFFSET))(this);
		}
	};
}
