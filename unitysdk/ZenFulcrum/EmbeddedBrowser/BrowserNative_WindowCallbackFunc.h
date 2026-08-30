#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8CAB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8CB20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8CAA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8CA30)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_WindowCallbackFunc_TypeDefinitionIndex = 38087;

	class BrowserNative_WindowCallbackFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
