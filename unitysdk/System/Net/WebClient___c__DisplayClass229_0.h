#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class UploadStringCompletedEventArgs; }
namespace System::Net { class UploadStringCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS229_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A5A50)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS229_0__UPLOADSTRINGTASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C8A5A60)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass229_0_TypeDefinitionIndex = 3450;

	class WebClient___c__DisplayClass229_0 : public ::System::Object
	{
	public:
		::System::Net::WebClient* __4__this; // 0x10
		::System::Net::UploadStringCompletedEventHandler* handler; // 0x18
		::System::Threading::Tasks::TaskCompletionSource_1<::System::String*>* tcs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS229_0__CTOR_OFFSET))(this);
		}

		::System::Void _UploadStringTaskAsync_b__0(::System::Object* sender, ::System::Net::UploadStringCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::UploadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS229_0__UPLOADSTRINGTASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
