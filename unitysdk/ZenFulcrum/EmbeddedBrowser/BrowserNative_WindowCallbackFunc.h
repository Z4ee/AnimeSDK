#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5356E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E535770)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5353A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E535380)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_WindowCallbackFunc_TypeDefinitionIndex = 32565;

	class BrowserNative_WindowCallbackFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 windowId, ::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_INVOKE_OFFSET))(this, windowId, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 windowId, ::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_BEGININVOKE_OFFSET))(this, windowId, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_WINDOWCALLBACKFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
