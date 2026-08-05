#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FA3A800)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FA3A830)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FA3A2E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA3A2C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_MessageFunc_TypeDefinitionIndex = 33188;

	class BrowserNative_MessageFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_MESSAGEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
