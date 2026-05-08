#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class WebHeaderCollection; }

#define SYSTEM_NET_HTTPCONTINUEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7E61F0)
#define SYSTEM_NET_HTTPCONTINUEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7E6270)
#define SYSTEM_NET_HTTPCONTINUEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7E5EB0)
#define SYSTEM_NET_HTTPCONTINUEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E5EA0)

namespace System::Net
{
	inline static constexpr unsigned int HttpContinueDelegate_TypeDefinitionIndex = 3318;

	class HttpContinueDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 StatusCode, ::System::Net::WebHeaderCollection* httpHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_INVOKE_OFFSET))(this, StatusCode, httpHeaders);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 StatusCode, ::System::Net::WebHeaderCollection* httpHeaders, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Net::WebHeaderCollection*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_BEGININVOKE_OFFSET))(this, StatusCode, httpHeaders, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
