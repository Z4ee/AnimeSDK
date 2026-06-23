#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_CursorType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E776650)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E776700)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7762C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7762A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_getMouseCursor_TypeDefinitionIndex = 32630;

	class BrowserNative_Calltype_zfb_getMouseCursor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType Invoke(::System::Int32 id, ::System::Int32& width, ::System::Int32& height)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_INVOKE_OFFSET))(this, id, width, height);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Int32& width, ::System::Int32& height, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_BEGININVOKE_OFFSET))(this, id, width, height, callback, object);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType EndInvoke(::System::Int32& width, ::System::Int32& height, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECURSOR_ENDINVOKE_OFFSET))(this, width, height, result);
		}
	};
}
