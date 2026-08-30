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

#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_COMPUTERAYANDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B76B8B0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1B76C0A0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1B76C000)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1B76C1E0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_FINALEVENTMASK_OFFSET UNITYSDK_OFFSET(0x1B76BEC0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_MAXRAYINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x1B76C200)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B76C220)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1B76C1F0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_MAXRAYINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x1B76C210)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76B0C0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PhysicsRaycaster_TypeDefinitionIndex = 6943;

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

		::System::Void set_eventMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_EVENTMASK_OFFSET))(this, a1);
		}

		::System::Int32 get_maxRayIntersections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_MAXRAYINTERSECTIONS_OFFSET))(this);
		}

		::System::Void set_maxRayIntersections(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_MAXRAYINTERSECTIONS_OFFSET))(this, a1);
		}

		::System::Boolean ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Ray& a2, ::System::Int32& a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Ray&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_COMPUTERAYANDDISTANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCAST_OFFSET))(this, a1, a2);
		}
	};
}
