#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/CriticalFinalizerObject.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Collections { class Hashtable; }
namespace System::Threading { class LockQueue; }

#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_1_OFFSET UNITYSDK_OFFSET(0x1D8D6180)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_2_OFFSET UNITYSDK_OFFSET(0x1D8D67C0)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_OFFSET UNITYSDK_OFFSET(0x1D8D1570)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_1_OFFSET UNITYSDK_OFFSET(0x1D8D65B0)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_2_OFFSET UNITYSDK_OFFSET(0x1D8D6930)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x1D8D1770)
#define SYSTEM_THREADING_READERWRITERLOCK_CHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D8D6880)
#define SYSTEM_THREADING_READERWRITERLOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D8D6170)
#define SYSTEM_THREADING_READERWRITERLOCK_GET_ISREADERLOCKHELD_OFFSET UNITYSDK_OFFSET(0x1D8D1390)
#define SYSTEM_THREADING_READERWRITERLOCK_GET_ISWRITERLOCKHELD_OFFSET UNITYSDK_OFFSET(0x1D8D14A0)
#define SYSTEM_THREADING_READERWRITERLOCK_HASWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x1D8D6580)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_1_OFFSET UNITYSDK_OFFSET(0x1D8D69F0)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_OFFSET UNITYSDK_OFFSET(0x1D8D1580)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_1_OFFSET UNITYSDK_OFFSET(0x1D8D6C20)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x1D8D1780)
#define SYSTEM_THREADING_READERWRITERLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D0310)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterLock_TypeDefinitionIndex = 862;

	class ReaderWriterLock : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
	public:
		::System::Collections::Hashtable* reader_locks; // 0x10
		::System::Threading::LockQueue* writer_queue; // 0x18
		::System::Int32 writer_lock_owner; // 0x20
		::System::Int32 readers; // 0x24
		::System::Int32 seq_num; // 0x28
		::System::Int32 state; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_IsReaderLockHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_GET_ISREADERLOCKHELD_OFFSET))(this);
		}

		::System::Boolean get_IsWriterLockHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_GET_ISWRITERLOCKHELD_OFFSET))(this);
		}

		::System::Void AcquireReaderLock(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_OFFSET))(this, millisecondsTimeout);
		}

		::System::Void AcquireReaderLock_1(::System::Int32 millisecondsTimeout, ::System::Int32 initialLockCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_1_OFFSET))(this, millisecondsTimeout, initialLockCount);
		}

		::System::Void AcquireReaderLock_2(::System::TimeSpan timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_2_OFFSET))(this, timeout);
		}

		::System::Void AcquireWriterLock(::System::Int32 millisecondsTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_OFFSET))(this, millisecondsTimeout);
		}

		::System::Void AcquireWriterLock_1(::System::Int32 millisecondsTimeout, ::System::Int32 initialLockCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_1_OFFSET))(this, millisecondsTimeout, initialLockCount);
		}

		::System::Void AcquireWriterLock_2(::System::TimeSpan timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_2_OFFSET))(this, timeout);
		}

		::System::Void ReleaseReaderLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_OFFSET))(this);
		}

		::System::Void ReleaseReaderLock_1(::System::Int32 currentCount, ::System::Int32 releaseCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_1_OFFSET))(this, currentCount, releaseCount);
		}

		::System::Void ReleaseWriterLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_OFFSET))(this);
		}

		::System::Void ReleaseWriterLock_1(::System::Int32 releaseCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_1_OFFSET))(this, releaseCount);
		}

		::System::Boolean HasWriterLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_HASWRITERLOCK_OFFSET))(this);
		}

		::System::Int32 CheckTimeout(::System::TimeSpan timeout)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_CHECKTIMEOUT_OFFSET))(this, timeout);
		}
	};
}
