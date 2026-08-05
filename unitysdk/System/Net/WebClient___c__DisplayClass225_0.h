#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Net { class OpenWriteCompletedEventArgs; }
namespace System::Net { class OpenWriteCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS225_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1C1A0)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS225_0__OPENWRITETASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1CC1C1B0)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass225_0_TypeDefinitionIndex = 3449;

	class WebClient___c__DisplayClass225_0 : public ::System::Object
	{
	public:
		::System::Net::OpenWriteCompletedEventHandler* handler; // 0x10
		::System::Net::WebClient* __4__this; // 0x18
		::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>* tcs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS225_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenWriteTaskAsync_b__0(::System::Object* sender, ::System::Net::OpenWriteCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::OpenWriteCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS225_0__OPENWRITETASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
