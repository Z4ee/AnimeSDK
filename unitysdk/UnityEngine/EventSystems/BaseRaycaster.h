#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18AEE410)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x18AEE430)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_ROOTRAYCASTER_OFFSET UNITYSDK_OFFSET(0x18AEE440)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x18AEE420)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x18AEE900)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18AEE810)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18AEE720)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x18AEE920)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18AEE520)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEE940)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseRaycaster_TypeDefinitionIndex = 5817;

	class BaseRaycaster : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::EventSystems::BaseRaycaster* m_RootRaycaster; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER__CTOR_OFFSET))(this);
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
	};
}
