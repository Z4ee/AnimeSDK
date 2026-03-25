#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/AsyncLocalValueChangedArgs_1.h"

namespace System { template <typename T> class Action_1; }

namespace System::Threading
{
	inline static constexpr unsigned int AsyncLocal_1_TypeDefinitionIndex = 818;

	template <typename T>
	class AsyncLocal_1 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* m_valueChangedHandler; // 0x0
	};
}
