#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class DownloadStringCompletedEventArgs; }
namespace System::Net { class DownloadStringCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS219_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A586590)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS219_0__DOWNLOADSTRINGTASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1A5865A0)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass219_0_TypeDefinitionIndex = 3447;

	class WebClient___c__DisplayClass219_0 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::TaskCompletionSource_1<::System::String*>* tcs; // 0x10
		::System::Net::WebClient* __4__this; // 0x18
		::System::Net::DownloadStringCompletedEventHandler* handler; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS219_0__CTOR_OFFSET))(this);
		}

		::System::Void _DownloadStringTaskAsync_b__0(::System::Object* sender, ::System::Net::DownloadStringCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::DownloadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS219_0__DOWNLOADSTRINGTASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
