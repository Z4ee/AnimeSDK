#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_COLLISION2D_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x1BC4DB40)
#define UNITYENGINE_COLLISION2D_GETCONTACTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC4D0D0)
#define UNITYENGINE_COLLISION2D_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x1BC4DAB0)
#define UNITYENGINE_COLLISION2D_GETCONTACT_OFFSET UNITYSDK_OFFSET(0x1BC4D9A0)
#define UNITYENGINE_COLLISION2D_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1BC4D0E0)
#define UNITYENGINE_COLLISION2D_GET_CONTACTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC4D990)
#define UNITYENGINE_COLLISION2D_GET_CONTACTS_OFFSET UNITYSDK_OFFSET(0x1BC4D920)
#define UNITYENGINE_COLLISION2D_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1BC4D910)
#define UNITYENGINE_COLLISION2D_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC4D620)
#define UNITYENGINE_COLLISION2D_GET_OTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1BC4D180)
#define UNITYENGINE_COLLISION2D_GET_OTHERRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1BC4D2B0)
#define UNITYENGINE_COLLISION2D_GET_RELATIVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1BC4D900)
#define UNITYENGINE_COLLISION2D_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1BC4D220)
#define UNITYENGINE_COLLISION2D_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BC4D340)
#define UNITYENGINE_COLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4DBE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Collision2D_TypeDefinitionIndex = 7632;

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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ContactPoint2D>* GetContacts_Internal()
		{
			return ((::Il2CppArray<::UnityEngine::ContactPoint2D>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GETCONTACTS_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Collider2D* get_collider()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_COLLIDER_OFFSET))(this);
		}

		::UnityEngine::Collider2D* get_otherCollider()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_OTHERCOLLIDER_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_rigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_RIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_otherRigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_OTHERRIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_GAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_relativeVelocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_RELATIVEVELOCITY_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_ENABLED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ContactPoint2D>* get_contacts()
		{
			return ((::Il2CppArray<::UnityEngine::ContactPoint2D>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_CONTACTS_OFFSET))(this);
		}

		::System::Int32 get_contactCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_CONTACTCOUNT_OFFSET))(this);
		}

		::UnityEngine::ContactPoint2D GetContact(::System::Int32 index)
		{
			return ((::UnityEngine::ContactPoint2D(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GETCONTACT_OFFSET))(this, index);
		}

		::System::Int32 GetContacts(::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GETCONTACTS_OFFSET))(this, contacts);
		}

		::System::Int32 GetContacts_1(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GETCONTACTS_1_OFFSET))(this, contacts);
		}
	};
}
