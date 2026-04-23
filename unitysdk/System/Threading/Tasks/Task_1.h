#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Threading/Tasks/InternalTaskOptions.h"
#include "unitysdk/System/Threading/Tasks/Task.h"
#include "unitysdk/System/Threading/Tasks/TaskCreationOptions.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Threading::Tasks { class TaskScheduler; }
namespace System::Threading::Tasks { template <typename T> class TaskFactory_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task_1_TypeDefinitionIndex = 886;

	template <typename TResult>
	class Task_1 : public ::System::Threading::Tasks::Task
	{
	public:
		TResult m_result; // 0x0
		static ::System::Threading::Tasks::TaskFactory_1<TResult>** StaticGet_s_Factory()
		{
			return (::System::Threading::Tasks::TaskFactory_1<TResult>**)Il2CppClass::FromTypeDefinitionIndex(Task_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>** StaticGet_TaskWhenAnyCast()
		{
			return (::System::Func_2<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*, ::System::Threading::Tasks::Task_1<TResult>*>**)Il2CppClass::FromTypeDefinitionIndex(Task_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
