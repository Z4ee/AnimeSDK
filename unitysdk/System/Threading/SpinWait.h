#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_THREADING_SPINWAIT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define SYSTEM_THREADING_SPINWAIT_GET_NEXTSPINWILLYIELD_OFFSET UNITYSDK_OFFSET(0x382FAF0)
#define SYSTEM_THREADING_SPINWAIT_RESET_OFFSET UNITYSDK_OFFSET(0x2BF04D0)
#define SYSTEM_THREADING_SPINWAIT_SPINONCE_OFFSET UNITYSDK_OFFSET(0x382FB80)

namespace System::Threading
{
	inline static constexpr unsigned int SpinWait_TypeDefinitionIndex = 810;

	struct alignas(4) SpinWait
	{
		::System::Int32 m_count; // 0x10

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_NextSpinWillYield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_GET_NEXTSPINWILLYIELD_OFFSET))(this);
		}

		::System::Void SpinOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_SPINONCE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_RESET_OFFSET))(this);
		}
	};
}
