#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_AI_RVOAGENT_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB0EC0)
#define UNITYENGINE_AI_RVOAGENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EFB0E90)
#define UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB0F30)
#define UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1EFB0F00)
#define UNITYENGINE_AI_RVOAGENT_INTERNAL_CREATERVOAGENT_OFFSET UNITYSDK_OFFSET(0x1EFB0E80)
#define UNITYENGINE_AI_RVOAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1EFB0F70)
#define UNITYENGINE_AI_RVOAGENT_SET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1EFB0FD0)
#define UNITYENGINE_AI_RVOAGENT_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1EFB0F80)
#define UNITYENGINE_AI_RVOAGENT_SET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0x1EFB0FC0)
#define UNITYENGINE_AI_RVOAGENT_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB0EF0)
#define UNITYENGINE_AI_RVOAGENT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EFB0ED0)
#define UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB0F60)
#define UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EFB0F40)
#define UNITYENGINE_AI_RVOAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1EFB0F90)
#define UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0x1EFB0FB0)
#define UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0x1EFB0FA0)
#define UNITYENGINE_AI_RVOAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB0E70)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int RVOAgent_TypeDefinitionIndex = 5665;

	class RVOAgent : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CreateRVOAgent(::UnityEngine::AI::RVOAgent* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_INTERNAL_CREATERVOAGENT_OFFSET))(a1);
		}

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_velocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_prefVelocity(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_OFFSET))(this, a1);
		}

		::System::Void set_height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Void set_maxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::System::Void set_radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Void set_timeHorizon(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZON_OFFSET))(this, a1);
		}

		::System::Void set_timeHorizonObst(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET))(this, a1);
		}

		::System::Void set_neighborDist(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_NEIGHBORDIST_OFFSET))(this, a1);
		}

		::System::Void set_maxNeighbors(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_MAXNEIGHBORS_OFFSET))(this, a1);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_GET_VELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_prefVelocity_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_RVOAGENT_SET_PREFVELOCITY_INJECTED_OFFSET))(this, a1);
		}
	};
}
