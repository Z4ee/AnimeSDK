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

#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B3751E0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DEACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B3751D0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1B3749C0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B374960)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDCOMMONROOT_OFFSET UNITYSDK_OFFSET(0x1B374A20)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDFIRSTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1B3748A0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETAXISEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1B375020)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETBASEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1B375140)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_EVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1B374660)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B374640)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1B3744D0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_HANDLEPOINTEREXITANDENTER_OFFSET UNITYSDK_OFFSET(0x1B374AD0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B375200)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B375180)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B374870)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B374670)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_INPUTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B374650)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B375190)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0x1B3751F0)
#define UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B375210)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseInputModule_TypeDefinitionIndex = 6095;

	class BaseInputModule : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache; // 0x18
		::UnityEngine::EventSystems::AxisEventData* m_AxisEventData; // 0x20
		::UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x28
		::UnityEngine::EventSystems::BaseEventData* m_BaseEventData; // 0x30
		::UnityEngine::EventSystems::BaseInput* m_InputOverride; // 0x38
		::UnityEngine::EventSystems::BaseInput* m_DefaultInput; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE__CTOR_OFFSET))(this);
		}

		::UnityEngine::EventSystems::BaseInput* get_input()
		{
			return ((::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUT_OFFSET))(this);
		}

		::UnityEngine::EventSystems::BaseInput* get_inputOverride()
		{
			return ((::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GET_INPUTOVERRIDE_OFFSET))(this);
		}

		::System::Void set_inputOverride(::UnityEngine::EventSystems::BaseInput* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_SET_INPUTOVERRIDE_OFFSET))(this, a1);
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

		static ::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* a1)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDFIRSTRAYCAST_OFFSET))(a1);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_DETERMINEMOVEDIRECTION_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::GameObject* FindCommonRoot(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_FINDCOMMONROOT_OFFSET))(a1, a2);
		}

		::System::Void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_HANDLEPOINTEREXITANDENTER_OFFSET))(this, a1, a2);
		}

		::UnityEngine::EventSystems::AxisEventData* GetAxisEventData(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::EventSystems::AxisEventData*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETAXISEVENTDATA_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::EventSystems::BaseEventData* GetBaseEventData()
		{
			return ((::UnityEngine::EventSystems::BaseEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_GETBASEEVENTDATA_OFFSET))(this);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(this, a1);
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
	};
}
