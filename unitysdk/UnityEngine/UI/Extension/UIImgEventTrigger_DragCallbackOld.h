#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E45300)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E45360)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E44DA0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x19E44D80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_DragCallbackOld_TypeDefinitionIndex = 65766;

	class UIImgEventTrigger_DragCallbackOld : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector2 inchPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD_INVOKE_OFFSET))(this, eventData, inchPointDelta);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector2 inchPointDelta, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD_BEGININVOKE_OFFSET))(this, eventData, inchPointDelta, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_DRAGCALLBACKOLD_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
