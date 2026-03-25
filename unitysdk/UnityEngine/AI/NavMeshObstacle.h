#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshObstacleShape.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHOBSTACLE_FITEXTENTS_OFFSET UNITYSDK_OFFSET(0x189C8490)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVEONLYSTATIONARY_OFFSET UNITYSDK_OFFSET(0x189C8310)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGMOVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x189C8330)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGTIMETOSTATIONARY_OFFSET UNITYSDK_OFFSET(0x189C8350)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVING_OFFSET UNITYSDK_OFFSET(0x189C82F0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C83E0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x189C8390)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x189C8230)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x189C8250)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x189C8370)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C8460)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x189C8410)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C82C0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x189C8270)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVEONLYSTATIONARY_OFFSET UNITYSDK_OFFSET(0x189C8320)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGMOVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x189C8340)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGTIMETOSTATIONARY_OFFSET UNITYSDK_OFFSET(0x189C8360)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVING_OFFSET UNITYSDK_OFFSET(0x189C8300)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C8400)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x189C83F0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x189C8240)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x189C8260)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x189C8380)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C8480)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x189C8470)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C82E0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x189C82D0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x189C84A0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshObstacle_TypeDefinitionIndex = 5359;

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
