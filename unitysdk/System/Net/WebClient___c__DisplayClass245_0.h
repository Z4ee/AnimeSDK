#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class UploadValuesCompletedEventArgs; }
namespace System::Net { class UploadValuesCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS245_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193BC8F0)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS245_0__UPLOADVALUESTASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x193BC900)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass245_0_TypeDefinitionIndex = 3456;

	class WebClient___c__DisplayClass245_0 : public ::System::Object
	{
	public:
		::System::Net::UploadValuesCompletedEventHandler* handler; // 0x10
		::System::Threading::Tasks::TaskCompletionSource_1<::Il2CppArray<::System::Byte>*>* tcs; // 0x18
		::System::Net::WebClient* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS245_0__CTOR_OFFSET))(this);
		}

		::System::Void _UploadValuesTaskAsync_b__0(::System::Object* sender, ::System::Net::UploadValuesCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::UploadValuesCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS245_0__UPLOADVALUESTASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
