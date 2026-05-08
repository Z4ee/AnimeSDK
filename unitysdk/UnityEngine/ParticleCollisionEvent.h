#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_PARTICLECOLLISIONEVENT_GET_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define UNITYENGINE_PARTICLECOLLISIONEVENT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x3FFA00)
#define UNITYENGINE_PARTICLECOLLISIONEVENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x3F6B40)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleCollisionEvent_TypeDefinitionIndex = 24913;

	struct alignas(4) ParticleCollisionEvent
	{
		::UnityEngine::Vector3 m_Intersection; // 0x10
		::UnityEngine::Vector3 m_Normal; // 0x1C
		::UnityEngine::Vector3 m_Velocity; // 0x28
		::System::Int32 m_ColliderInstanceID; // 0x34

		::UnityEngine::Vector3 get_intersection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLECOLLISIONEVENT_GET_INTERSECTION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLECOLLISIONEVENT_GET_NORMAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLECOLLISIONEVENT_GET_VELOCITY_OFFSET))(this);
		}
	};
}
