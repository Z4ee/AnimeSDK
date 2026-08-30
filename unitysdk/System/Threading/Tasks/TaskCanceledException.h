#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/OperationCanceledException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C65C720)
#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C664C30)
#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C664B90)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCanceledException_TypeDefinitionIndex = 915;

	class TaskCanceledException : public ::System::OperationCanceledException
	{
	public:
		::System::Threading::Tasks::Task* m_canceledTask; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
