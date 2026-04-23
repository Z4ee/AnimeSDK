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

#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_CLEARSELECTION_OFFSET UNITYSDK_OFFSET(0x1A530C20)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_COPYFROMTO_OFFSET UNITYSDK_OFFSET(0x1A52FD60)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_DESELECTIFSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A531130)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETLASTPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x1A5304F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_1_OFFSET UNITYSDK_OFFSET(0x1A52FEA0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x1A52FE80)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETPOINTERDATA_OFFSET UNITYSDK_OFFSET(0x1A52F8F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETTOUCHPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x1A52FB10)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A530B80)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSDRAG_OFFSET UNITYSDK_OFFSET(0x1A530600)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSMOVE_OFFSET UNITYSDK_OFFSET(0x1A5305C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_REMOVEPOINTERDATA_OFFSET UNITYSDK_OFFSET(0x1A52FAE0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_SHOULDSTARTDRAG_OFFSET UNITYSDK_OFFSET(0x1A530580)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_STATEFORMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1A52FDF0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A530E30)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A531290)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerInputModule_TypeDefinitionIndex = 5819;

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

		::System::Boolean GetPointerData(::System::Int32 id, ::UnityEngine::EventSystems::PointerEventData*& data, ::System::Boolean create)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::EventSystems::PointerEventData*&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETPOINTERDATA_OFFSET))(this, id, data, create);
		}

		::System::Void RemovePointerData(::UnityEngine::EventSystems::PointerEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_REMOVEPOINTERDATA_OFFSET))(this, data);
		}

		::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(::UnityEngine::Touch input, ::System::Boolean& pressed, ::System::Boolean& released)
		{
			return ((::UnityEngine::EventSystems::PointerEventData*(*)(::PVOID, ::UnityEngine::Touch, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETTOUCHPOINTEREVENTDATA_OFFSET))(this, input, pressed, released);
		}

		::System::Void CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_COPYFROMTO_OFFSET))(this, from, to);
		}

		::UnityEngine::EventSystems::PointerEventData_FramePressState StateForMouseButton(::System::Int32 buttonId)
		{
			return ((::UnityEngine::EventSystems::PointerEventData_FramePressState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_STATEFORMOUSEBUTTON_OFFSET))(this, buttonId);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData()
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData_1(::System::Int32 id)
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_1_OFFSET))(this, id);
		}

		::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(::System::Int32 id)
		{
			return ((::UnityEngine::EventSystems::PointerEventData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETLASTPOINTEREVENTDATA_OFFSET))(this, id);
		}

		static ::System::Boolean ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, ::System::Single threshold, ::System::Boolean useDragThreshold)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_SHOULDSTARTDRAG_OFFSET))(pressPos, currentPos, threshold, useDragThreshold);
		}

		::System::Void ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSMOVE_OFFSET))(this, pointerEvent);
		}

		::System::Void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSDRAG_OFFSET))(this, pointerEvent);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 pointerId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(this, pointerId);
		}

		::System::Void ClearSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_CLEARSELECTION_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_TOSTRING_OFFSET))(this);
		}

		::System::Void DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_DESELECTIFSELECTIONCHANGED_OFFSET))(this, currentOverGo, pointerEvent);
		}
	};
}
