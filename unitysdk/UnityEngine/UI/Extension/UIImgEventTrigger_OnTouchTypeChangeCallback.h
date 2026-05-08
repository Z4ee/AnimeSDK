#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18D56510)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18D56540)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18D53E10)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18D56500)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_OnTouchTypeChangeCallback_TypeDefinitionIndex = 81054;

	class UIImgEventTrigger_OnTouchTypeChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ONTOUCHTYPECHANGECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
