#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E4CF4F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E4CF560)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E4CF180)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CF160)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_setCallbacksEnabled_TypeDefinitionIndex = 32592;

	class BrowserNative_Calltype_zfb_setCallbacksEnabled : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED_INVOKE_OFFSET))(this, enabled);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean enabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED_BEGININVOKE_OFFSET))(this, enabled, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETCALLBACKSENABLED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
