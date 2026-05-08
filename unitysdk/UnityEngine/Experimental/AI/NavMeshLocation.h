#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/AI/PolygonId.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHLOCATION_GET_POLYGON_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHLOCATION_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x3AAEA0)
#define UNITYENGINE_EXPERIMENTAL_AI_NAVMESHLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9BF530)

namespace UnityEngine::Experimental::AI
{
	inline static constexpr unsigned int NavMeshLocation_TypeDefinitionIndex = 24821;

	struct alignas(8) NavMeshLocation
	{
		::UnityEngine::Experimental::AI::PolygonId _polygon_k__BackingField; // 0x10
		::UnityEngine::Vector3 _position_k__BackingField; // 0x18

		::System::Void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Experimental::AI::PolygonId polygon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Experimental::AI::PolygonId))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHLOCATION__CTOR_OFFSET))(this, position, polygon);
		}

		::UnityEngine::Experimental::AI::PolygonId get_polygon()
		{
			return ((::UnityEngine::Experimental::AI::PolygonId(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHLOCATION_GET_POLYGON_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AI_NAVMESHLOCATION_GET_POSITION_OFFSET))(this);
		}
	};
}
