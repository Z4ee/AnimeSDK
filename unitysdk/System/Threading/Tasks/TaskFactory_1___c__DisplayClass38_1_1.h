#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System::Threading { class AtomicBoolean; }
namespace System::Threading::Tasks { template <typename T1, typename T2> class TaskFactory_1___c__DisplayClass38_0_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1___c__DisplayClass38_1_1_TypeDefinitionIndex = 896;

	template <typename TResult, typename TArg1>
	class TaskFactory_1___c__DisplayClass38_1_1 : public ::System::Object
	{
	public:
		::System::Threading::AtomicBoolean* invoked; // 0x0
		::System::Threading::Tasks::TaskFactory_1___c__DisplayClass38_0_1<TResult, TArg1>* CS___8__locals1; // 0x0
	};
}
