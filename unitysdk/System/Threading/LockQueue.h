#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ReaderWriterLock; }

#define SYSTEM_THREADING_LOCKQUEUE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x18BB3100)
#define SYSTEM_THREADING_LOCKQUEUE_PULSE_OFFSET UNITYSDK_OFFSET(0x18BB31B0)
#define SYSTEM_THREADING_LOCKQUEUE_WAIT_OFFSET UNITYSDK_OFFSET(0x18BB2ED0)
#define SYSTEM_THREADING_LOCKQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB2EC0)

namespace System::Threading
{
	inline static constexpr unsigned int LockQueue_TypeDefinitionIndex = 859;

	class LockQueue : public ::System::Object
	{
	public:
		::System::Threading::ReaderWriterLock* rwlock; // 0x10
		::System::Int32 lockCount; // 0x18

		::System::Void _ctor(::System::Threading::ReaderWriterLock* rwlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ReaderWriterLock*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE__CTOR_OFFSET))(this, rwlock);
		}

		::System::Boolean Wait(::System::Int32 timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE_WAIT_OFFSET))(this, timeout);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Pulse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKQUEUE_PULSE_OFFSET))(this);
		}
	};
}
