#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/WatcherChangeTypes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_OLDNAME_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_TIMEDOUT_OFFSET UNITYSDK_OFFSET(0x4107A0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_OLDNAME_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_TIMEDOUT_OFFSET UNITYSDK_OFFSET(0x48E360)

namespace System::IO
{
	inline static constexpr unsigned int WaitForChangedResult_TypeDefinitionIndex = 3237;

	struct alignas(8) WaitForChangedResult
	{
		::System::IO::WatcherChangeTypes changeType; // 0x10
		::System::String* name; // 0x18
		::System::String* oldName; // 0x20
		::System::Boolean timedOut; // 0x28

		::System::IO::WatcherChangeTypes get_ChangeType()
		{
			return ((::System::IO::WatcherChangeTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Void set_ChangeType(::System::IO::WatcherChangeTypes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::WatcherChangeTypes))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_SET_CHANGETYPE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_OldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_GET_OLDNAME_OFFSET))(this);
		}

		::System::Void set_OldName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_SET_OLDNAME_OFFSET))(this, value);
		}

		::System::Boolean get_TimedOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_GET_TIMEDOUT_OFFSET))(this);
		}

		::System::Void set_TimedOut(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_WAITFORCHANGEDRESULT_SET_TIMEDOUT_OFFSET))(this, value);
		}
	};
}
