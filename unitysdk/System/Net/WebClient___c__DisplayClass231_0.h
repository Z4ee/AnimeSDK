#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class DownloadDataCompletedEventArgs; }
namespace System::Net { class DownloadDataCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS231_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192342D0)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS231_0__DOWNLOADDATATASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x19235C60)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass231_0_TypeDefinitionIndex = 3452;

	class WebClient___c__DisplayClass231_0 : public ::System::Object
	{
	public:
		::System::Net::WebClient* __4__this; // 0x10
		::System::Threading::Tasks::TaskCompletionSource_1<::Il2CppArray<::System::Byte>*>* tcs; // 0x18
		::System::Net::DownloadDataCompletedEventHandler* handler; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS231_0__CTOR_OFFSET))(this);
		}

		::System::Void _DownloadDataTaskAsync_b__0(::System::Object* sender, ::System::Net::DownloadDataCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::DownloadDataCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS231_0__DOWNLOADDATATASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
