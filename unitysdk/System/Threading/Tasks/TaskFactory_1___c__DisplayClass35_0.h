#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1___c__DisplayClass35_0_TypeDefinitionIndex = 893;

	template <typename TResult>
	class TaskFactory_1___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::IAsyncResult*, TResult>* endFunction; // 0x0
		::System::Action_1<::System::IAsyncResult*>* endAction; // 0x0
		::System::Threading::Tasks::Task_1<TResult>* promise; // 0x0
	};
}
