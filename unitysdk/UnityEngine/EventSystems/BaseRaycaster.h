#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1F9FD9B0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1F9FD9C0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F9FD9E0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_ROOTRAYCASTER_OFFSET UNITYSDK_OFFSET(0x1F9FD9F0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F9FD9D0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F9FE260)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F9FE1B0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F9FE0F0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F9FE2D0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_RAYCASTONE_OFFSET UNITYSDK_OFFSET(0x1F9FD960)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9FDC20)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9FE340)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F9FE390)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F9FE420)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F9FE4B0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F9FE540)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9FE5D0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseRaycaster_TypeDefinitionIndex = 19403;

	class BaseRaycaster : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::EventSystems::BaseRaycaster* m_RootRaycaster; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER__CTOR_OFFSET))(this);
		}

		::System::Void RaycastOne(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::EventSystems::RaycastResult& lastResult)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::RaycastResult&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_RAYCASTONE_OFFSET))(this, eventData, lastResult);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_CANVAS_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_PRIORITY_OFFSET))(this);
		}

		::System::Int32 get_sortOrderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_SORTORDERPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_renderOrderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_RENDERORDERPRIORITY_OFFSET))(this);
		}

		::UnityEngine::EventSystems::BaseRaycaster* get_rootRaycaster()
		{
			return ((::UnityEngine::EventSystems::BaseRaycaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_ROOTRAYCASTER_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_TOSTRING_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
