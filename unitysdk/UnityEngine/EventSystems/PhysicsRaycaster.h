#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseRaycaster.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_COMPUTERAYANDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1C2CE250)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1C2CDEF0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1C2CDD10)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1C2CE210)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_FINALEVENTMASK_OFFSET UNITYSDK_OFFSET(0x1C2CE080)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_MAXRAYINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x1C2CE230)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1C2CE6D0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1C2CE220)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_MAXRAYINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x1C2CE240)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CDCB0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PhysicsRaycaster_TypeDefinitionIndex = 8551;

	class PhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster
	{
	public:
		// static const ::System::Int32 kNoEventMaskSet = 0xFFFFFFFF; // 0x0
		::UnityEngine::Camera* m_EventCamera; // 0x20
		::UnityEngine::LayerMask m_EventMask; // 0x28
		::System::Int32 m_MaxRayIntersections; // 0x2C
		::System::Int32 m_LastMaxRayIntersections; // 0x30
		::Il2CppArray<::UnityEngine::RaycastHit>* m_Hits; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTCAMERA_OFFSET))(this);
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_DEPTH_OFFSET))(this);
		}

		::System::Int32 get_finalEventMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_FINALEVENTMASK_OFFSET))(this);
		}

		::UnityEngine::LayerMask get_eventMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTMASK_OFFSET))(this);
		}

		::System::Void set_eventMask(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_EVENTMASK_OFFSET))(this, value);
		}

		::System::Int32 get_maxRayIntersections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_MAXRAYINTERSECTIONS_OFFSET))(this);
		}

		::System::Void set_maxRayIntersections(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_MAXRAYINTERSECTIONS_OFFSET))(this, value);
		}

		::System::Boolean ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Ray& ray, ::System::Int32& eventDisplayIndex, ::System::Single& distanceToClipPlane)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Ray&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_COMPUTERAYANDDISTANCE_OFFSET))(this, eventData, ray, eventDisplayIndex, distanceToClipPlane);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCAST_OFFSET))(this, eventData, resultAppendList);
		}
	};
}
