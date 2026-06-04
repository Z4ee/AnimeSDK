#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING__THREADPOOLWAITCALLBACK_PERFORMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0x186392D0)

namespace System::Threading
{
	inline static constexpr unsigned int _ThreadPoolWaitCallback_TypeDefinitionIndex = 859;

	class _ThreadPoolWaitCallback : public ::System::Object
	{
	public:
		static ::System::Boolean PerformWaitCallback()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING__THREADPOOLWAITCALLBACK_PERFORMWAITCALLBACK_OFFSET))();
		}
	};
}
