#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_MONITOR_ENTER_1_OFFSET UNITYSDK_OFFSET(0x1BC0BE70)
#define SYSTEM_THREADING_MONITOR_ENTER_OFFSET UNITYSDK_OFFSET(0x1BC3CAA0)
#define SYSTEM_THREADING_MONITOR_EXIT_OFFSET UNITYSDK_OFFSET(0x1BC0BF30)
#define SYSTEM_THREADING_MONITOR_MONITOR_PULSE_ALL_OFFSET UNITYSDK_OFFSET(0x1BC3D120)
#define SYSTEM_THREADING_MONITOR_MONITOR_PULSE_OFFSET UNITYSDK_OFFSET(0x1BC3D080)
#define SYSTEM_THREADING_MONITOR_MONITOR_TEST_SYNCHRONISED_OFFSET UNITYSDK_OFFSET(0x1BC3D030)
#define SYSTEM_THREADING_MONITOR_MONITOR_WAIT_OFFSET UNITYSDK_OFFSET(0x1BC3D150)
#define SYSTEM_THREADING_MONITOR_OBJPULSEALL_OFFSET UNITYSDK_OFFSET(0x1BC3CFB0)
#define SYSTEM_THREADING_MONITOR_OBJPULSE_OFFSET UNITYSDK_OFFSET(0x1BC3CF30)
#define SYSTEM_THREADING_MONITOR_OBJWAIT_OFFSET UNITYSDK_OFFSET(0x1BC3CD40)
#define SYSTEM_THREADING_MONITOR_PULSEALL_OFFSET UNITYSDK_OFFSET(0x1BC3BCF0)
#define SYSTEM_THREADING_MONITOR_PULSE_OFFSET UNITYSDK_OFFSET(0x1BC3CE80)
#define SYSTEM_THREADING_MONITOR_RELIABLEENTERTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BC3CC50)
#define SYSTEM_THREADING_MONITOR_RELIABLEENTER_OFFSET UNITYSDK_OFFSET(0x1BC3CB30)
#define SYSTEM_THREADING_MONITOR_THROWLOCKTAKENEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BC3CAD0)
#define SYSTEM_THREADING_MONITOR_TRYENTER_OFFSET UNITYSDK_OFFSET(0x1BC3CBA0)
#define SYSTEM_THREADING_MONITOR_TRY_ENTER_WITH_ATOMIC_VAR_OFFSET UNITYSDK_OFFSET(0x1BC3D180)
#define SYSTEM_THREADING_MONITOR_WAIT_1_OFFSET UNITYSDK_OFFSET(0x1BC3C750)
#define SYSTEM_THREADING_MONITOR_WAIT_2_OFFSET UNITYSDK_OFFSET(0x1BC3CDF0)
#define SYSTEM_THREADING_MONITOR_WAIT_OFFSET UNITYSDK_OFFSET(0x1BC3CCF0)

namespace System::Threading
{
	inline static constexpr unsigned int Monitor_TypeDefinitionIndex = 837;

	class Monitor : public ::System::Object
	{
	public:
		static ::System::Void Enter(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_ENTER_OFFSET))(a1);
		}

		static ::System::Void Enter_1(::System::Object* a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_ENTER_1_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowLockTakenException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_THROWLOCKTAKENEXCEPTION_OFFSET))();
		}

		static ::System::Void Exit(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_EXIT_OFFSET))(a1);
		}

		static ::System::Void TryEnter(::System::Object* a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_TRYENTER_OFFSET))(a1, a2);
		}

		static ::System::Boolean Wait(::System::Object* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Wait_1(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Wait_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_2_OFFSET))(a1);
		}

		static ::System::Void Pulse(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_PULSE_OFFSET))(a1);
		}

		static ::System::Void PulseAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_PULSEALL_OFFSET))(a1);
		}

		static ::System::Boolean Monitor_test_synchronised(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_TEST_SYNCHRONISED_OFFSET))(a1);
		}

		static ::System::Void Monitor_pulse(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_PULSE_OFFSET))(a1);
		}

		static ::System::Void ObjPulse(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJPULSE_OFFSET))(a1);
		}

		static ::System::Void Monitor_pulse_all(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_PULSE_ALL_OFFSET))(a1);
		}

		static ::System::Void ObjPulseAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJPULSEALL_OFFSET))(a1);
		}

		static ::System::Boolean Monitor_wait(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_WAIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean ObjWait(::System::Boolean a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJWAIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void try_enter_with_atomic_var(::System::Object* a1, ::System::Int32 a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_TRY_ENTER_WITH_ATOMIC_VAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReliableEnterTimeout(::System::Object* a1, ::System::Int32 a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_RELIABLEENTERTIMEOUT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReliableEnter(::System::Object* a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_RELIABLEENTER_OFFSET))(a1, a2);
		}
	};
}
