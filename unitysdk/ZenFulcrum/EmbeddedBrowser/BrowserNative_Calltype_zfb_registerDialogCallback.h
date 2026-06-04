#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_DisplayDialogFunc; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EFEB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EFF10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4DC400)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EFE40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_registerDialogCallback_TypeDefinitionIndex = 36513;

	class BrowserNative_Calltype_zfb_registerDialogCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_REGISTERDIALOGCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
