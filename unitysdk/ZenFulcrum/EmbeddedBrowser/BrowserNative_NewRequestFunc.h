#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C79F30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C79F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C79BE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6EE70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NewRequestFunc_TypeDefinitionIndex = 30415;

	class BrowserNative_NewRequestFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 requestId, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_INVOKE_OFFSET))(this, requestId, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 requestId, ::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_BEGININVOKE_OFFSET))(this, requestId, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
