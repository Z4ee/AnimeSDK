#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseInput; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1E6C5BE0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DEACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1E6C5BA0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1E6C3D00)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E6C3C00)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDCOMMONROOT_OFFSET UNITYSDK_OFFSET(0x1E6C3DD0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDFIRSTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1E6C39F0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETAXISEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1E6C5840)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETBASEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1E6C5A20)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_EVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1E6C37D0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E6C37B0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1E6C3240)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_SENDPOINTERHOVERTOPARENT_OFFSET UNITYSDK_OFFSET(0x1E6C3220)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_HANDLEPOINTEREXITANDENTER_OFFSET UNITYSDK_OFFSET(0x1E6C4330)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E6C5C60)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E6C5AE0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E6C3940)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E6C37E0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1E6C37C0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_SENDPOINTERHOVERTOPARENT_OFFSET UNITYSDK_OFFSET(0x1E6C3230)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1E6C5B30)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0x1E6C5C20)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C5CA0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E6C5DA0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E6C5DE0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseInputModule_TypeDefinitionIndex = 19391;

	class BaseInputModule : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache; // 0x18
		::System::Boolean m_SendPointerHoverToParent; // 0x20
		::UnityEngine::EventSystems::AxisEventData* m_AxisEventData; // 0x28
		::UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x30
		::UnityEngine::EventSystems::BaseEventData* m_BaseEventData; // 0x38
		::UnityEngine::EventSystems::BaseInput* m_InputOverride; // 0x40
		::UnityEngine::EventSystems::BaseInput* m_DefaultInput; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_sendPointerHoverToParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_SENDPOINTERHOVERTOPARENT_OFFSET))(this);
		}

		::System::Void set_sendPointerHoverToParent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_SENDPOINTERHOVERTOPARENT_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::BaseInput* get_input()
		{
			return ((::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUT_OFFSET))(this);
		}

		::UnityEngine::EventSystems::BaseInput* get_inputOverride()
		{
			return ((::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUTOVERRIDE_OFFSET))(this);
		}

		::System::Void set_inputOverride(::UnityEngine::EventSystems::BaseInput* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_INPUTOVERRIDE_OFFSET))(this, value);
		}

		::UnityEngine::EventSystems::EventSystem* get_eventSystem()
		{
			return ((::UnityEngine::EventSystems::EventSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_EVENTSYSTEM_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONDISABLE_OFFSET))(this);
		}

		static ::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* candidates)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDFIRSTRAYCAST_OFFSET))(candidates);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET))(x, y);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection_1(::System::Single x, ::System::Single y, ::System::Single deadZone)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_1_OFFSET))(x, y, deadZone);
		}

		static ::UnityEngine::GameObject* FindCommonRoot(::UnityEngine::GameObject* g1, ::UnityEngine::GameObject* g2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDCOMMONROOT_OFFSET))(g1, g2);
		}

		::System::Void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_HANDLEPOINTEREXITANDENTER_OFFSET))(this, currentPointerData, newEnterTarget);
		}

		::UnityEngine::EventSystems::AxisEventData* GetAxisEventData(::System::Single x, ::System::Single y, ::System::Single moveDeadZone)
		{
			return ((::UnityEngine::EventSystems::AxisEventData*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETAXISEVENTDATA_OFFSET))(this, x, y, moveDeadZone);
		}

		::UnityEngine::EventSystems::BaseEventData* GetBaseEventData()
		{
			return ((::UnityEngine::EventSystems::BaseEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETBASEEVENTDATA_OFFSET))(this);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 pointerId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(this, pointerId);
		}

		::System::Boolean ShouldActivateModule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET))(this);
		}

		::System::Void DeactivateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DEACTIVATEMODULE_OFFSET))(this);
		}

		::System::Void ActivateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ACTIVATEMODULE_OFFSET))(this);
		}

		::System::Void UpdateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_UPDATEMODULE_OFFSET))(this);
		}

		::System::Boolean IsModuleSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISMODULESUPPORTED_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
