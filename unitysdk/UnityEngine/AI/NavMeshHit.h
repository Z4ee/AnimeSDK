#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHHIT_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x61E820)
#define UNITYENGINE_AI_NAVMESHHIT_GET_HIT_OFFSET UNITYSDK_OFFSET(0x7C1050)
#define UNITYENGINE_AI_NAVMESHHIT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x457AA0)
#define UNITYENGINE_AI_NAVMESHHIT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x34AF10)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshHit_TypeDefinitionIndex = 27997;

	struct alignas(4) NavMeshHit
	{
		::UnityEngine::Vector3 m_Position; // 0x10
		::UnityEngine::Vector3 m_Normal; // 0x1C
		::System::Single m_Distance; // 0x28
		::System::Int32 m_Mask; // 0x2C
		::System::Int32 m_Hit; // 0x30

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHHIT_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHHIT_GET_NORMAL_OFFSET))(this);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHHIT_GET_DISTANCE_OFFSET))(this);
		}

		::System::Boolean get_hit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHHIT_GET_HIT_OFFSET))(this);
		}
	};
}
