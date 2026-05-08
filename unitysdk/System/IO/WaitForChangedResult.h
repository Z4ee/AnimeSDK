#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/WatcherChangeTypes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x28B580)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_OLDNAME_OFFSET UNITYSDK_OFFSET(0x381840)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_GET_TIMEDOUT_OFFSET UNITYSDK_OFFSET(0x3F06C0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x381830)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_OLDNAME_OFFSET UNITYSDK_OFFSET(0x381850)
#define SYSTEM_IO_WAITFORCHANGEDRESULT_SET_TIMEDOUT_OFFSET UNITYSDK_OFFSET(0x6866F0)

namespace System::IO
{
	inline static constexpr unsigned int WaitForChangedResult_TypeDefinitionIndex = 3238;

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
