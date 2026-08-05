#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6CCE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6CD90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6C9B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6C990)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_mouseScroll_TypeDefinitionIndex = 33258;

	class BrowserNative_Calltype_zfb_mouseScroll : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::Int32 deltaX, ::System::Int32 deltaY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL_INVOKE_OFFSET))(this, id, deltaX, deltaY);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Int32 deltaX, ::System::Int32 deltaY, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL_BEGININVOKE_OFFSET))(this, id, deltaX, deltaY, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MOUSESCROLL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
