#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C5C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C650)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C5A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C530)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NewWindowFunc_TypeDefinitionIndex = 38080;

	class BrowserNative_NewWindowFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NEWWINDOWFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
