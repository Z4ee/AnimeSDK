#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }

#define UNITYENGINE_RAYCASTHIT2D_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x22F6CE0)
#define UNITYENGINE_RAYCASTHIT2D_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x17967C0)
#define UNITYENGINE_RAYCASTHIT2D_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x13C30)
#define UNITYENGINE_RAYCASTHIT2D_GET_POINT_OFFSET UNITYSDK_OFFSET(0x5AF0)

namespace UnityEngine
{
	inline static constexpr unsigned int RaycastHit2D_TypeDefinitionIndex = 5200;

	struct alignas(4) RaycastHit2D
	{
		::UnityEngine::Vector2 m_Centroid; // 0x10
		::UnityEngine::Vector2 m_Point; // 0x18
		::UnityEngine::Vector2 m_Normal; // 0x20
		::System::Single m_Distance; // 0x28
		::System::Single m_Fraction; // 0x2C
		::System::Int32 m_Collider; // 0x30

		::UnityEngine::Vector2 get_point()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_POINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_normal()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_NORMAL_OFFSET))(this);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_DISTANCE_OFFSET))(this);
		}

		::UnityEngine::Collider2D* get_collider()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_COLLIDER_OFFSET))(this);
		}
	};
}
