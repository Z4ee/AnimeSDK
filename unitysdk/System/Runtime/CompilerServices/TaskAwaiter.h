#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x20DA290)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x15858E0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_HANDLENONSUCCESSANDDEBUGGERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x163928F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_ONCOMPLETEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x163920B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1585B60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_THROWFORNONSUCCESS_OFFSET UNITYSDK_OFFSET(0x163929A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1585B70)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_VALIDATEEND_OFFSET UNITYSDK_OFFSET(0x16392140)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TaskAwaiter_TypeDefinitionIndex = 1358;

	struct alignas(8) TaskAwaiter
	{
		::System::Threading::Tasks::Task* m_task; // 0x10

		::System::Void _ctor(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER__CTOR_OFFSET))(this, task);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void UnsafeOnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GETRESULT_OFFSET))(this);
		}

		static ::System::Void ValidateEnd(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_VALIDATEEND_OFFSET))(task);
		}

		static ::System::Void HandleNonSuccessAndDebuggerNotification(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_HANDLENONSUCCESSANDDEBUGGERNOTIFICATION_OFFSET))(task);
		}

		static ::System::Void ThrowForNonSuccess(::System::Threading::Tasks::Task* task)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_THROWFORNONSUCCESS_OFFSET))(task);
		}

		static ::System::Void OnCompletedInternal(::System::Threading::Tasks::Task* task, ::System::Action* continuation, ::System::Boolean continueOnCapturedContext, ::System::Boolean flowExecutionContext)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_ONCOMPLETEDINTERNAL_OFFSET))(task, continuation, continueOnCapturedContext, flowExecutionContext);
		}
	};
}
