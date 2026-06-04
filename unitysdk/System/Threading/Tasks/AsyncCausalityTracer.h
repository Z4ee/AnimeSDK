#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/Tasks/AsyncCausalityStatus.h"
#include "unitysdk/System/Threading/Tasks/CausalityRelation.h"
#include "unitysdk/System/Threading/Tasks/CausalitySynchronousWork.h"
#include "unitysdk/System/Threading/Tasks/CausalityTraceLevel.h"

namespace System { class String; }

#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_GET_LOGGINGON_OFFSET UNITYSDK_OFFSET(0x18621F90)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCOMPLETION_OFFSET UNITYSDK_OFFSET(0x18621FB0)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCREATION_OFFSET UNITYSDK_OFFSET(0x18621FA0)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONRELATION_OFFSET UNITYSDK_OFFSET(0x18621FC0)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET UNITYSDK_OFFSET(0x18621FE0)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET UNITYSDK_OFFSET(0x18621FD0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AsyncCausalityTracer_TypeDefinitionIndex = 884;

	class AsyncCausalityTracer : public ::System::Object
	{
	public:
		static ::System::Boolean get_LoggingOn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_GET_LOGGINGON_OFFSET))();
		}

		static ::System::Void TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel a1, ::System::Int32 a2, ::System::String* a3, ::System::UInt64 a4)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCREATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel a1, ::System::Int32 a2, ::System::Threading::Tasks::AsyncCausalityStatus a3)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::Threading::Tasks::AsyncCausalityStatus))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCOMPLETION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TraceOperationRelation(::System::Threading::Tasks::CausalityTraceLevel a1, ::System::Int32 a2, ::System::Threading::Tasks::CausalityRelation a3)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::Threading::Tasks::CausalityRelation))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONRELATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel a1, ::System::Int32 a2, ::System::Threading::Tasks::CausalitySynchronousWork a3)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Int32, ::System::Threading::Tasks::CausalitySynchronousWork))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel a1, ::System::Threading::Tasks::CausalitySynchronousWork a2)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel, ::System::Threading::Tasks::CausalitySynchronousWork))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET))(a1, a2);
		}
	};
}
