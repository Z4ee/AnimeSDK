#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E41C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E4210)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D8890)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E4150)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ReadyFunc_TypeDefinitionIndex = 38077;

	class BrowserNative_ReadyFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_READYFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
