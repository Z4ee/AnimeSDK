#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/WaitHandle.h"

#define SYSTEM_NET_SEMAPHORE_RELEASESEMAPHORE_OFFSET UNITYSDK_OFFSET(0x1D89AE10)
#define SYSTEM_NET_SEMAPHORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89ACB0)

namespace System::Net
{
	inline static constexpr unsigned int Semaphore_TypeDefinitionIndex = 3392;

	class Semaphore : public ::System::Threading::WaitHandle
	{
	public:
		::System::Void _ctor(::System::Int32 initialCount, ::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SEMAPHORE__CTOR_OFFSET))(this, initialCount, maxCount);
		}

		::System::Boolean ReleaseSemaphore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SEMAPHORE_RELEASESEMAPHORE_OFFSET))(this);
		}
	};
}
