#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C781C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C78250)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C77E30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18C55F70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ConsoleFunc_TypeDefinitionIndex = 30417;

	class BrowserNative_ConsoleFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::System::String* message, ::System::String* source, ::System::Int32 line)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_INVOKE_OFFSET))(this, browserId, message, source, line);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::System::String* message, ::System::String* source, ::System::Int32 line, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_BEGININVOKE_OFFSET))(this, browserId, message, source, line, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CONSOLEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
