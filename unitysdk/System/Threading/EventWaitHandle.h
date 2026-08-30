#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/EventResetMode.h"
#include "unitysdk/System/Threading/WaitHandle.h"

namespace System { class String; }

#define SYSTEM_THREADING_EVENTWAITHANDLE_RESET_OFFSET UNITYSDK_OFFSET(0x1B3E2D10)
#define SYSTEM_THREADING_EVENTWAITHANDLE_SET_OFFSET UNITYSDK_OFFSET(0x1B3E1170)
#define SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3E2A50)
#define SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DF0D0)

namespace System::Threading
{
	inline static constexpr unsigned int EventWaitHandle_TypeDefinitionIndex = 827;

	class EventWaitHandle : public ::System::Threading::WaitHandle
	{
	public:
		::System::Void _ctor(::System::Boolean a1, ::System::Threading::EventResetMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::EventResetMode))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Threading::EventResetMode a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Threading::EventResetMode, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EVENTWAITHANDLE__CTOR_1_OFFSET))(this, a1, a2, a3);
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
