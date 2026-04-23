#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B5CD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B5D80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B58D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A692220)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ReportFunc_TypeDefinitionIndex = 36145;

	class BrowserNative_ReportFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::System::Int32 eventId, ::System::Int64 param1, ::System::Int64 param2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_INVOKE_OFFSET))(this, browserId, eventId, param1, param2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::System::Int32 eventId, ::System::Int64 param1, ::System::Int64 param2, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_BEGININVOKE_OFFSET))(this, browserId, eventId, param1, param2, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_REPORTFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
