#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E534F30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E534FE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E534BB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E534B90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NewWindowFunc_TypeDefinitionIndex = 32558;

	class BrowserNative_NewWindowFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 creatorBrowserId, ::System::Int32 newBrowserId, ::System::IntPtr initialURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_INVOKE_OFFSET))(this, creatorBrowserId, newBrowserId, initialURL);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 creatorBrowserId, ::System::Int32 newBrowserId, ::System::IntPtr initialURL, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_BEGININVOKE_OFFSET))(this, creatorBrowserId, newBrowserId, initialURL, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
