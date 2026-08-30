#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class WebRequest; }
namespace System::Net { class WebResponse; }
namespace System::Security::Principal { class WindowsIdentity; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98C600)
#define SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS79_0__GETRESPONSEASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1B98DAB0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest___c__DisplayClass79_0_TypeDefinitionIndex = 2771;

	class WebRequest___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Security::Principal::WindowsIdentity* currentUser; // 0x10
		::System::Net::WebRequest* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* _GetResponseAsync_b__1()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS79_0__GETRESPONSEASYNC_B__1_OFFSET))(this);
		}
	};
}
