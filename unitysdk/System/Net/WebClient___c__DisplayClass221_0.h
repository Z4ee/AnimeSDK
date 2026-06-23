#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Net { class OpenReadCompletedEventArgs; }
namespace System::Net { class OpenReadCompletedEventHandler; }
namespace System::Net { class WebClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS221_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B419BF0)
#define SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS221_0__OPENREADTASKASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B41BB30)

namespace System::Net
{
	inline static constexpr unsigned int WebClient___c__DisplayClass221_0_TypeDefinitionIndex = 3448;

	class WebClient___c__DisplayClass221_0 : public ::System::Object
	{
	public:
		::System::Net::WebClient* __4__this; // 0x10
		::System::Net::OpenReadCompletedEventHandler* handler; // 0x18
		::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>* tcs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS221_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenReadTaskAsync_b__0(::System::Object* sender, ::System::Net::OpenReadCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::OpenReadCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT___C__DISPLAYCLASS221_0__OPENREADTASKASYNC_B__0_OFFSET))(this, sender, e);
		}
	};
}
