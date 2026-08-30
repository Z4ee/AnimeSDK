#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E3800)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E3890)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7E37D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E3760)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ConsoleFunc_TypeDefinitionIndex = 38078;

	class BrowserNative_ConsoleFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
