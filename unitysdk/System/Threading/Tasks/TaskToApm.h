#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKTOAPM_BEGIN_OFFSET UNITYSDK_OFFSET(0x17877E70)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET UNITYSDK_OFFSET(0x17878010)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_INVOKECALLBACKWHENTASKCOMPLETES_OFFSET UNITYSDK_OFFSET(0x17877F90)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskToApm_TypeDefinitionIndex = 929;

	class TaskToApm : public ::System::Object
	{
	public:
		static ::System::IAsyncResult* Begin(::System::Threading::Tasks::Task* task, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_BEGIN_OFFSET))(task, callback, state);
		}

		static ::System::Void End(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET))(asyncResult);
		}

		static ::System::Void InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* antecedent, ::System::AsyncCallback* callback, ::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_INVOKECALLBACKWHENTASKCOMPLETES_OFFSET))(antecedent, callback, asyncResult);
		}
	};
}
