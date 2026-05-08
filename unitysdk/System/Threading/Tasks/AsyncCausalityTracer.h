#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/Tasks/CausalitySynchronousWork.h"
#include "unitysdk/System/Threading/Tasks/CausalityTraceLevel.h"

#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET UNITYSDK_OFFSET(0x1A3B99D0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AsyncCausalityTracer_TypeDefinitionIndex = 873;

	class AsyncCausalityTracer : public ::System::Object
	{
	public:
		static ::System::Void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Int32 taskId, ::System::Threading::Tasks::CausalitySynchronousWork work)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::Threading::Tasks::CausalitySynchronousWork))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET))(traceLevel, taskId, work);
		}
	};
}
