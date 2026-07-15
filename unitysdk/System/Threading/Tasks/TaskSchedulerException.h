#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A72AC20)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A7364D0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A736430)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerException_TypeDefinitionIndex = 927;

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
