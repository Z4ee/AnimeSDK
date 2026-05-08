#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }

#define SYSTEM_THREADING_TASKS_TASKTOAPM___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA0320)
#define SYSTEM_THREADING_TASKS_TASKTOAPM___C__DISPLAYCLASS3_0__INVOKECALLBACKWHENTASKCOMPLETES_B__0_OFFSET UNITYSDK_OFFSET(0x1ACA0330)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskToApm___c__DisplayClass3_0_TypeDefinitionIndex = 939;

	class TaskToApm___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::IAsyncResult* asyncResult; // 0x10
		::System::AsyncCallback* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _InvokeCallbackWhenTaskCompletes_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM___C__DISPLAYCLASS3_0__INVOKECALLBACKWHENTASKCOMPLETES_B__0_OFFSET))(this);
		}
	};
}
