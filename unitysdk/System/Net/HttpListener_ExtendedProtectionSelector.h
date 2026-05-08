#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class HttpListenerRequest; }
namespace System::Security::Authentication::ExtendedProtection { class ExtendedProtectionPolicy; }

#define SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19BB6C20)
#define SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19BB6C50)
#define SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x19BB66E0)
#define SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB66D0)

namespace System::Net
{
	inline static constexpr unsigned int HttpListener_ExtendedProtectionSelector_TypeDefinitionIndex = 3524;

	class HttpListener_ExtendedProtectionSelector : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR__CTOR_OFFSET))(this, object, method);
		}

		::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* Invoke(::System::Net::HttpListenerRequest* request)
		{
			return ((::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*(*)(::PVOID, ::System::Net::HttpListenerRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR_INVOKE_OFFSET))(this, request);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::HttpListenerRequest* request, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpListenerRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR_BEGININVOKE_OFFSET))(this, request, callback, object);
		}

		::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENER_EXTENDEDPROTECTIONSELECTOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
