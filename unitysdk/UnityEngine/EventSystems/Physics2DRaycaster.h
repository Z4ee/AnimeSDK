#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/PhysicsRaycaster.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1C1529E0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C152980)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER___BASE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1C153620)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int Physics2DRaycaster_TypeDefinitionIndex = 8550;

	class Physics2DRaycaster : public ::UnityEngine::EventSystems::PhysicsRaycaster
	{
	public:
		::Il2CppArray<::UnityEngine::RaycastHit2D>* m_Hits; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER__CTOR_OFFSET))(this);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_RAYCAST_OFFSET))(this, eventData, resultAppendList);
		}

		::System::Void __base_Raycast(::UnityEngine::EventSystems::PointerEventData* P0, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER___BASE_RAYCAST_OFFSET))(this, P0, P1);
		}
	};
}
