#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ContextMenuOrigin.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C3050A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C305180)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C304CD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C304CC0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ShowContextMenuFunc_TypeDefinitionIndex = 31010;

	class BrowserNative_ShowContextMenuFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::System::String* menuJSON, ::System::Int32 x, ::System::Int32 y, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin origin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_INVOKE_OFFSET))(this, browserId, menuJSON, x, y, origin);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::System::String* menuJSON, ::System::Int32 x, ::System::Int32 y, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin origin, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ContextMenuOrigin, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_BEGININVOKE_OFFSET))(this, browserId, menuJSON, x, y, origin, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_SHOWCONTEXTMENUFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
