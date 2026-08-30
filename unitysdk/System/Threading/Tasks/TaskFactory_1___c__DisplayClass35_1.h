#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System::Threading { class AtomicBoolean; }
namespace System::Threading::Tasks { template <typename T> class TaskFactory_1___c__DisplayClass35_0; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1___c__DisplayClass35_1_TypeDefinitionIndex = 894;

	template <typename TResult>
	class TaskFactory_1___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::System::Threading::AtomicBoolean* invoked; // 0x0
		::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>* CS___8__locals1; // 0x0
	};
}
