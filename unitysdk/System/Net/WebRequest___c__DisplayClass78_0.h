#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Net { class WebRequest; }
namespace System::Security::Principal { class WindowsIdentity; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DB640)
#define SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS78_0__GETREQUESTSTREAMASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1E9DCA80)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest___c__DisplayClass78_0_TypeDefinitionIndex = 2770;

	class WebRequest___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Net::WebRequest* __4__this; // 0x10
		::System::Security::Principal::WindowsIdentity* currentUser; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* _GetRequestStreamAsync_b__1()
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST___C__DISPLAYCLASS78_0__GETREQUESTSTREAMASYNC_B__1_OFFSET))(this);
		}
	};
}
