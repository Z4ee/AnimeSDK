#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_MessageFunc; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C77500)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C77530)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C6E920)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18C774E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_setDebugFunc_TypeDefinitionIndex = 30449;

	class BrowserNative_Calltype_zfb_setDebugFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc* debugFunc)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC_INVOKE_OFFSET))(this, debugFunc);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc* debugFunc, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC_BEGININVOKE_OFFSET))(this, debugFunc, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETDEBUGFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
