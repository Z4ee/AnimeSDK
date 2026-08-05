#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class WriteStreamClosedEventArgs; }

#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E29B410)
#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E29B450)
#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E29AE80)
#define SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29AE60)

namespace System::Net
{
	inline static constexpr unsigned int WriteStreamClosedEventHandler_TypeDefinitionIndex = 3364;

	class WriteStreamClosedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Net::WriteStreamClosedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::WriteStreamClosedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Net::WriteStreamClosedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Net::WriteStreamClosedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WRITESTREAMCLOSEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
