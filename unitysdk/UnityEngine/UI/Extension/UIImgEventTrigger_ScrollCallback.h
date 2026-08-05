#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E354D30)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E354D60)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E354810)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3547F0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_ScrollCallback_TypeDefinitionIndex = 71298;

	class UIImgEventTrigger_ScrollCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK_INVOKE_OFFSET))(this, eventData);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK_BEGININVOKE_OFFSET))(this, eventData, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_SCROLLCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
