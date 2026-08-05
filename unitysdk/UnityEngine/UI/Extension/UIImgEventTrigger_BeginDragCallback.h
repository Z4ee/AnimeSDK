#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E8320A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E832100)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E8318B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E831890)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_BeginDragCallback_TypeDefinitionIndex = 71295;

	class UIImgEventTrigger_BeginDragCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK_INVOKE_OFFSET))(this, eventData, worldPoint);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPoint, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK_BEGININVOKE_OFFSET))(this, eventData, worldPoint, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_BEGINDRAGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
