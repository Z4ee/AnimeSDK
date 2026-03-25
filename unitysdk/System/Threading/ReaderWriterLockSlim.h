#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/LockRecursionPolicy.h"
#include "unitysdk/System/Threading/ReaderWriterLockSlim_TimeoutTracker.h"

namespace System::Threading { class EventWaitHandle; }
namespace System::Threading { class ReaderWriterCount; }

#define SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARUPGRADERWAITING_OFFSET UNITYSDK_OFFSET(0x18516460)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARWRITERACQUIRED_OFFSET UNITYSDK_OFFSET(0x18516060)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARWRITERSWAITING_OFFSET UNITYSDK_OFFSET(0x18516450)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x185168A0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18516890)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERMYLOCKSPIN_OFFSET UNITYSDK_OFFSET(0x18516800)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERMYLOCK_OFFSET UNITYSDK_OFFSET(0x18516760)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERREADLOCK_OFFSET UNITYSDK_OFFSET(0x18513F60)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x185153B0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERWRITELOCK_OFFSET UNITYSDK_OFFSET(0x18514B50)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEREADWAITERS_OFFSET UNITYSDK_OFFSET(0x18516470)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEWAITERSPREFERRINGWRITERS_OFFSET UNITYSDK_OFFSET(0x185165B0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEWAITERS_OFFSET UNITYSDK_OFFSET(0x18515D60)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITMYLOCK_OFFSET UNITYSDK_OFFSET(0x185146D0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITREADLOCK_OFFSET UNITYSDK_OFFSET(0x18515AF0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x18516070)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITWRITELOCK_OFFSET UNITYSDK_OFFSET(0x18515D80)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GETNUMREADERS_OFFSET UNITYSDK_OFFSET(0x185153A0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GETTHREADRWCOUNT_OFFSET UNITYSDK_OFFSET(0x18513DC0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISREADLOCKHELD_OFFSET UNITYSDK_OFFSET(0x18516BA0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISUPGRADEABLEREADLOCKHELD_OFFSET UNITYSDK_OFFSET(0x18516C40)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISWRITELOCKHELD_OFFSET UNITYSDK_OFFSET(0x18516C60)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEREADCOUNT_OFFSET UNITYSDK_OFFSET(0x18516C80)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x18516D10)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEWRITECOUNT_OFFSET UNITYSDK_OFFSET(0x18516E50)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_WAITINGREADCOUNT_OFFSET UNITYSDK_OFFSET(0x18516F90)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_WAITINGUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x18516FA0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_WAITINGWRITECOUNT_OFFSET UNITYSDK_OFFSET(0x18516FB0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_INITIALIZETHREADCOUNTS_OFFSET UNITYSDK_OFFSET(0x18513CE0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ISRWENTRYEMPTY_OFFSET UNITYSDK_OFFSET(0x18513D60)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ISRWHASHENTRYCHANGED_OFFSET UNITYSDK_OFFSET(0x18513DA0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ISWRITERACQUIRED_OFFSET UNITYSDK_OFFSET(0x18515380)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_LAZYCREATEEVENT_OFFSET UNITYSDK_OFFSET(0x18514780)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SETUPGRADERWAITING_OFFSET UNITYSDK_OFFSET(0x185163D0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SETWRITERACQUIRED_OFFSET UNITYSDK_OFFSET(0x18515390)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SETWRITERSWAITING_OFFSET UNITYSDK_OFFSET(0x185163C0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SPINWAIT_OFFSET UNITYSDK_OFFSET(0x18514750)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCKCORE_OFFSET UNITYSDK_OFFSET(0x18514120)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_1_OFFSET UNITYSDK_OFFSET(0x18514110)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_OFFSET UNITYSDK_OFFSET(0x18513FA0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCKCORE_OFFSET UNITYSDK_OFFSET(0x185154C0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCK_1_OFFSET UNITYSDK_OFFSET(0x185154B0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x185153F0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCKCORE_OFFSET UNITYSDK_OFFSET(0x18514C60)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_1_OFFSET UNITYSDK_OFFSET(0x18514C50)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_OFFSET UNITYSDK_OFFSET(0x18514B90)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_WAITONEVENT_OFFSET UNITYSDK_OFFSET(0x185148D0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x18513CF0)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterLockSlim_TypeDefinitionIndex = 3104;

	class ReaderWriterLockSlim : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_s_nextLockID()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(ReaderWriterLockSlim_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Threading::ReaderWriterCount** StaticGet_t_rwc()
		{
			return (::System::Threading::ReaderWriterCount**)Il2CppClass::FromTypeDefinitionIndex(ReaderWriterLockSlim_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Threading::EventWaitHandle* readEvent; // 0x10
		::System::Threading::EventWaitHandle* upgradeEvent; // 0x18
		::System::Threading::EventWaitHandle* waitUpgradeEvent; // 0x20
		::System::Threading::EventWaitHandle* writeEvent; // 0x28
		::System::Boolean fIsReentrant; // 0x30
		::System::Boolean fDisposed; // 0x31
		::System::Boolean fUpgradeThreadHoldingRead; // 0x32
		::System::Boolean fNoWaiters; // 0x33
		::System::UInt32 numReadWaiters; // 0x34
		::System::Int32 upgradeLockOwnerId; // 0x38
		::System::Int64 lockID; // 0x40
		::System::UInt32 owners; // 0x48
		::System::UInt32 numUpgradeWaiters; // 0x4C
		::System::Int32 writeLockOwnerId; // 0x50
		::System::UInt32 numWriteWaiters; // 0x54
		::System::Int32 myLock; // 0x58
		::System::UInt32 numWriteUpgradeWaiters; // 0x5C

		::System::Void _ctor(::System::Threading::LockRecursionPolicy recursionPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::LockRecursionPolicy))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM__CTOR_OFFSET))(this, recursionPolicy);
		}

		::System::Void InitializeThreadCounts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_INITIALIZETHREADCOUNTS_OFFSET))(this);
		}

		static ::System::Boolean IsRWEntryEmpty(::System::Threading::ReaderWriterCount* rwc)
		{
			return ((::System::Boolean(*)(::System::Threading::ReaderWriterCount*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ISRWENTRYEMPTY_OFFSET))(rwc);
		}

		::System::Boolean IsRwHashEntryChanged(::System::Threading::ReaderWriterCount* lrwc)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterCount*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ISRWHASHENTRYCHANGED_OFFSET))(this, lrwc);
		}

		::System::Threading::ReaderWriterCount* GetThreadRWCount(::System::Boolean dontAllocate)
		{
			return ((::System::Threading::ReaderWriterCount*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GETTHREADRWCOUNT_OFFSET))(this, dontAllocate);
		}

		::System::Void EnterReadLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERREADLOCK_OFFSET))(this);
		}

		::System::Boolean TryEnterReadLock(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean TryEnterReadLock_1(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_1_OFFSET))(this, timeout);
		}

		::System::Boolean TryEnterReadLockCore(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCKCORE_OFFSET))(this, timeout);
		}

		::System::Void EnterWriteLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERWRITELOCK_OFFSET))(this);
		}

		::System::Boolean TryEnterWriteLock(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean TryEnterWriteLock_1(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_1_OFFSET))(this, timeout);
		}

		::System::Boolean TryEnterWriteLockCore(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCKCORE_OFFSET))(this, timeout);
		}

		::System::Void EnterUpgradeableReadLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERUPGRADEABLEREADLOCK_OFFSET))(this);
		}

		::System::Boolean TryEnterUpgradeableReadLock(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCK_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean TryEnterUpgradeableReadLock_1(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCK_1_OFFSET))(this, timeout);
		}

		::System::Boolean TryEnterUpgradeableReadLockCore(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCKCORE_OFFSET))(this, timeout);
		}

		::System::Void ExitReadLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITREADLOCK_OFFSET))(this);
		}

		::System::Void ExitWriteLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITWRITELOCK_OFFSET))(this);
		}

		::System::Void ExitUpgradeableReadLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITUPGRADEABLEREADLOCK_OFFSET))(this);
		}

		::System::Void LazyCreateEvent(::System::Threading::EventWaitHandle*& waitEvent, ::System::Boolean makeAutoResetEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::EventWaitHandle*&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_LAZYCREATEEVENT_OFFSET))(this, waitEvent, makeAutoResetEvent);
		}

		::System::Boolean WaitOnEvent(::System::Threading::EventWaitHandle* waitEvent, ::System::UInt32& numWaiters, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout, ::System::Boolean isWriteWaiter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::EventWaitHandle*, ::System::UInt32&, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_WAITONEVENT_OFFSET))(this, waitEvent, numWaiters, timeout, isWriteWaiter);
		}

		::System::Void ExitAndWakeUpAppropriateWaiters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEWAITERS_OFFSET))(this);
		}

		::System::Void ExitAndWakeUpAppropriateWaitersPreferringWriters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEWAITERSPREFERRINGWRITERS_OFFSET))(this);
		}

		::System::Void ExitAndWakeUpAppropriateReadWaiters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEREADWAITERS_OFFSET))(this);
		}

		::System::Boolean IsWriterAcquired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ISWRITERACQUIRED_OFFSET))(this);
		}

		::System::Void SetWriterAcquired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_SETWRITERACQUIRED_OFFSET))(this);
		}

		::System::Void ClearWriterAcquired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARWRITERACQUIRED_OFFSET))(this);
		}

		::System::Void SetWritersWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_SETWRITERSWAITING_OFFSET))(this);
		}

		::System::Void ClearWritersWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARWRITERSWAITING_OFFSET))(this);
		}

		::System::Void SetUpgraderWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_SETUPGRADERWAITING_OFFSET))(this);
		}

		::System::Void ClearUpgraderWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARUPGRADERWAITING_OFFSET))(this);
		}

		::System::UInt32 GetNumReaders()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GETNUMREADERS_OFFSET))(this);
		}

		::System::Void EnterMyLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERMYLOCK_OFFSET))(this);
		}

		::System::Void EnterMyLockSpin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERMYLOCKSPIN_OFFSET))(this);
		}

		::System::Void ExitMyLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITMYLOCK_OFFSET))(this);
		}

		static ::System::Void SpinWait(::System::Int32 SpinCount)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_SPINWAIT_OFFSET))(SpinCount);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean get_IsReadLockHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISREADLOCKHELD_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeableReadLockHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISUPGRADEABLEREADLOCKHELD_OFFSET))(this);
		}

		::System::Boolean get_IsWriteLockHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISWRITELOCKHELD_OFFSET))(this);
		}

		::System::Int32 get_RecursiveReadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEREADCOUNT_OFFSET))(this);
		}

		::System::Int32 get_RecursiveUpgradeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEUPGRADECOUNT_OFFSET))(this);
		}

		::System::Int32 get_RecursiveWriteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEWRITECOUNT_OFFSET))(this);
		}

		::System::Int32 get_WaitingReadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_WAITINGREADCOUNT_OFFSET))(this);
		}

		::System::Int32 get_WaitingUpgradeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_WAITINGUPGRADECOUNT_OFFSET))(this);
		}

		::System::Int32 get_WaitingWriteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_WAITINGWRITECOUNT_OFFSET))(this);
		}
	};
}
