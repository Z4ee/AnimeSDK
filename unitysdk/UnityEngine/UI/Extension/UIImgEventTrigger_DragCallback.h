#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18EBEA40)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18EBEAA0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18EBE290)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBE280)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_DragCallback_TypeDefinitionIndex = 81057;

	class UIImgEventTrigger_DragCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK_INVOKE_OFFSET))(this, eventData, worldPointDelta);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK_BEGININVOKE_OFFSET))(this, eventData, worldPointDelta, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
