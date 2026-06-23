#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/CollisionFlags.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DB2BB50)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1DB2BB00)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_COLLISIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1DB2BAB0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1DB2BC00)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_ENABLEOVERLAPRECOVERY_OFFSET UNITYSDK_OFFSET(0x1DB2BC20)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1DB2BAE0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1DB2BAA0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_MINMOVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DB2BBE0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DB2BAC0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1DB2BBC0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_SLOPELIMIT_OFFSET UNITYSDK_OFFSET(0x1DB2BB80)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_STEPOFFSET_OFFSET UNITYSDK_OFFSET(0x1DB2BBA0)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DB2BA90)
#define UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1DB2BA40)
#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DB2BA30)
#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0x1DB2BA20)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DB2BB70)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1DB2BB60)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1DB2BC10)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_ENABLEOVERLAPRECOVERY_OFFSET UNITYSDK_OFFSET(0x1DB2BC30)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1DB2BAF0)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_MINMOVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DB2BBF0)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DB2BAD0)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_SKINWIDTH_OFFSET UNITYSDK_OFFSET(0x1DB2BBD0)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_SLOPELIMIT_OFFSET UNITYSDK_OFFSET(0x1DB2BB90)
#define UNITYENGINE_CHARACTERCONTROLLER_SET_STEPOFFSET_OFFSET UNITYSDK_OFFSET(0x1DB2BBB0)
#define UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DB2BA10)
#define UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_OFFSET UNITYSDK_OFFSET(0x1DB2BA00)
#define UNITYENGINE_CHARACTERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2BC40)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterController_TypeDefinitionIndex = 7717;

	class CharacterController : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean SimpleMove(::UnityEngine::Vector3 speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_OFFSET))(this, speed);
		}

		::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET))(this, motion);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_OFFSET))(this);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_ISGROUNDED_OFFSET))(this);
		}

		::UnityEngine::CollisionFlags get_collisionFlags()
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_COLLISIONFLAGS_OFFSET))(this);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_HEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_OFFSET))(this, value);
		}

		::System::Single get_slopeLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_SLOPELIMIT_OFFSET))(this);
		}

		::System::Void set_slopeLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_SLOPELIMIT_OFFSET))(this, value);
		}

		::System::Single get_stepOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_STEPOFFSET_OFFSET))(this);
		}

		::System::Void set_stepOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_STEPOFFSET_OFFSET))(this, value);
		}

		::System::Single get_skinWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_SKINWIDTH_OFFSET))(this);
		}

		::System::Void set_skinWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_SKINWIDTH_OFFSET))(this, value);
		}

		::System::Single get_minMoveDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_MINMOVEDISTANCE_OFFSET))(this);
		}

		::System::Void set_minMoveDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_MINMOVEDISTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_detectCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_DETECTCOLLISIONS_OFFSET))(this);
		}

		::System::Void set_detectCollisions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_DETECTCOLLISIONS_OFFSET))(this, value);
		}

		::System::Boolean get_enableOverlapRecovery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_ENABLEOVERLAPRECOVERY_OFFSET))(this);
		}

		::System::Void set_enableOverlapRecovery(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_ENABLEOVERLAPRECOVERY_OFFSET))(this, value);
		}

		::System::Boolean SimpleMove_Injected(::UnityEngine::Vector3& speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SIMPLEMOVE_INJECTED_OFFSET))(this, speed);
		}

		::UnityEngine::CollisionFlags Move_Injected(::UnityEngine::Vector3& motion)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET))(this, motion);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_SET_CENTER_INJECTED_OFFSET))(this, value);
		}
	};
}
