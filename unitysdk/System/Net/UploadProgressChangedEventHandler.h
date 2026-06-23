#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class UploadProgressChangedEventArgs; }

#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2FFC30)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2FFC70)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2FF6B0)
#define SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FF690)

namespace System::Net
{
	inline static constexpr unsigned int UploadProgressChangedEventHandler_TypeDefinitionIndex = 3475;

	class UploadProgressChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Net::UploadProgressChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::UploadProgressChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Net::UploadProgressChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Net::UploadProgressChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UPLOADPROGRESSCHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
