#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class FileSystemWatcher; }

#define SYSTEM_IO_DEFAULTWATCHERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA99E80)

namespace System::IO
{
	inline static constexpr unsigned int DefaultWatcherData_TypeDefinitionIndex = 3217;

	class DefaultWatcherData : public ::System::Object
	{
	public:
		::System::String* Directory; // 0x10
		::System::IO::FileSystemWatcher* FSW; // 0x18
		::System::String* FileMask; // 0x20
		::System::Collections::Hashtable* Files; // 0x28
		::System::Object* FilesLock; // 0x30
		::System::Boolean Enabled; // 0x38
		::System::Boolean NoWildcards; // 0x39
		::System::Boolean IncludeSubdirs; // 0x3A
		::System::DateTime DisabledTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHERDATA__CTOR_OFFSET))(this);
		}
	};
}
