#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class DownloadProgressChangedEventArgs; }

#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A245BF0)
#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A245C30)
#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A245670)
#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A245660)

namespace System::Net
{
	inline static constexpr unsigned int DownloadProgressChangedEventHandler_TypeDefinitionIndex = 3474;

	class DownloadProgressChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Net::DownloadProgressChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::DownloadProgressChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Net::DownloadProgressChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Net::DownloadProgressChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
