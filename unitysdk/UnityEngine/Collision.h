#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_COLLISION_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x1B7B1A30)
#define UNITYENGINE_COLLISION_GETCONTACTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B7B1510)
#define UNITYENGINE_COLLISION_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x1B7B19A0)
#define UNITYENGINE_COLLISION_GETCONTACT_OFFSET UNITYSDK_OFFSET(0x1B7B1890)
#define UNITYENGINE_COLLISION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B7B1AD0)
#define UNITYENGINE_COLLISION_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1B7B1560)
#define UNITYENGINE_COLLISION_GET_CONTACTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7B1810)
#define UNITYENGINE_COLLISION_GET_CONTACTS_OFFSET UNITYSDK_OFFSET(0x1B7B1820)
#define UNITYENGINE_COLLISION_GET_FRICTIONFORCESUM_OFFSET UNITYSDK_OFFSET(0x1B7B1CD0)
#define UNITYENGINE_COLLISION_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B7B16C0)
#define UNITYENGINE_COLLISION_GET_IMPACTFORCESUM_OFFSET UNITYSDK_OFFSET(0x1B7B1CB0)
#define UNITYENGINE_COLLISION_GET_IMPULSE_OFFSET UNITYSDK_OFFSET(0x1B7B1C90)
#define UNITYENGINE_COLLISION_GET_OTHER_OFFSET UNITYSDK_OFFSET(0x1B7B1CF0)
#define UNITYENGINE_COLLISION_GET_RELATIVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7B1530)
#define UNITYENGINE_COLLISION_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1B7B1550)
#define UNITYENGINE_COLLISION_GET_SELFCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1B7B1520)
#define UNITYENGINE_COLLISION_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B7B1570)
#define UNITYENGINE_COLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B1E30)

namespace UnityEngine
{
	inline static constexpr unsigned int Collision_TypeDefinitionIndex = 7658;

	class Collision : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 m_Impulse; // 0x10
		::UnityEngine::Vector3 m_RelativeVelocity; // 0x1C
		::UnityEngine::Rigidbody* m_Rigidbody; // 0x28
		::UnityEngine::Collider* m_Collider; // 0x30
		::UnityEngine::Collider* m_SelfCollider; // 0x38
		::System::Int32 m_ContactCount; // 0x40
		::Il2CppArray<::UnityEngine::ContactPoint>* m_ReusedContacts; // 0x48
		::Il2CppArray<::UnityEngine::ContactPoint>* m_LegacyContacts; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ContactPoint>* GetContacts_Internal()
		{
			return ((::Il2CppArray<::UnityEngine::ContactPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GETCONTACTS_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Collider* get_selfCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_SELFCOLLIDER_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_relativeVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_RELATIVEVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* get_rigidbody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_RIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Collider* get_collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_COLLIDER_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_TRANSFORM_OFFSET))(this);
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

		::UnityEngine::ContactPoint GetContact(::System::Int32 index)
		{
			return ((::UnityEngine::ContactPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GETCONTACT_OFFSET))(this, index);
		}

		::System::Int32 GetContacts(::Il2CppArray<::UnityEngine::ContactPoint>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ContactPoint>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GETCONTACTS_OFFSET))(this, contacts);
		}

		::System::Int32 GetContacts_1(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GETCONTACTS_1_OFFSET))(this, contacts);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GETENUMERATOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_impulse()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_IMPULSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_impactForceSum()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_IMPACTFORCESUM_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_frictionForceSum()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_FRICTIONFORCESUM_OFFSET))(this);
		}

		::UnityEngine::Component* get_other()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_OTHER_OFFSET))(this);
		}
	};
}
