#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/Tasks/AsyncCausalityStatus.h"
#include "unitysdk/System/Threading/Tasks/CausalityRelation.h"
#include "unitysdk/System/Threading/Tasks/CausalitySynchronousWork.h"
#include "unitysdk/System/Threading/Tasks/CausalityTraceLevel.h"

namespace System { class String; }

#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_GET_LOGGINGON_OFFSET UNITYSDK_OFFSET(0x1623CCF0)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1623CD10)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCREATION_OFFSET UNITYSDK_OFFSET(0x1623CD00)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONRELATION_OFFSET UNITYSDK_OFFSET(0x1623CD20)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1623CD40)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET UNITYSDK_OFFSET(0x1623CD30)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AsyncCausalityTracer_TypeDefinitionIndex = 883;

	class AsyncCausalityTracer : public ::System::Object
	{
	public:
		static ::System::Boolean get_LoggingOn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_GET_LOGGINGON_OFFSET))();
		}

		static ::System::Void TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Int32 taskId, ::System::String* operationName, ::System::UInt64 relatedContext)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCREATION_OFFSET))(traceLevel, taskId, operationName, relatedContext);
		}

		static ::System::Void TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Int32 taskId, ::System::Threading::Tasks::AsyncCausalityStatus status)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::Threading::Tasks::AsyncCausalityStatus))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCOMPLETION_OFFSET))(traceLevel, taskId, status);
		}

		static ::System::Void TraceOperationRelation(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Int32 taskId, ::System::Threading::Tasks::CausalityRelation relation)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::Threading::Tasks::CausalityRelation))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONRELATION_OFFSET))(traceLevel, taskId, relation);
		}

		static ::System::Void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Int32 taskId, ::System::Threading::Tasks::CausalitySynchronousWork work)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::Threading::Tasks::CausalitySynchronousWork))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET))(traceLevel, taskId, work);
		}

		static ::System::Void TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel traceLevel, ::System::Threading::Tasks::CausalitySynchronousWork work)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::CausalitySynchronousWork))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET))(traceLevel, work);
		}
	};
}
