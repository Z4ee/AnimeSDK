#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class AggregateException; }

#define SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A98F510)
#define SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A98F4B0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int UnobservedTaskExceptionEventArgs_TypeDefinitionIndex = 935;

	class UnobservedTaskExceptionEventArgs : public ::System::EventArgs
	{
	public:
		::System::AggregateException* m_exception; // 0x10
		::System::Boolean m_observed; // 0x18

		::System::Void _ctor(::System::AggregateException* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::AggregateException*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS__CTOR_OFFSET))(this, exception);
		}

		::System::AggregateException* get_Exception()
		{
			return ((::System::AggregateException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_UNOBSERVEDTASKEXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET))(this);
		}
	};
}
