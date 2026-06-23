#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/Tasks/VoidTaskResult.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B930300)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x3D3640)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9293F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x929370)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3891F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B930460)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskMethodBuilder_TypeDefinitionIndex = 1376;

	struct alignas(8) AsyncTaskMethodBuilder
	{
		static ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>** StaticGet_s_cachedCompleted()
		{
			return (::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskMethodBuilder_TypeDefinitionIndex)->GetStaticField(0xB70);
		}
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> m_builder; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER__CCTOR_OFFSET))();
		}

		static ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create()
		{
			return ((::System::Runtime::CompilerServices::AsyncTaskMethodBuilder(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_CREATE_OFFSET))();
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}

		::System::Threading::Tasks::Task* get_Task()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_GET_TASK_OFFSET))(this);
		}

		::System::Void SetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETRESULT_OFFSET))(this);
		}

		::System::Void SetException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETEXCEPTION_OFFSET))(this, exception);
		}
	};
}
