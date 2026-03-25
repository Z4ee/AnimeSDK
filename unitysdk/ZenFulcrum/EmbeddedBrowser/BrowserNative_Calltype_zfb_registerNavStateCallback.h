#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NavStateFunc; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C76280)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C762E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C569C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C76260)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_registerNavStateCallback_TypeDefinitionIndex = 30473;

	class BrowserNative_Calltype_zfb_registerNavStateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK_INVOKE_OFFSET))(this, id, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK_BEGININVOKE_OFFSET))(this, id, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERNAVSTATECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
