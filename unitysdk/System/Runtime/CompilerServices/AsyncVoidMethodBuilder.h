#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncMethodBuilderCore.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8AAD50)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_NOTIFYSYNCHRONIZATIONCONTEXTOFCOMPLETION_OFFSET UNITYSDK_OFFSET(0x927750)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x927740)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x9276D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncVoidMethodBuilder_TypeDefinitionIndex = 1375;

	struct alignas(8) AsyncVoidMethodBuilder
	{
		::System::Threading::SynchronizationContext* m_synchronizationContext; // 0x10
		::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState; // 0x18
		::System::Threading::Tasks::Task* m_task; // 0x28

		static ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Create()
		{
			return ((::System::Runtime::CompilerServices::AsyncVoidMethodBuilder(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_CREATE_OFFSET))();
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}

		::System::Void SetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETRESULT_OFFSET))(this);
		}

		::System::Void SetException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETEXCEPTION_OFFSET))(this, exception);
		}

		::System::Void NotifySynchronizationContextOfCompletion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_NOTIFYSYNCHRONIZATIONCONTEXTOFCOMPLETION_OFFSET))(this);
		}
	};
}
