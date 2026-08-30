#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_NewWindowAction.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ZFBSettings.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NewWindowFunc; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E2270)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E2330)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CFB90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E2200)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_registerPopupCallback_TypeDefinitionIndex = 38156;

	class BrowserNative_Calltype_zfb_registerPopupCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction a2, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings a3, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction a2, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings a3, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowAction, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERPOPUPCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
