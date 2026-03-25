#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_AI_RVOAGENT_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C8650)
#define UNITYENGINE_AI_RVOAGENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x189C8620)
#define UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C86C0)
#define UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x189C8690)
#define UNITYENGINE_AI_RVOAGENT_INTERNAL_CREATERVOAGENT_OFFSET UNITYSDK_OFFSET(0x189C8610)
#define UNITYENGINE_AI_RVOAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x189C8700)
#define UNITYENGINE_AI_RVOAGENT_SET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x189C8760)
#define UNITYENGINE_AI_RVOAGENT_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x189C8710)
#define UNITYENGINE_AI_RVOAGENT_SET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0x189C8750)
#define UNITYENGINE_AI_RVOAGENT_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C8680)
#define UNITYENGINE_AI_RVOAGENT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x189C8660)
#define UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x189C86F0)
#define UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0x189C86D0)
#define UNITYENGINE_AI_RVOAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x189C8720)
#define UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0x189C8740)
#define UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0x189C8730)
#define UNITYENGINE_AI_RVOAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x189C8600)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int RVOAgent_TypeDefinitionIndex = 5383;

	class RVOAgent : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CreateRVOAgent(::UnityEngine::AI::RVOAgent* self)
		{
			return ((::System::Void(*)(::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_INTERNAL_CREATERVOAGENT_OFFSET))(self);
		}

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_velocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_prefVelocity(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_OFFSET))(this, value);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Void set_maxSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_MAXSPEED_OFFSET))(this, value);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Void set_timeHorizon(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZON_OFFSET))(this, value);
		}

		::System::Void set_timeHorizonObst(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET))(this, value);
		}

		::System::Void set_neighborDist(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_NEIGHBORDIST_OFFSET))(this, value);
		}

		::System::Void set_maxNeighbors(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_MAXNEIGHBORS_OFFSET))(this, value);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_POSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_POSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_prefVelocity_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_INJECTED_OFFSET))(this, value);
		}
	};
}
