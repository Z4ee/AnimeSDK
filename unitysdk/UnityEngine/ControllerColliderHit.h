#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_CONTROLLERCOLLIDERHIT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B7B1EB0)
#define UNITYENGINE_CONTROLLERCOLLIDERHIT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x1B7B1ED0)
#define UNITYENGINE_CONTROLLERCOLLIDERHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B1EF0)

namespace UnityEngine
{
	inline static constexpr unsigned int ControllerColliderHit_TypeDefinitionIndex = 7656;

	class ControllerColliderHit : public ::System::Object
	{
	public:
		::UnityEngine::CharacterController* m_Controller; // 0x10
		::UnityEngine::Collider* m_Collider; // 0x18
		::UnityEngine::Vector3 m_Point; // 0x20
		::UnityEngine::Vector3 m_Normal; // 0x2C
		::UnityEngine::Vector3 m_MoveDirection; // 0x38
		::System::Single m_MoveLength; // 0x44
		::System::Int32 m_Push; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTROLLERCOLLIDERHIT__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTROLLERCOLLIDERHIT_GET_GAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_point()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTROLLERCOLLIDERHIT_GET_POINT_OFFSET))(this);
		}
	};
}
