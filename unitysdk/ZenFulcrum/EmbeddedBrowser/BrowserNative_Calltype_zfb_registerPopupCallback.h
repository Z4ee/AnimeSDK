#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_NewWindowAction.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ZFBSettings.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NewWindowFunc; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C76310)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C763D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C5A540)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C762F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_registerPopupCallback_TypeDefinitionIndex = 30495;

	class BrowserNative_Calltype_zfb_registerPopupCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction windowAction, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings baseSettings, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_INVOKE_OFFSET))(this, id, windowAction, baseSettings, cb);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction windowAction, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings baseSettings, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc* cb, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_BEGININVOKE_OFFSET))(this, id, windowAction, baseSettings, cb, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
