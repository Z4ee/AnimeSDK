#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_ChangeType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C77D80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C77E20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C779F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18C55C00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ChangeFunc_TypeDefinitionIndex = 30420;

	class BrowserNative_ChangeFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType changeType, ::System::String* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC_INVOKE_OFFSET))(this, browserId, changeType, arg1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType changeType, ::System::String* arg1, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeType, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC_BEGININVOKE_OFFSET))(this, browserId, changeType, arg1, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CHANGEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
