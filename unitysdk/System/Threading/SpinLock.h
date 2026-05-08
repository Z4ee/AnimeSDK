#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTERWITHTHREADTRACKING_OFFSET UNITYSDK_OFFSET(0x8FEA00)
#define SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTER_OFFSET UNITYSDK_OFFSET(0x8FE990)
#define SYSTEM_THREADING_SPINLOCK_DECREMENTWAITERS_OFFSET UNITYSDK_OFFSET(0x8FE9A0)
#define SYSTEM_THREADING_SPINLOCK_ENTER_OFFSET UNITYSDK_OFFSET(0x8FE8A0)
#define SYSTEM_THREADING_SPINLOCK_EXITSLOWPATH_OFFSET UNITYSDK_OFFSET(0x8FEA50)
#define SYSTEM_THREADING_SPINLOCK_EXIT_OFFSET UNITYSDK_OFFSET(0x8FEA10)
#define SYSTEM_THREADING_SPINLOCK_GET_ISHELDBYCURRENTTHREAD_OFFSET UNITYSDK_OFFSET(0x8FEA60)
#define SYSTEM_THREADING_SPINLOCK_GET_ISTHREADOWNERTRACKINGENABLED_OFFSET UNITYSDK_OFFSET(0x8FEA70)
#define SYSTEM_THREADING_SPINLOCK_TRYENTER_OFFSET UNITYSDK_OFFSET(0x8FE910)
#define SYSTEM_THREADING_SPINLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7D0210)
#define SYSTEM_THREADING_SPINLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x8FE880)

namespace System::Threading
{
	inline static constexpr unsigned int SpinLock_TypeDefinitionIndex = 798;

	struct alignas(4) SpinLock
	{
		static ::System::Int32* StaticGet_MAXIMUM_WAITERS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpinLock_TypeDefinitionIndex)->GetStaticField(0xCE0);
		}
		::System::Int32 m_owner; // 0x10

		::System::Void _ctor(::System::Boolean enableThreadOwnerTracking)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK__CTOR_OFFSET))(this, enableThreadOwnerTracking);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK__CCTOR_OFFSET))();
		}

		::System::Void Enter(::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_ENTER_OFFSET))(this, lockTaken);
		}

		::System::Void TryEnter(::System::Int32 millisecondsTimeout, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_TRYENTER_OFFSET))(this, millisecondsTimeout, lockTaken);
		}

		::System::Void ContinueTryEnter(::System::Int32 millisecondsTimeout, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTER_OFFSET))(this, millisecondsTimeout, lockTaken);
		}

		::System::Void DecrementWaiters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_DECREMENTWAITERS_OFFSET))(this);
		}

		::System::Void ContinueTryEnterWithThreadTracking(::System::Int32 millisecondsTimeout, ::System::UInt32 startTime, ::System::Boolean& lockTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTERWITHTHREADTRACKING_OFFSET))(this, millisecondsTimeout, startTime, lockTaken);
		}

		::System::Void Exit(::System::Boolean useMemoryBarrier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_EXIT_OFFSET))(this, useMemoryBarrier);
		}

		::System::Void ExitSlowPath(::System::Boolean useMemoryBarrier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_EXITSLOWPATH_OFFSET))(this, useMemoryBarrier);
		}

		::System::Boolean get_IsHeldByCurrentThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_GET_ISHELDBYCURRENTTHREAD_OFFSET))(this);
		}

		::System::Boolean get_IsThreadOwnerTrackingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_GET_ISTHREADOWNERTRACKINGENABLED_OFFSET))(this);
		}
	};
}
