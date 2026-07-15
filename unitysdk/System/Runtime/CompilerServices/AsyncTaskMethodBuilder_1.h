#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncMethodBuilderCore.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskMethodBuilder_1_TypeDefinitionIndex = 1344;

	template <typename TResult>
	struct AsyncTaskMethodBuilder_1
	{
		static ::System::Threading::Tasks::Task_1<TResult>** StaticGet_s_defaultResultTask()
		{
			return (::System::Threading::Tasks::Task_1<TResult>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskMethodBuilder_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState; // 0x0
		::System::Threading::Tasks::Task_1<TResult>* m_task; // 0x0
	};
}
