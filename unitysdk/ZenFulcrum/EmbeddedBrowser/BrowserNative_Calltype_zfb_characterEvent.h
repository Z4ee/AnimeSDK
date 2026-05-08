#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C510DD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C510E80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C510A50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C510A40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_characterEvent_TypeDefinitionIndex = 31074;

	class BrowserNative_Calltype_zfb_characterEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::Int32 character, ::System::Int32 windowsKeyCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT_INVOKE_OFFSET))(this, id, character, windowsKeyCode);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Int32 character, ::System::Int32 windowsKeyCode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT_BEGININVOKE_OFFSET))(this, id, character, windowsKeyCode, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_CHARACTEREVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
