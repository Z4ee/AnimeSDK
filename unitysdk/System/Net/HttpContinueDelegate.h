#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class WebHeaderCollection; }

#define SYSTEM_NET_HTTPCONTINUEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E98A0E0)
#define SYSTEM_NET_HTTPCONTINUEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E98A140)
#define SYSTEM_NET_HTTPCONTINUEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E98A0D0)
#define SYSTEM_NET_HTTPCONTINUEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E98A060)

namespace System::Net
{
	inline static constexpr unsigned int HttpContinueDelegate_TypeDefinitionIndex = 2752;

	class HttpContinueDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Net::WebHeaderCollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Net::WebHeaderCollection* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Net::WebHeaderCollection*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPCONTINUEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
