#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/WaitHandle.h"

namespace System::Threading
{
	inline static constexpr unsigned int Mutex_TypeDefinitionIndex = 874;

	class Mutex : public ::System::Threading::WaitHandle
	{
	public:
	};
}
