#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_CursorType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF89350)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF893E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF7CF50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF892E0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_getMouseCursor_TypeDefinitionIndex = 38152;

	class BrowserNative_Calltype_zfb_getMouseCursor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType Invoke(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType EndInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::IAsyncResult* a3)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
