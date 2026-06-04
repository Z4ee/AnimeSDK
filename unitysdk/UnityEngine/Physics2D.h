#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ContactFilter2D.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/PhysicsScene2D.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1B322A00)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B322BA0)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1B322B20)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x1B324260)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_2_OFFSET UNITYSDK_OFFSET(0x1B3243C0)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_3_OFFSET UNITYSDK_OFFSET(0x1B324500)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x1B324120)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_1_OFFSET UNITYSDK_OFFSET(0x1B323C30)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_2_OFFSET UNITYSDK_OFFSET(0x1B323D30)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B323E20)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B323BA0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET UNITYSDK_OFFSET(0x1B323AB0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1B323F60)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_2_OFFSET UNITYSDK_OFFSET(0x1B324040)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B323E30)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3243A0)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_OFFSET UNITYSDK_OFFSET(0x1B3241F0)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3243B0)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_OFFSET UNITYSDK_OFFSET(0x1B324330)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B324650)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_OFFSET UNITYSDK_OFFSET(0x1B3245D0)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B324640)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_OFFSET UNITYSDK_OFFSET(0x1B324490)
#define UNITYENGINE_PHYSICS2D_GET_DEFAULTPHYSICSSCENE_OFFSET UNITYSDK_OFFSET(0x1B322970)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3229F0)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1B322980)
#define UNITYENGINE_PHYSICS2D_GET_QUERIESHITTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1B322950)
#define UNITYENGINE_PHYSICS2D_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1B322ED0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x1B3230A0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x1B323340)
#define UNITYENGINE_PHYSICS2D_RAYCAST_4_OFFSET UNITYSDK_OFFSET(0x1B323550)
#define UNITYENGINE_PHYSICS2D_RAYCAST_5_OFFSET UNITYSDK_OFFSET(0x1B323770)
#define UNITYENGINE_PHYSICS2D_RAYCAST_6_OFFSET UNITYSDK_OFFSET(0x1B323890)
#define UNITYENGINE_PHYSICS2D_RAYCAST_7_OFFSET UNITYSDK_OFFSET(0x1B323970)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B322BB0)
#define UNITYENGINE_PHYSICS2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B324660)

namespace UnityEngine
{
	inline static constexpr unsigned int Physics2D_TypeDefinitionIndex = 5265;

	class Physics2D : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>** StaticGet_m_LastDisabledRigidbody2D()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>**)Il2CppClass::FromTypeDefinitionIndex(Physics2D_TypeDefinitionIndex)->GetStaticField(0x320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D__CCTOR_OFFSET))();
		}

		static ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene()
		{
			return ((::UnityEngine::PhysicsScene2D(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_DEFAULTPHYSICSSCENE_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_gravity()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_GRAVITY_OFFSET))();
		}

		static ::System::Boolean get_queriesHitTriggers()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_QUERIESHITTRIGGERS_OFFSET))();
		}

		static ::UnityEngine::Vector2 ClosestPoint(::UnityEngine::Vector2 a1, ::UnityEngine::Rigidbody2D* a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Rigidbody2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 ClosestPoint_Rigidbody(::UnityEngine::Vector2 a1, ::UnityEngine::Rigidbody2D* a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Rigidbody2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(a1, a2);
		}

		static ::UnityEngine::RaycastHit2D Raycast_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::RaycastHit2D Raycast_2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::RaycastHit2D Raycast_3(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::RaycastHit2D Raycast_4(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Raycast_5(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::ContactFilter2D a3, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Raycast_6(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::ContactFilter2D a3, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a4, ::System::Single a5)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 Raycast_7(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::ContactFilter2D a3, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a4, ::System::Single a5)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll(::UnityEngine::Ray a1)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_1(::UnityEngine::Ray a1, ::System::Single a2)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_2(::UnityEngine::Ray a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_2_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 GetRayIntersectionNonAlloc(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetRayIntersectionNonAlloc_1(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRayIntersectionNonAlloc_2(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetContacts(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::Il2CppArray<::UnityEngine::ContactPoint2D>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetContacts_1(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::Il2CppArray<::UnityEngine::Collider2D*>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRigidbodyContactsArray(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::Il2CppArray<::UnityEngine::ContactPoint2D>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyArray(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::Il2CppArray<::UnityEngine::Collider2D*>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetContacts_2(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetContacts_3(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRigidbodyContactsList(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyList(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D a2, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Void get_gravity_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void ClosestPoint_Rigidbody_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Rigidbody2D* a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Rigidbody2D*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal_Injected(::UnityEngine::PhysicsScene2D& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 GetRigidbodyContactsArray_Injected(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D& a2, ::Il2CppArray<::UnityEngine::ContactPoint2D>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyArray_Injected(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D& a2, ::Il2CppArray<::UnityEngine::Collider2D*>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRigidbodyContactsList_Injected(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D& a2, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyList_Injected(::UnityEngine::Rigidbody2D* a1, ::UnityEngine::ContactFilter2D& a2, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}
