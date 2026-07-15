#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System::Net { class SimpleAsyncResult; }

#define SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE1B20)
#define SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS9_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x19EE29E0)

namespace System::Net
{
	inline static constexpr unsigned int SimpleAsyncResult___c__DisplayClass9_0_TypeDefinitionIndex = 2871;

	class SimpleAsyncResult___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::AsyncCallback* cb; // 0x10
		::System::Net::SimpleAsyncResult* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCRESULT___C__DISPLAYCLASS9_0___CTOR_B__0_OFFSET))(this, a1);
		}
	};
}
