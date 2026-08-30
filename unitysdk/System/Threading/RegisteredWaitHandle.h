#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }
namespace System::Threading { class WaitOrTimerCallback; }

#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3E8920)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1B3E8AB0)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_WAIT_OFFSET UNITYSDK_OFFSET(0x1B3E7F50)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E7EE0)

namespace System::Threading
{
	inline static constexpr unsigned int RegisteredWaitHandle_TypeDefinitionIndex = 877;

	class RegisteredWaitHandle : public ::System::MarshalByRefObject
	{
	public:
		::System::Object* _state; // 0x18
		::System::Threading::WaitHandle* _finalEvent; // 0x20
		::System::Threading::WaitHandle* _waitObject; // 0x28
		::System::Threading::WaitOrTimerCallback* _callback; // 0x30
		::System::Threading::ManualResetEvent* _cancelEvent; // 0x38
		::System::TimeSpan _timeout; // 0x40
		::System::Boolean _unregistered; // 0x48
		::System::Boolean _executeOnlyOnce; // 0x49
		::System::Int32 _callsInProcess; // 0x4C

		::System::Void _ctor(::System::Threading::WaitHandle* a1, ::System::Threading::WaitOrTimerCallback* a2, ::System::Object* a3, ::System::TimeSpan a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Wait(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_WAIT_OFFSET))(this, a1);
		}

		::System::Void DoCallBack(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_DOCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean Unregister(::System::Threading::WaitHandle* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_UNREGISTER_OFFSET))(this, a1);
		}
	};
}
