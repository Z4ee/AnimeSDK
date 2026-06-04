#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_THREADING_TASKS_TASKTOAPM_BEGIN_OFFSET UNITYSDK_OFFSET(0x18630E40)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET UNITYSDK_OFFSET(0x18631000)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_INVOKECALLBACKWHENTASKCOMPLETES_OFFSET UNITYSDK_OFFSET(0x18630F70)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskToApm_TypeDefinitionIndex = 928;

	class TaskToApm : public ::System::Object
	{
	public:
		static ::System::IAsyncResult* Begin(::System::Threading::Tasks::Task* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_BEGIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void End(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET))(a1);
		}

		static ::System::Void InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* a1, ::System::AsyncCallback* a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_INVOKECALLBACKWHENTASKCOMPLETES_OFFSET))(a1, a2, a3);
		}
	};
}
