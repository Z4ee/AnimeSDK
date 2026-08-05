#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/LockRecursionPolicy.h"
#include "unitysdk/System/Threading/ReaderWriterLockSlim_TimeoutTracker.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Threading { class EventWaitHandle; }
namespace System::Threading { class ReaderWriterCount; }

#define SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARUPGRADERWAITING_OFFSET UNITYSDK_OFFSET(0x1E5A7110)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARWRITERACQUIRED_OFFSET UNITYSDK_OFFSET(0x1E5A6E30)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_CLEARWRITERSWAITING_OFFSET UNITYSDK_OFFSET(0x1E5A7100)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E5A7510)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5A7500)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERMYLOCKSPIN_OFFSET UNITYSDK_OFFSET(0x1E5A7430)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERMYLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A7410)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERREADLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A4CB0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A5FA0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERWRITELOCK_OFFSET UNITYSDK_OFFSET(0x1E5A5810)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEREADWAITERS_OFFSET UNITYSDK_OFFSET(0x1E5A7120)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEWAITERSPREFERRINGWRITERS_OFFSET UNITYSDK_OFFSET(0x1E5A7260)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITANDWAKEUPAPPROPRIATEWAITERS_OFFSET UNITYSDK_OFFSET(0x1E5A6BF0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITMYLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A54D0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITREADLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A69C0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A6E40)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_EXITWRITELOCK_OFFSET UNITYSDK_OFFSET(0x1E5A6C10)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GETNUMREADERS_OFFSET UNITYSDK_OFFSET(0x1E5A5F90)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GETTHREADRWCOUNT_OFFSET UNITYSDK_OFFSET(0x1E5A4AF0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISREADLOCKHELD_OFFSET UNITYSDK_OFFSET(0x1E5A76F0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISUPGRADEABLEREADLOCKHELD_OFFSET UNITYSDK_OFFSET(0x1E5A7790)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_ISWRITELOCKHELD_OFFSET UNITYSDK_OFFSET(0x1E5A77B0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1E5A77D0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEUPGRADECOUNT_OFFSET UNITYSDK_OFFSET(0x1E5A7860)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_GET_RECURSIVEWRITECOUNT_OFFSET UNITYSDK_OFFSET(0x1E5A79C0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_INITIALIZETHREADCOUNTS_OFFSET UNITYSDK_OFFSET(0x1E5A49B0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ISRWENTRYEMPTY_OFFSET UNITYSDK_OFFSET(0x1E5A4A90)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ISRWHASHENTRYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5A4AD0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_ISWRITERACQUIRED_OFFSET UNITYSDK_OFFSET(0x1E5A5F70)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_LAZYCREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1E5A5530)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SETUPGRADERWAITING_OFFSET UNITYSDK_OFFSET(0x1E5A70F0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SETWRITERACQUIRED_OFFSET UNITYSDK_OFFSET(0x1E5A5F80)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SETWRITERSWAITING_OFFSET UNITYSDK_OFFSET(0x1E5A70E0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_SPINWAIT_OFFSET UNITYSDK_OFFSET(0x1E5A54E0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCKCORE_OFFSET UNITYSDK_OFFSET(0x1E5A4DF0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_1_OFFSET UNITYSDK_OFFSET(0x1E5A4CF0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_2_OFFSET UNITYSDK_OFFSET(0x1E5A4DE0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A4DB0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCKCORE_OFFSET UNITYSDK_OFFSET(0x1E5A60B0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCK_1_OFFSET UNITYSDK_OFFSET(0x1E5A60A0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x1E5A5FE0)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCKCORE_OFFSET UNITYSDK_OFFSET(0x1E5A5950)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_1_OFFSET UNITYSDK_OFFSET(0x1E5A5850)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_2_OFFSET UNITYSDK_OFFSET(0x1E5A5940)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_OFFSET UNITYSDK_OFFSET(0x1E5A5910)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM_WAITONEVENT_OFFSET UNITYSDK_OFFSET(0x1E5A5600)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A4A20)
#define SYSTEM_THREADING_READERWRITERLOCKSLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A49C0)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterLockSlim_TypeDefinitionIndex = 4335;

	class ReaderWriterLockSlim : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_s_nextLockID()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(ReaderWriterLockSlim_TypeDefinitionIndex)->GetStaticField(0x1470);
		}
		static ::System::Threading::ReaderWriterCount** StaticGet_t_rwc()
		{
			return (::System::Threading::ReaderWriterCount**)Il2CppClass::FromTypeDefinitionIndex(ReaderWriterLockSlim_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Threading::EventWaitHandle* upgradeEvent; // 0x10
		::System::Threading::EventWaitHandle* waitUpgradeEvent; // 0x18
		::System::Threading::EventWaitHandle* writeEvent; // 0x20
		::System::Threading::EventWaitHandle* readEvent; // 0x28
		::System::UInt32 numReadWaiters; // 0x30
		::System::Int32 myLock; // 0x34
		::System::UInt32 owners; // 0x38
		::System::UInt32 numUpgradeWaiters; // 0x3C
		::System::Int32 upgradeLockOwnerId; // 0x40
		::System::Boolean fIsReentrant; // 0x44
		::System::Boolean fUpgradeThreadHoldingRead; // 0x45
		::System::Boolean fDisposed; // 0x46
		::System::Boolean fNoWaiters; // 0x47
		::System::UInt32 numWriteWaiters; // 0x48
		::System::Int32 writeLockOwnerId; // 0x4C
		::System::Int64 lockID; // 0x50
		::System::UInt32 numWriteUpgradeWaiters; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Threading::LockRecursionPolicy recursionPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::LockRecursionPolicy))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM__CTOR_1_OFFSET))(this, recursionPolicy);
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

		::System::Boolean TryEnterReadLock(::System::TimeSpan timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_OFFSET))(this, timeout);
		}

		::System::Boolean TryEnterReadLock_1(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_1_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean TryEnterReadLock_2(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCK_2_OFFSET))(this, timeout);
		}

		::System::Boolean TryEnterReadLockCore(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERREADLOCKCORE_OFFSET))(this, timeout);
		}

		::System::Void EnterWriteLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_ENTERWRITELOCK_OFFSET))(this);
		}

		::System::Boolean TryEnterWriteLock(::System::TimeSpan timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_OFFSET))(this, timeout);
		}

		::System::Boolean TryEnterWriteLock_1(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_1_OFFSET))(this, millisecondsTimeout);
		}

		::System::Boolean TryEnterWriteLock_2(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCKSLIM_TRYENTERWRITELOCK_2_OFFSET))(this, timeout);
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
	};
}
