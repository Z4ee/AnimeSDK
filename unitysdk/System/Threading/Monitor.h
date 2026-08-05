#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_MONITOR_ENTER_1_OFFSET UNITYSDK_OFFSET(0x1DF38200)
#define SYSTEM_THREADING_MONITOR_ENTER_OFFSET UNITYSDK_OFFSET(0x1DF46090)
#define SYSTEM_THREADING_MONITOR_EXIT_OFFSET UNITYSDK_OFFSET(0x1DF38300)
#define SYSTEM_THREADING_MONITOR_MONITOR_PULSE_ALL_OFFSET UNITYSDK_OFFSET(0x1DF46990)
#define SYSTEM_THREADING_MONITOR_MONITOR_PULSE_OFFSET UNITYSDK_OFFSET(0x1DF46960)
#define SYSTEM_THREADING_MONITOR_MONITOR_TEST_SYNCHRONISED_OFFSET UNITYSDK_OFFSET(0x1DF46910)
#define SYSTEM_THREADING_MONITOR_MONITOR_WAIT_OFFSET UNITYSDK_OFFSET(0x1DF469C0)
#define SYSTEM_THREADING_MONITOR_OBJPULSEALL_OFFSET UNITYSDK_OFFSET(0x1DF46870)
#define SYSTEM_THREADING_MONITOR_OBJPULSE_OFFSET UNITYSDK_OFFSET(0x1DF466F0)
#define SYSTEM_THREADING_MONITOR_OBJWAIT_OFFSET UNITYSDK_OFFSET(0x1DF463F0)
#define SYSTEM_THREADING_MONITOR_PULSEALL_OFFSET UNITYSDK_OFFSET(0x1DF46790)
#define SYSTEM_THREADING_MONITOR_PULSE_OFFSET UNITYSDK_OFFSET(0x1DF46610)
#define SYSTEM_THREADING_MONITOR_RELIABLEENTERTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1DF462B0)
#define SYSTEM_THREADING_MONITOR_RELIABLEENTER_OFFSET UNITYSDK_OFFSET(0x1DF46120)
#define SYSTEM_THREADING_MONITOR_THROWLOCKTAKENEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DF460C0)
#define SYSTEM_THREADING_MONITOR_TRYENTER_OFFSET UNITYSDK_OFFSET(0x1DF461C0)
#define SYSTEM_THREADING_MONITOR_TRY_ENTER_WITH_ATOMIC_VAR_OFFSET UNITYSDK_OFFSET(0x1DF469F0)
#define SYSTEM_THREADING_MONITOR_WAIT_1_OFFSET UNITYSDK_OFFSET(0x1DF464C0)
#define SYSTEM_THREADING_MONITOR_WAIT_2_OFFSET UNITYSDK_OFFSET(0x1DF46530)
#define SYSTEM_THREADING_MONITOR_WAIT_OFFSET UNITYSDK_OFFSET(0x1DF46380)

namespace System::Threading
{
	inline static constexpr unsigned int Monitor_TypeDefinitionIndex = 823;

	class Monitor : public ::System::Object
	{
	public:
		static ::System::Void Enter(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_ENTER_OFFSET))(obj);
		}

		static ::System::Void Enter_1(::System::Object* obj, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_ENTER_1_OFFSET))(obj, lockTaken);
		}

		static ::System::Void ThrowLockTakenException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_THROWLOCKTAKENEXCEPTION_OFFSET))();
		}

		static ::System::Void Exit(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_EXIT_OFFSET))(obj);
		}

		static ::System::Void TryEnter(::System::Object* obj, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_TRYENTER_OFFSET))(obj, lockTaken);
		}

		static ::System::Boolean Wait(::System::Object* obj, ::System::Int32 millisecondsTimeout, ::System::Boolean exitContext)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_OFFSET))(obj, millisecondsTimeout, exitContext);
		}

		static ::System::Boolean Wait_1(::System::Object* obj, ::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_1_OFFSET))(obj, millisecondsTimeout);
		}

		static ::System::Boolean Wait_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_2_OFFSET))(obj);
		}

		static ::System::Void Pulse(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_PULSE_OFFSET))(obj);
		}

		static ::System::Void PulseAll(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_PULSEALL_OFFSET))(obj);
		}

		static ::System::Boolean Monitor_test_synchronised(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_TEST_SYNCHRONISED_OFFSET))(obj);
		}

		static ::System::Void Monitor_pulse(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_PULSE_OFFSET))(obj);
		}

		static ::System::Void ObjPulse(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJPULSE_OFFSET))(obj);
		}

		static ::System::Void Monitor_pulse_all(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_PULSE_ALL_OFFSET))(obj);
		}

		static ::System::Void ObjPulseAll(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJPULSEALL_OFFSET))(obj);
		}

		static ::System::Boolean Monitor_wait(::System::Object* obj, ::System::Int32 ms)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_WAIT_OFFSET))(obj, ms);
		}

		static ::System::Boolean ObjWait(::System::Boolean exitContext, ::System::Int32 millisecondsTimeout, ::System::Object* obj)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJWAIT_OFFSET))(exitContext, millisecondsTimeout, obj);
		}

		static ::System::Void try_enter_with_atomic_var(::System::Object* obj, ::System::Int32 millisecondsTimeout, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_TRY_ENTER_WITH_ATOMIC_VAR_OFFSET))(obj, millisecondsTimeout, lockTaken);
		}

		static ::System::Void ReliableEnterTimeout(::System::Object* obj, ::System::Int32 timeout, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_RELIABLEENTERTIMEOUT_OFFSET))(obj, timeout, lockTaken);
		}

		static ::System::Void ReliableEnter(::System::Object* obj, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_RELIABLEENTER_OFFSET))(obj, lockTaken);
		}
	};
}
