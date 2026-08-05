#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F0DF6B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F0DF780)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F0DF340)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0DF320)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_keyEvent_TypeDefinitionIndex = 33259;

	class BrowserNative_Calltype_zfb_keyEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::Boolean down, ::System::Int32 windowsKeyCode, ::System::Int32 modifiers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT_INVOKE_OFFSET))(this, id, down, windowsKeyCode, modifiers);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Boolean down, ::System::Int32 windowsKeyCode, ::System::Int32 modifiers, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT_BEGININVOKE_OFFSET))(this, id, down, windowsKeyCode, modifiers, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_KEYEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
