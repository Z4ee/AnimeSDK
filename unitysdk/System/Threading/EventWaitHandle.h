#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/EventResetMode.h"
#include "unitysdk/System/Threading/WaitHandle.h"

namespace System { class String; }

#define SYSTEM_THREADING_EVENTWAITHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x16233010)
#define SYSTEM_THREADING_EVENTWAITHANDLE_SET_OFFSET UNITYSDK_OFFSET(0x16231400)
#define SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16232D80)
#define SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1622F2F0)

namespace System::Threading
{
	inline static constexpr unsigned int EventWaitHandle_TypeDefinitionIndex = 823;

	class EventWaitHandle : public ::System::Threading::WaitHandle
	{
	public:
		::System::Void _ctor(::System::Boolean initialState, ::System::Threading::EventResetMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::EventResetMode))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_OFFSET))(this, initialState, mode);
		}

		::System::Void _ctor_1(::System::Boolean initialState, ::System::Threading::EventResetMode mode, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::EventResetMode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_1_OFFSET))(this, initialState, mode, name);
		}

		::System::Boolean Reset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE_RESET_OFFSET))(this);
		}

		::System::Boolean Set()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE_SET_OFFSET))(this);
		}
	};
}
