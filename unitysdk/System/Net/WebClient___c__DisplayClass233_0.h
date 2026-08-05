#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class AsyncCompletedEventArgs; }
namespace System::ComponentModel { class AsyncCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS233_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D477430)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS233_0__DOWNLOADFILETASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1D477440)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass233_0_TypeDefinitionIndex = 3452;

	class WebClient___c__DisplayClass233_0 : public ::System::Object
	{
	public:
		::System::ComponentModel::AsyncCompletedEventHandler* handler; // 0x10
		::System::Net::WebClient* __4__this; // 0x18
		::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* tcs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS233_0__CTOR_OFFSET))(this);
		}

		::System::Void _DownloadFileTaskAsync_b__0(::System::Object* sender, ::System::ComponentModel::AsyncCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS233_0__DOWNLOADFILETASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
