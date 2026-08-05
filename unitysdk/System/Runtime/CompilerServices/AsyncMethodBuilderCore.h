#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class AsyncMethodBuilderCore_MoveNextRunner; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CREATECONTINUATIONWRAPPER_OFFSET UNITYSDK_OFFSET(0x1E123210)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_GETCOMPLETIONACTION_OFFSET UNITYSDK_OFFSET(0xA02B20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_OUTPUTASYNCCAUSALITYEVENTS_OFFSET UNITYSDK_OFFSET(0xA02B30)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_POSTBOXINITIALIZATION_OFFSET UNITYSDK_OFFSET(0xA02B40)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x34D440)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_THROWASYNC_OFFSET UNITYSDK_OFFSET(0x1E123460)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_TRYGETCONTINUATIONTASK_OFFSET UNITYSDK_OFFSET(0x1E1236C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_TypeDefinitionIndex = 1379;

	struct alignas(8) AsyncMethodBuilderCore
	{
		::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine; // 0x10
		::System::Action* m_defaultContextAction; // 0x18

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}

		::System::Action* GetCompletionAction(::System::Threading::Tasks::Task* taskForTracing, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*& runnerToInitialize)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_GETCOMPLETIONACTION_OFFSET))(this, taskForTracing, runnerToInitialize);
		}

		::System::Action* OutputAsyncCausalityEvents(::System::Threading::Tasks::Task* innerTask, ::System::Action* continuation)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_OUTPUTASYNCCAUSALITYEVENTS_OFFSET))(this, innerTask, continuation);
		}

		::System::Void PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner* runner, ::System::Threading::Tasks::Task* builtTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_POSTBOXINITIALIZATION_OFFSET))(this, stateMachine, runner, builtTask);
		}

		static ::System::Void ThrowAsync(::System::Exception* exception, ::System::Threading::SynchronizationContext* targetContext)
		{
			return ((::System::Void(*)(::System::Exception*, ::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_THROWASYNC_OFFSET))(exception, targetContext);
		}

		static ::System::Action* CreateContinuationWrapper(::System::Action* continuation, ::System::Action* invokeAction, ::System::Threading::Tasks::Task* innerTask)
		{
			return ((::System::Action*(*)(::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CREATECONTINUATIONWRAPPER_OFFSET))(continuation, invokeAction, innerTask);
		}

		static ::System::Threading::Tasks::Task* TryGetContinuationTask(::System::Action* action)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_TRYGETCONTINUATIONTASK_OFFSET))(action);
		}
	};
}
