#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B3FC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B4060)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B3C40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A690DA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ForwardJSCallFunc_TypeDefinitionIndex = 36138;

	class BrowserNative_ForwardJSCallFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::System::Int32 callbackId, ::System::String* data, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC_INVOKE_OFFSET))(this, browserId, callbackId, data, size);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::System::Int32 callbackId, ::System::String* data, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC_BEGININVOKE_OFFSET))(this, browserId, callbackId, data, size, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FORWARDJSCALLFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
