#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E3E50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E3F20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E3E10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E3DA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NavStateFunc_TypeDefinitionIndex = 38085;

	class BrowserNative_NavStateFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::IntPtr a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::IntPtr a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NAVSTATEFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
