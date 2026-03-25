#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/CollisionFlags.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9E390)
#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0x18A9E380)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterController_TypeDefinitionIndex = 5216;

	class CharacterController : public ::UnityEngine::Collider
	{
	public:
		::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET))(this, motion);
		}

		::UnityEngine::CollisionFlags Move_Injected(::UnityEngine::Vector3& motion)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET))(this, motion);
		}
	};
}
