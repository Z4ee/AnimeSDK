#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ZFBSettings.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6AE770)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6AE7E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6908C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6AE750)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_createBrowser_TypeDefinitionIndex = 36179;

	class BrowserNative_Calltype_zfb_createBrowser : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings settings)
		{
			return ((::System::Int32(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER_INVOKE_OFFSET))(this, settings);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings settings, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ZFBSettings, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER_BEGININVOKE_OFFSET))(this, settings, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CREATEBROWSER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
