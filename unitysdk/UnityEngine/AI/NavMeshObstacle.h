#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshObstacleShape.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHOBSTACLE_FITEXTENTS_OFFSET UNITYSDK_OFFSET(0x1C02BE70)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVEONLYSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1C02BCF0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGMOVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C02BD10)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVINGTIMETOSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1C02BD30)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CARVING_OFFSET UNITYSDK_OFFSET(0x1C02BCD0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02BDC0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1C02BD70)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C02BC10)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_OVERRIDEAREAVALUE_OFFSET UNITYSDK_OFFSET(0x1C02BEA0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1C02BE80)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C02BC30)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C02BD50)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02BE40)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C02BDF0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02BCA0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1C02BC50)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVEONLYSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1C02BD00)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGMOVETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C02BD20)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVINGTIMETOSTATIONARY_OFFSET UNITYSDK_OFFSET(0x1C02BD40)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CARVING_OFFSET UNITYSDK_OFFSET(0x1C02BCE0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02BDE0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1C02BDD0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C02BC20)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_OVERRIDEAREAVALUE_OFFSET UNITYSDK_OFFSET(0x1C02BEB0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1C02BE90)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1C02BC40)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C02BD60)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02BE60)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C02BE50)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02BCC0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1C02BCB0)
#define UNITYENGINE_AI_NAVMESHOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02BEC0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshObstacle_TypeDefinitionIndex = 24799;

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
