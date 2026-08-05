#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Net/AuthenticationSchemes.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class HttpListenerRequest; }

#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D61FFE0)
#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D620010)
#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D61FAC0)
#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61FAA0)

namespace System::Net
{
	inline static constexpr unsigned int AuthenticationSchemeSelector_TypeDefinitionIndex = 3263;

	class AuthenticationSchemeSelector : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR__CTOR_OFFSET))(this, object, method);
		}

		::System::Net::AuthenticationSchemes Invoke(::System::Net::HttpListenerRequest* httpRequest)
		{
			return ((::System::Net::AuthenticationSchemes(*)(::PVOID, ::System::Net::HttpListenerRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_INVOKE_OFFSET))(this, httpRequest);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::HttpListenerRequest* httpRequest, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpListenerRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_BEGININVOKE_OFFSET))(this, httpRequest, callback, object);
		}

		::System::Net::AuthenticationSchemes EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Net::AuthenticationSchemes(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
