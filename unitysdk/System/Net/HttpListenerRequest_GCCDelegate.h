#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate2; }

#define SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19AF14D0)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19AF1500)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19AF1230)
#define SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF1220)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerRequest_GCCDelegate_TypeDefinitionIndex = 3530;

	class HttpListenerRequest_GCCDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* Invoke()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_GCCDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
