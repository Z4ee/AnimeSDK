#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshObstacleShape.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHOBSTACLE_FITEXTENTS_OFFSET UNITYSDK_OFFSET(0x1F74D4B0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVEONLYSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1F74D330)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGMOVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1F74D350)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGTIMETOSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1F74D370)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVING_OFFSET UNITYSDK_OFFSET(0x1F74D310)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74D400)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1F74D3B0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1F74D250)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_OVERRIDEAREAVALUE_OFFSET UNITYSDK_OFFSET(0x1F74D4E0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1F74D4C0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1F74D270)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1F74D390)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74D480)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1F74D430)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74D2E0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1F74D290)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVEONLYSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1F74D340)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGMOVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1F74D360)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGTIMETOSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1F74D380)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVING_OFFSET UNITYSDK_OFFSET(0x1F74D320)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74D420)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1F74D410)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1F74D260)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_OVERRIDEAREAVALUE_OFFSET UNITYSDK_OFFSET(0x1F74D4F0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1F74D4D0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1F74D280)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1F74D3A0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74D4A0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1F74D490)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F74D300)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1F74D2F0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F74D500)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshObstacle_TypeDefinitionIndex = 27994;

	class NavMeshObstacle : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_RADIUS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_OFFSET))(this, value);
		}

		::System::Boolean get_carving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVING_OFFSET))(this);
		}

		::System::Void set_carving(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVING_OFFSET))(this, value);
		}

		::System::Boolean get_carveOnlyStationary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVEONLYSTATIONARY_OFFSET))(this);
		}

		::System::Void set_carveOnlyStationary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVEONLYSTATIONARY_OFFSET))(this, value);
		}

		::System::Single get_carvingMoveThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGMOVETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_carvingMoveThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGMOVETHRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_carvingTimeToStationary()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGTIMETOSTATIONARY_OFFSET))(this);
		}

		::System::Void set_carvingTimeToStationary(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGTIMETOSTATIONARY_OFFSET))(this, value);
		}

		::UnityEngine::AI::NavMeshObstacleShape get_shape()
		{
			return ((::UnityEngine::AI::NavMeshObstacleShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::AI::NavMeshObstacleShape value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshObstacleShape))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SHAPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void FitExtents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_FITEXTENTS_OFFSET))(this);
		}

		::System::Boolean get_overrideArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_OVERRIDEAREA_OFFSET))(this);
		}

		::System::Void set_overrideArea(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_OVERRIDEAREA_OFFSET))(this, value);
		}

		::System::Int32 get_overrideAreaValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_OVERRIDEAREAVALUE_OFFSET))(this);
		}

		::System::Void set_overrideAreaValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_OVERRIDEAREAVALUE_OFFSET))(this, value);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
