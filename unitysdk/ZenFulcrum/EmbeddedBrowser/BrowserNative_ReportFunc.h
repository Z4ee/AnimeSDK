#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C7D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C880)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF8C7A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C730)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ReportFunc_TypeDefinitionIndex = 38086;

	class BrowserNative_ReportFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
