#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseInputModule; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CHANGEEVENTMODULE_OFFSET UNITYSDK_OFFSET(0x1B768350)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ALREADYSELECTING_OFFSET UNITYSDK_OFFSET(0x1B766EC0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_BASEEVENTDATACACHE_OFFSET UNITYSDK_OFFSET(0x1B766ED0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTINPUTMODULE_OFFSET UNITYSDK_OFFSET(0x1B766E00)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B766E30)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B766B60)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_FIRSTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B766E10)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B766E50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_LASTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B766E40)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_PIXELDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B766DE0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDNAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1B766DC0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDSUBMITEVENTS_OFFSET UNITYSDK_OFFSET(0x1B766DA0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B767C00)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B767AC0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B767F50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B767D50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B767CA0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0x1B7678B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1B766F50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B766F10)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B764FB0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B766C10)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_FIRSTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B766E20)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_PIXELDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B766DF0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDNAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1B766DD0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDSUBMITEVENTS_OFFSET UNITYSDK_OFFSET(0x1B766DB0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKMODULES_OFFSET UNITYSDK_OFFSET(0x1B767E40)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B768490)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEMODULES_OFFSET UNITYSDK_OFFSET(0x1B7659B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B767F60)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7687B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B766E60)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventSystem_TypeDefinitionIndex = 6920;

	class EventSystem : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventSystem*>** StaticGet_m_EventSystems()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventSystem*>**)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x2A330);
		}
		static ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>** StaticGet_s_RaycastComparer()
		{
			return (::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>**)Il2CppClass::FromTypeDefinitionIndex(EventSystem_TypeDefinitionIndex)->GetStaticField(0x2A338);
		}
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseInputModule*>* m_SystemInputModules; // 0x18
		::UnityEngine::EventSystems::BaseInputModule* m_CurrentInputModule; // 0x20
		::UnityEngine::GameObject* m_FirstSelected; // 0x28
		::System::Boolean m_sendNavigationEvents; // 0x30
		::System::Boolean m_sendSubmitEvents; // 0x31
		::System::Int32 m_DragThreshold; // 0x34
		::UnityEngine::GameObject* m_CurrentSelected; // 0x38
		::System::Boolean m_HasFocus; // 0x40
		::System::Boolean m_SelectionGuard; // 0x41
		::UnityEngine::EventSystems::BaseEventData* m_DummyData; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM__CCTOR_OFFSET))();
		}

		static ::UnityEngine::EventSystems::EventSystem* get_current()
		{
			return ((::UnityEngine::EventSystems::EventSystem*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::EventSystems::EventSystem* a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_CURRENT_OFFSET))(a1);
		}

		::System::Boolean get_sendSubmitEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDSUBMITEVENTS_OFFSET))(this);
		}

		::System::Void set_sendSubmitEvents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDSUBMITEVENTS_OFFSET))(this, a1);
		}

		::System::Boolean get_sendNavigationEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDNAVIGATIONEVENTS_OFFSET))(this);
		}

		::System::Void set_sendNavigationEvents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDNAVIGATIONEVENTS_OFFSET))(this, a1);
		}

		::System::Int32 get_pixelDragThreshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_PIXELDRAGTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_pixelDragThreshold(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_PIXELDRAGTHRESHOLD_OFFSET))(this, a1);
		}

		::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule()
		{
			return ((::UnityEngine::EventSystems::BaseInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTINPUTMODULE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_firstSelectedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_FIRSTSELECTEDGAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_firstSelectedGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_FIRSTSELECTEDGAMEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_currentSelectedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTSELECTEDGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_lastSelectedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_LASTSELECTEDGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void UpdateModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEMODULES_OFFSET))(this);
		}

		::System::Boolean get_alreadySelecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ALREADYSELECTING_OFFSET))(this);
		}

		::System::Void SetSelectedGameObject(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::EventSystems::BaseEventData* get_baseEventDataCache()
		{
			return ((::UnityEngine::EventSystems::BaseEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_BASEEVENTDATACACHE_OFFSET))(this);
		}

		::System::Void SetSelectedGameObject_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_1_OFFSET))(this, a1);
		}

		static ::System::Int32 RaycastComparer(::UnityEngine::EventSystems::RaycastResult a1, ::UnityEngine::EventSystems::RaycastResult a2)
		{
			return ((::System::Int32(*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTCOMPARER_OFFSET))(a1, a2);
		}

		::System::Void RaycastAll(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTALL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPointerOverGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean IsPointerOverGameObject_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_1_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void TickModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKMODULES_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void ChangeEventModule(::UnityEngine::EventSystems::BaseInputModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseInputModule*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CHANGEEVENTMODULE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TOSTRING_OFFSET))(this);
		}
	};
}
