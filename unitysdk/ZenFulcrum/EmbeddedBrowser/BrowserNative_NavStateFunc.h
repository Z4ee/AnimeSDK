#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C79B00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C79BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C79720)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18C569A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NavStateFunc_TypeDefinitionIndex = 30424;

	class BrowserNative_NavStateFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::System::Boolean canGoBack, ::System::Boolean canGoForward, ::System::Boolean lodaing, ::System::IntPtr url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_INVOKE_OFFSET))(this, browserId, canGoBack, canGoForward, lodaing, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::System::Boolean canGoBack, ::System::Boolean canGoForward, ::System::Boolean lodaing, ::System::IntPtr url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_BEGININVOKE_OFFSET))(this, browserId, canGoBack, canGoForward, lodaing, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
