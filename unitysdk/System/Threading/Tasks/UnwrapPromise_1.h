#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/Tasks/Task_1.h"

namespace System::Threading::Tasks { class Task; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int UnwrapPromise_1_TypeDefinitionIndex = 908;

	template <typename TResult>
	class UnwrapPromise_1 : public ::System::Threading::Tasks::Task_1<TResult>
	{
	public:
		::System::Byte _state; // 0x0
		::System::Boolean _lookForOce; // 0x0
	};
}
