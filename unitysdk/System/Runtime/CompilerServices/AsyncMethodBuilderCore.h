#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class AsyncMethodBuilderCore_MoveNextRunner; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CREATECONTINUATIONWRAPPER_OFFSET UNITYSDK_OFFSET(0x1C4550F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_GETCOMPLETIONACTION_OFFSET UNITYSDK_OFFSET(0x3B91C10)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_OUTPUTASYNCCAUSALITYEVENTS_OFFSET UNITYSDK_OFFSET(0x3B91C20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_POSTBOXINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x3B91CD0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA2FB90)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_THROWASYNC_OFFSET UNITYSDK_OFFSET(0x1C455380)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_TRYGETCONTINUATIONTASK_OFFSET UNITYSDK_OFFSET(0x1C455800)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_TypeDefinitionIndex = 1353;

	struct alignas(8) AsyncMethodBuilderCore
	{
		::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine; // 0x10
		::System::Action* m_defaultContextAction; // 0x18

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_SETSTATEMACHINE_OFFSET))(this, a1);
		}

		::System::Action* GetCompletionAction(::System::Threading::Tasks::Task* a1, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*& a2)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_GETCOMPLETIONACTION_OFFSET))(this, a1, a2);
		}

		::System::Action* OutputAsyncCausalityEvents(::System::Threading::Tasks::Task* a1, ::System::Action* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_OUTPUTASYNCCAUSALITYEVENTS_OFFSET))(this, a1, a2);
		}

		::System::Void PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine* a1, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner* a2, ::System::Threading::Tasks::Task* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_POSTBOXINITIALIZATION_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void ThrowAsync(::System::Exception* a1, ::System::Threading::SynchronizationContext* a2)
		{
			return ((::System::Void(*)(::System::Exception*, ::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_THROWASYNC_OFFSET))(a1, a2);
		}

		static ::System::Action* CreateContinuationWrapper(::System::Action* a1, ::System::Action* a2, ::System::Threading::Tasks::Task* a3)
		{
			return ((::System::Action*(*)(::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CREATECONTINUATIONWRAPPER_OFFSET))(a1, a2, a3);
		}

		static ::System::Threading::Tasks::Task* TryGetContinuationTask(::System::Action* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_TRYGETCONTINUATIONTASK_OFFSET))(a1);
		}
	};
}
