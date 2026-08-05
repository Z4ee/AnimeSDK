#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Func_1; }

#define SYSTEM_THREADING_SPINWAIT_GET_NEXTSPINWILLYIELD_OFFSET UNITYSDK_OFFSET(0x9A8510)
#define SYSTEM_THREADING_SPINWAIT_RESET_OFFSET UNITYSDK_OFFSET(0x463B50)
#define SYSTEM_THREADING_SPINWAIT_SPINONCE_OFFSET UNITYSDK_OFFSET(0x9A85A0)
#define SYSTEM_THREADING_SPINWAIT_SPINUNTIL_OFFSET UNITYSDK_OFFSET(0x1D81E1A0)

namespace System::Threading
{
	inline static constexpr unsigned int SpinWait_TypeDefinitionIndex = 799;

	struct alignas(4) SpinWait
	{
		::System::Int32 m_count; // 0x10

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

		static ::System::Boolean SpinUntil(::System::Func_1<::System::Boolean>* condition, ::System::Int32 millisecondsTimeout)
		{
			return ((::System::Boolean(*)(::System::Func_1<::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_SPINUNTIL_OFFSET))(condition, millisecondsTimeout);
		}
	};
}
