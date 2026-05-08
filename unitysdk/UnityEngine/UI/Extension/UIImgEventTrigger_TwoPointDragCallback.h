#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18EBF060)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18EBF0E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18EBEAC0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBEAB0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_TwoPointDragCallback_TypeDefinitionIndex = 81047;

	class UIImgEventTrigger_TwoPointDragCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Single zoomValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK_INVOKE_OFFSET))(this, eventData, zoomValue);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Single zoomValue, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK_BEGININVOKE_OFFSET))(this, eventData, zoomValue, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
