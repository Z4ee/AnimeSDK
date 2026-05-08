#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class SimpleAsyncCallback; }
namespace System::Net { class SimpleAsyncResult; }

#define SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19E39090)
#define SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS11_0__RUNWITHLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x19E390A0)
#define SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS11_0__RUNWITHLOCK_B__1_OFFSET UNITYSDK_OFFSET(0x19E39130)

namespace System::Net
{
	inline static constexpr unsigned int SimpleAsyncResult___c__DisplayClass11_0_TypeDefinitionIndex = 3560;

	class SimpleAsyncResult___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Object* locker; // 0x10
		::System::Func_2<::System::Net::SimpleAsyncResult*, ::System::Boolean>* func; // 0x18
		::System::Net::SimpleAsyncCallback* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RunWithLock_b__0(::System::Net::SimpleAsyncResult* inner)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS11_0__RUNWITHLOCK_B__0_OFFSET))(this, inner);
		}

		::System::Void _RunWithLock_b__1(::System::Net::SimpleAsyncResult* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS11_0__RUNWITHLOCK_B__1_OFFSET))(this, inner);
		}
	};
}
