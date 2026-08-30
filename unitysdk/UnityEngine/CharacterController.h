#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/CollisionFlags.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8E4830)
#define UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0x1E8E4820)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterController_TypeDefinitionIndex = 5308;

	class CharacterController : public ::UnityEngine::Collider
	{
	public:
		::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_OFFSET))(this, a1);
		}

		::UnityEngine::CollisionFlags Move_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::UnityEngine::CollisionFlags(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERCONTROLLER_MOVE_INJECTED_OFFSET))(this, a1);
		}
	};
}
