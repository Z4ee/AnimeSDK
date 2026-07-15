#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseInputModule.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_FramePressState.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class PointerInputModule_MouseState; }

#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_CLEARSELECTION_OFFSET UNITYSDK_OFFSET(0x19BE2AE0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_COPYFROMTO_OFFSET UNITYSDK_OFFSET(0x19BE1C40)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_DESELECTIFSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x19BE3090)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETLASTPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x19BE2410)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_1_OFFSET UNITYSDK_OFFSET(0x19BE1EA0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x19BE1E20)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETPOINTERDATA_OFFSET UNITYSDK_OFFSET(0x19BE1890)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETTOUCHPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x19BE1A80)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x19BE2A70)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSDRAG_OFFSET UNITYSDK_OFFSET(0x19BE24F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSMOVE_OFFSET UNITYSDK_OFFSET(0x19BE24B0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_REMOVEPOINTERDATA_OFFSET UNITYSDK_OFFSET(0x19BE1A40)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_SHOULDSTARTDRAG_OFFSET UNITYSDK_OFFSET(0x19BE2470)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_STATEFORMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x19BE1CD0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BE2D30)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE31F0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerInputModule_TypeDefinitionIndex = 6101;

	class PointerInputModule : public ::UnityEngine::EventSystems::BaseInputModule
	{
	public:
		// static const ::System::Int32 kMouseLeftId = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 kMouseRightId = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 kMouseMiddleId = 0xFFFFFFFD; // 0x0
		// static const ::System::Int32 kFakeTouchesId = 0xFFFFFFFC; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* m_PointerData; // 0x48
		::UnityEngine::EventSystems::PointerInputModule_MouseState* m_MouseState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean GetPointerData(::System::Int32 a1, ::UnityEngine::EventSystems::PointerEventData*& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETPOINTERDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemovePointerData(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_REMOVEPOINTERDATA_OFFSET))(this, a1);
		}

		::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(::UnityEngine::Touch a1, ::System::Boolean& a2, ::System::Boolean& a3)
		{
			return ((::UnityEngine::EventSystems::PointerEventData*(*)(::PVOID, ::UnityEngine::Touch, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETTOUCHPOINTEREVENTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CopyFromTo(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_COPYFROMTO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::EventSystems::PointerEventData_FramePressState StateForMouseButton(::System::Int32 a1)
		{
			return ((::UnityEngine::EventSystems::PointerEventData_FramePressState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_STATEFORMOUSEBUTTON_OFFSET))(this, a1);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData()
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData_1(::System::Int32 a1)
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_1_OFFSET))(this, a1);
		}

		::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(::System::Int32 a1)
		{
			return ((::UnityEngine::EventSystems::PointerEventData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETLASTPOINTEREVENTDATA_OFFSET))(this, a1);
		}

		static ::System::Boolean ShouldStartDrag(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_SHOULDSTARTDRAG_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void ProcessMove(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSMOVE_OFFSET))(this, a1);
		}

		::System::Void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSDRAG_OFFSET))(this, a1);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void ClearSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_CLEARSELECTION_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_TOSTRING_OFFSET))(this);
		}

		::System::Void DeselectIfSelectionChanged(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_DESELECTIFSELECTIONCHANGED_OFFSET))(this, a1, a2);
		}
	};
}
