#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebException; }

#define SYSTEM_NET_HTTPABORTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEC0E00)
#define SYSTEM_NET_HTTPABORTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEC0E40)
#define SYSTEM_NET_HTTPABORTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEC0870)
#define SYSTEM_NET_HTTPABORTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC0850)

namespace System::Net
{
	inline static constexpr unsigned int HttpAbortDelegate_TypeDefinitionIndex = 3315;

	class HttpAbortDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPABORTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Net::HttpWebRequest* request, ::System::Net::WebException* webException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Net::WebException*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPABORTDELEGATE_INVOKE_OFFSET))(this, request, webException);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::HttpWebRequest* request, ::System::Net::WebException* webException, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::Net::WebException*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPABORTDELEGATE_BEGININVOKE_OFFSET))(this, request, webException, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPABORTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
