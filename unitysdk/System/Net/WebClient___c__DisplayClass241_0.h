#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class UploadFileCompletedEventArgs; }
namespace System::Net { class UploadFileCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS241_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C896320)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS241_0__UPLOADFILETASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C897660)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass241_0_TypeDefinitionIndex = 3454;

	class WebClient___c__DisplayClass241_0 : public ::System::Object
	{
	public:
		::System::Net::UploadFileCompletedEventHandler* handler; // 0x10
		::System::Threading::Tasks::TaskCompletionSource_1<::Il2CppArray<::System::Byte>*>* tcs; // 0x18
		::System::Net::WebClient* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS241_0__CTOR_OFFSET))(this);
		}

		::System::Void _UploadFileTaskAsync_b__0(::System::Object* sender, ::System::Net::UploadFileCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::UploadFileCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS241_0__UPLOADFILETASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
