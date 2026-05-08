#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AEE7310)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEE7410)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE7400)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PhysicsRaycaster_RaycastHitComparer_TypeDefinitionIndex = 8552;

	class PhysicsRaycaster_RaycastHitComparer : public ::System::Object
	{
	public:
		static ::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer** StaticGet_instance()
		{
			return (::UnityEngine::EventSystems::PhysicsRaycaster_RaycastHitComparer**)Il2CppClass::FromTypeDefinitionIndex(PhysicsRaycaster_RaycastHitComparer_TypeDefinitionIndex)->GetStaticField(0x7560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCASTHITCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
