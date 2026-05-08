#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/WaitHandle.h"

#define SYSTEM_NET_SEMAPHORE_RELEASESEMAPHORE_OFFSET UNITYSDK_OFFSET(0x1A10FDC0)
#define SYSTEM_NET_SEMAPHORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10FC60)

namespace System::Net
{
	inline static constexpr unsigned int Semaphore_TypeDefinitionIndex = 3393;

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
