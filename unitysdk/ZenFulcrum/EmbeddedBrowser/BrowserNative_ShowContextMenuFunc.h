#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ContextMenuOrigin.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E4430)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E4510)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E43F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E4380)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ShowContextMenuFunc_TypeDefinitionIndex = 38083;

	class BrowserNative_ShowContextMenuFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
