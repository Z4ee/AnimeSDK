#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F928C90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F928D00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F928990)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F928970)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ReadyFunc_TypeDefinitionIndex = 33190;

	class BrowserNative_ReadyFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_INVOKE_OFFSET))(this, browserId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_BEGININVOKE_OFFSET))(this, browserId, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
