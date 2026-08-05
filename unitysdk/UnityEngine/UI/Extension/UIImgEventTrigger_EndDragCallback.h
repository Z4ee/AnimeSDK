#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C14C710)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C14C770)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C14BF20)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14BF00)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_EndDragCallback_TypeDefinitionIndex = 71299;

	class UIImgEventTrigger_EndDragCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 wordlPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK_INVOKE_OFFSET))(this, eventData, wordlPoint);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 wordlPoint, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK_BEGININVOKE_OFFSET))(this, eventData, wordlPoint, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_ENDDRAGCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
