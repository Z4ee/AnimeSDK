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

#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x18A9ABE0)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9AD10)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x18A9ACC0)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x18A9BEB0)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_2_OFFSET UNITYSDK_OFFSET(0x18A9BFB0)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_3_OFFSET UNITYSDK_OFFSET(0x18A9C090)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x18A9BDD0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_1_OFFSET UNITYSDK_OFFSET(0x18A9BA30)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_2_OFFSET UNITYSDK_OFFSET(0x18A9BAD0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9BB70)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18A9B9D0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET UNITYSDK_OFFSET(0x18A9B940)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x18A9BC70)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_2_OFFSET UNITYSDK_OFFSET(0x18A9BD20)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET UNITYSDK_OFFSET(0x18A9BB80)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9BF90)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_OFFSET UNITYSDK_OFFSET(0x18A9BE60)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9BFA0)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_OFFSET UNITYSDK_OFFSET(0x18A9BF40)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9C180)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_OFFSET UNITYSDK_OFFSET(0x18A9C120)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9C170)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_OFFSET UNITYSDK_OFFSET(0x18A9C040)
#define UNITYENGINE_PHYSICS2D_GET_DEFAULTPHYSICSSCENE_OFFSET UNITYSDK_OFFSET(0x18A9AB80)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9ABD0)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x18A9AB90)
#define UNITYENGINE_PHYSICS2D_GET_QUERIESHITTRIGGERS_OFFSET UNITYSDK_OFFSET(0x18A9AB60)
#define UNITYENGINE_PHYSICS2D_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x18A9AFA0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x18A9B0F0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x18A9B330)
#define UNITYENGINE_PHYSICS2D_RAYCAST_4_OFFSET UNITYSDK_OFFSET(0x18A9B4E0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_5_OFFSET UNITYSDK_OFFSET(0x18A9B6B0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_6_OFFSET UNITYSDK_OFFSET(0x18A9B7A0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_7_OFFSET UNITYSDK_OFFSET(0x18A9B840)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0x18A9AD20)
#define UNITYENGINE_PHYSICS2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A9C190)

namespace UnityEngine
{
	inline static constexpr unsigned int Physics2D_TypeDefinitionIndex = 5178;

	class Physics2D : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>** StaticGet_m_LastDisabledRigidbody2D()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>**)Il2CppClass::FromTypeDefinitionIndex(Physics2D_TypeDefinitionIndex)->GetStaticField(0x2E0);
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

		static ::UnityEngine::Vector2 ClosestPoint(::UnityEngine::Vector2 position, ::UnityEngine::Rigidbody2D* rigidbody)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Rigidbody2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_OFFSET))(position, rigidbody);
		}

		static ::UnityEngine::Vector2 ClosestPoint_Rigidbody(::UnityEngine::Vector2 position, ::UnityEngine::Rigidbody2D* rigidbody)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Rigidbody2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_OFFSET))(position, rigidbody);
		}

		static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(origin, direction);
		}

		static ::UnityEngine::RaycastHit2D Raycast_1(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_1_OFFSET))(origin, direction, distance);
		}

		static ::UnityEngine::RaycastHit2D Raycast_2(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_2_OFFSET))(origin, direction, distance, layerMask);
		}

		static ::UnityEngine::RaycastHit2D Raycast_3(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::System::Int32 layerMask, ::System::Single minDepth)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_3_OFFSET))(origin, direction, distance, layerMask, minDepth);
		}

		static ::UnityEngine::RaycastHit2D Raycast_4(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::System::Int32 layerMask, ::System::Single minDepth, ::System::Single maxDepth)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_4_OFFSET))(origin, direction, distance, layerMask, minDepth, maxDepth);
		}

		static ::System::Int32 Raycast_5(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_5_OFFSET))(origin, direction, contactFilter, results);
		}

		static ::System::Int32 Raycast_6(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_6_OFFSET))(origin, direction, contactFilter, results, distance);
		}

		static ::System::Int32 Raycast_7(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_7_OFFSET))(origin, direction, contactFilter, results, distance);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll(::UnityEngine::Ray ray)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET))(ray);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_1(::UnityEngine::Ray ray, ::System::Single distance)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_1_OFFSET))(ray, distance);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_2(::UnityEngine::Ray ray, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_2_OFFSET))(ray, distance, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_OFFSET))(physicsScene, origin, direction, distance, layerMask);
		}

		static ::System::Int32 GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET))(ray, results);
		}

		static ::System::Int32 GetRayIntersectionNonAlloc_1(::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_1_OFFSET))(ray, results, distance);
		}

		static ::System::Int32 GetRayIntersectionNonAlloc_2(::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_2_OFFSET))(ray, results, distance, layerMask);
		}

		static ::System::Int32 GetContacts(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_OFFSET))(rigidbody, contactFilter, contacts);
		}

		static ::System::Int32 GetContacts_1(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_1_OFFSET))(rigidbody, contactFilter, colliders);
		}

		static ::System::Int32 GetRigidbodyContactsArray(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyArray(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetContacts_2(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_2_OFFSET))(rigidbody, contactFilter, contacts);
		}

		static ::System::Int32 GetContacts_3(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_3_OFFSET))(rigidbody, contactFilter, colliders);
		}

		static ::System::Int32 GetRigidbodyContactsList(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyList(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Void get_gravity_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET))(ret);
		}

		static ::System::Void ClosestPoint_Rigidbody_Injected(::UnityEngine::Vector2& position, ::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Rigidbody2D*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_INJECTED_OFFSET))(position, rigidbody, ret);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, layerMask);
		}

		static ::System::Int32 GetRigidbodyContactsArray_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyArray_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsList_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyList_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}
	};
}
