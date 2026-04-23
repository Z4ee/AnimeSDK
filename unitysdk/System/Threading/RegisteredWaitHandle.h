#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }
namespace System::Threading { class WaitOrTimerCallback; }

#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x17865D50)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x17865F80)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE_WAIT_OFFSET UNITYSDK_OFFSET(0x17865200)
#define SYSTEM_THREADING_REGISTEREDWAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17865190)

namespace System::Threading
{
	inline static constexpr unsigned int RegisteredWaitHandle_TypeDefinitionIndex = 874;

	class RegisteredWaitHandle : public ::System::MarshalByRefObject
	{
	public:
		::System::Threading::WaitHandle* _finalEvent; // 0x18
		::System::Threading::WaitHandle* _waitObject; // 0x20
		::System::Object* _state; // 0x28
		::System::Threading::WaitOrTimerCallback* _callback; // 0x30
		::System::Threading::ManualResetEvent* _cancelEvent; // 0x38
		::System::TimeSpan _timeout; // 0x40
		::System::Boolean _executeOnlyOnce; // 0x48
		::System::Boolean _unregistered; // 0x49
		::System::Int32 _callsInProcess; // 0x4C

		::System::Void _ctor(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callback, ::System::Object* state, ::System::TimeSpan timeout, ::System::Boolean executeOnlyOnce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE__CTOR_OFFSET))(this, waitObject, callback, state, timeout, executeOnlyOnce);
		}

		::System::Void Wait(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_WAIT_OFFSET))(this, state);
		}

		::System::Void DoCallBack(::System::Object* timedOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_DOCALLBACK_OFFSET))(this, timedOut);
		}

		::System::Boolean Unregister(::System::Threading::WaitHandle* waitObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::WaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_REGISTEREDWAITHANDLE_UNREGISTER_OFFSET))(this, waitObject);
		}
	};
}
