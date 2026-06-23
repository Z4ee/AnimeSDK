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

#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1D310760)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DEACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1D310720)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1D30E940)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1D30E840)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDCOMMONROOT_OFFSET UNITYSDK_OFFSET(0x1D30EA10)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDFIRSTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1D30E630)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETAXISEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1D3103C0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETBASEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1D3105A0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_EVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D30E410)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D30E3F0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1D30DE80)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_SENDPOINTERHOVERTOPARENT_OFFSET UNITYSDK_OFFSET(0x1D30DE60)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_HANDLEPOINTEREXITANDENTER_OFFSET UNITYSDK_OFFSET(0x1D30EEC0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D3107E0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D310660)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D30E580)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D30E420)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D30E400)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_SENDPOINTERHOVERTOPARENT_OFFSET UNITYSDK_OFFSET(0x1D30DE70)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1D3106B0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0x1D3107A0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D310820)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D310920)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D310960)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseInputModule_TypeDefinitionIndex = 19047;

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
