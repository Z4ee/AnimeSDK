#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FC1FD00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FC1FD90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FC1F9F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1F9D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_sendContextMenuResults_TypeDefinitionIndex = 33271;

	class BrowserNative_Calltype_zfb_sendContextMenuResults : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::Int32 commandId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS_INVOKE_OFFSET))(this, id, commandId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Int32 commandId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS_BEGININVOKE_OFFSET))(this, id, commandId, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDCONTEXTMENURESULTS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
