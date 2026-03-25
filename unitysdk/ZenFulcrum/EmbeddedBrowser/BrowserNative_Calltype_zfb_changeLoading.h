#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_LoadChange.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C72D20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C72DB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C5D340)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING__CTOR_OFFSET UNITYSDK_OFFSET(0x18C72D00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_changeLoading_TypeDefinitionIndex = 30479;

	class BrowserNative_Calltype_zfb_changeLoading : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_LoadChange what)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_LoadChange))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING_INVOKE_OFFSET))(this, id, what);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_LoadChange what, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_LoadChange, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING_BEGININVOKE_OFFSET))(this, id, what, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHANGELOADING_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
