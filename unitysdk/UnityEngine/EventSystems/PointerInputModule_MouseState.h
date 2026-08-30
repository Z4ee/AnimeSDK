#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_FramePressState.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_InputButton.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class PointerInputModule_ButtonState; }

#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_ANYPRESSESTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1EE0F920)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_ANYRELEASESTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1EE0F9A0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_GETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1EE0FA20)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1EE0E950)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE0F860)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerInputModule_MouseState_TypeDefinitionIndex = 6933;

	class PointerInputModule_MouseState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>* m_TrackedButtons; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean AnyPressesThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_ANYPRESSESTHISFRAME_OFFSET))(this);
		}

		::System::Boolean AnyReleasesThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_ANYRELEASESTHISFRAME_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerInputModule_ButtonState* GetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton a1)
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_ButtonState*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_GETBUTTONSTATE_OFFSET))(this, a1);
		}

		::System::Void SetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton a1, ::UnityEngine::EventSystems::PointerEventData_FramePressState a2, ::UnityEngine::EventSystems::PointerEventData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton, ::UnityEngine::EventSystems::PointerEventData_FramePressState, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_MOUSESTATE_SETBUTTONSTATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
