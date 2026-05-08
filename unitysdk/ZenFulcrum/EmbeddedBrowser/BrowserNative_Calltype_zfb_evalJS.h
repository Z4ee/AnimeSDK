#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2C7700)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2C77D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2C7320)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C7310)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_evalJS_TypeDefinitionIndex = 31076;

	class BrowserNative_Calltype_zfb_evalJS : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::String* script, ::System::String* scriptURL, ::System::Boolean block, ::System::Int32 timeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS_INVOKE_OFFSET))(this, id, script, scriptURL, block, timeout);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::String* script, ::System::String* scriptURL, ::System::Boolean block, ::System::Int32 timeout, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS_BEGININVOKE_OFFSET))(this, id, script, scriptURL, block, timeout, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_EVALJS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
