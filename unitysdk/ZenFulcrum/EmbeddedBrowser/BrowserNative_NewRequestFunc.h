#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4F1E90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4F1EF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4F1E80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F1E10)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NewRequestFunc_TypeDefinitionIndex = 36435;

	class BrowserNative_NewRequestFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWREQUESTFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
