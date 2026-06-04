#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_COLLISION2D_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1B322480)
#define UNITYENGINE_COLLISION2D_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B322570)
#define UNITYENGINE_COLLISION2D_GET_RELATIVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B3226B0)
#define UNITYENGINE_COLLISION2D_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1B322510)

namespace UnityEngine
{
	inline static constexpr unsigned int Collision2D_TypeDefinitionIndex = 5274;

	class Collision2D : public ::System::Object
	{
	public:
		::System::Int32 m_Collider; // 0x10
		::System::Int32 m_OtherCollider; // 0x14
		::System::Int32 m_Rigidbody; // 0x18
		::System::Int32 m_OtherRigidbody; // 0x1C
		::UnityEngine::Vector2 m_RelativeVelocity; // 0x20
		::System::Int32 m_Enabled; // 0x28
		::System::Int32 m_ContactCount; // 0x2C
		::Il2CppArray<::UnityEngine::ContactPoint2D>* m_ReusedContacts; // 0x30
		::Il2CppArray<::UnityEngine::ContactPoint2D>* m_LegacyContacts; // 0x38

		::UnityEngine::Collider2D* get_collider()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_COLLIDER_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_rigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_RIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_GAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_relativeVelocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_RELATIVEVELOCITY_OFFSET))(this);
		}
	};
}
