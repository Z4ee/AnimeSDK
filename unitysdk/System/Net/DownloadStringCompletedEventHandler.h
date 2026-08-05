#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class DownloadStringCompletedEventArgs; }

#define SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C880BC0)
#define SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C880C00)
#define SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C880630)
#define SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C880610)

namespace System::Net
{
	inline static constexpr unsigned int DownloadStringCompletedEventHandler_TypeDefinitionIndex = 3461;

	class DownloadStringCompletedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Net::DownloadStringCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Net::DownloadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Net::DownloadStringCompletedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Net::DownloadStringCompletedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADSTRINGCOMPLETEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
