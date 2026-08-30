#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C65C120)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C667680)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6675E0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerException_TypeDefinitionIndex = 933;

	class TaskSchedulerException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
