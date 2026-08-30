#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define UNITYENGINE_COLLISION_GETCONTACTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDBA870)
#define UNITYENGINE_COLLISION_GETCONTACT_OFFSET UNITYSDK_OFFSET(0x1EDBA950)
#define UNITYENGINE_COLLISION_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1EDBA8A0)
#define UNITYENGINE_COLLISION_GET_CONTACTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDBA8F0)
#define UNITYENGINE_COLLISION_GET_CONTACTS_OFFSET UNITYSDK_OFFSET(0x1EDBA900)
#define UNITYENGINE_COLLISION_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EDBA8B0)
#define UNITYENGINE_COLLISION_GET_RELATIVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDBA880)

namespace UnityEngine
{
	inline static constexpr unsigned int Collision_TypeDefinitionIndex = 5299;

	class Collision : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 m_Impulse; // 0x10
		::UnityEngine::Vector3 m_RelativeVelocity; // 0x1C
		::UnityEngine::Rigidbody* m_Rigidbody; // 0x28
		::UnityEngine::Collider* m_Collider; // 0x30
		::System::Int32 m_ContactCount; // 0x38
		::Il2CppArray<::UnityEngine::ContactPoint>* m_ReusedContacts; // 0x40
		::Il2CppArray<::UnityEngine::ContactPoint>* m_LegacyContacts; // 0x48

		::Il2CppArray<::UnityEngine::ContactPoint>* GetContacts_Internal()
		{
			return ((::Il2CppArray<::UnityEngine::ContactPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GETCONTACTS_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_relativeVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_RELATIVEVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Collider* get_collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_COLLIDER_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Int32 get_contactCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_CONTACTCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ContactPoint>* get_contacts()
		{
			return ((::Il2CppArray<::UnityEngine::ContactPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_CONTACTS_OFFSET))(this);
		}

		::UnityEngine::ContactPoint GetContact(::System::Int32 a1)
		{
			return ((::UnityEngine::ContactPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GETCONTACT_OFFSET))(this, a1);
		}
	};
}
