#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ColliderDistance2D.h"
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

#define UNITYENGINE_PHYSICS2D_CIRCLECAST_OFFSET UNITYSDK_OFFSET(0x1F3C3680)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_1_OFFSET UNITYSDK_OFFSET(0x1F3C1D20)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_COLLIDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C1FA0)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1F3C1CA0)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1F3C0810)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C1FB0)
#define UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1F3C1F20)
#define UNITYENGINE_PHYSICS2D_DISTANCE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C1C90)
#define UNITYENGINE_PHYSICS2D_DISTANCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3C1C10)
#define UNITYENGINE_PHYSICS2D_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1F3BE810)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C48D0)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSARRAY_OFFSET UNITYSDK_OFFSET(0x1F3C4570)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C48F0)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYARRAY_OFFSET UNITYSDK_OFFSET(0x1F3C45E0)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C4C90)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYLIST_OFFSET UNITYSDK_OFFSET(0x1F3C4980)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C4C70)
#define UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSLIST_OFFSET UNITYSDK_OFFSET(0x1F3C4910)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x1F3BF4A0)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_2_OFFSET UNITYSDK_OFFSET(0x1F3C4650)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_3_OFFSET UNITYSDK_OFFSET(0x1F3C4790)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_4_OFFSET UNITYSDK_OFFSET(0x1F3BF000)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_5_OFFSET UNITYSDK_OFFSET(0x1F3BF6C0)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_6_OFFSET UNITYSDK_OFFSET(0x1F3C49F0)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_7_OFFSET UNITYSDK_OFFSET(0x1F3C4B30)
#define UNITYENGINE_PHYSICS2D_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x1F3BEDE0)
#define UNITYENGINE_PHYSICS2D_GETLAYERCOLLISIONMASK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3C1C00)
#define UNITYENGINE_PHYSICS2D_GETLAYERCOLLISIONMASK_OFFSET UNITYSDK_OFFSET(0x1F3BFB90)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_1_OFFSET UNITYSDK_OFFSET(0x1F3C3C90)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_2_OFFSET UNITYSDK_OFFSET(0x1F3C3D90)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C3E80)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3C3C00)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET UNITYSDK_OFFSET(0x1F3C3B10)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F3C3FC0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_2_OFFSET UNITYSDK_OFFSET(0x1F3C40A0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET UNITYSDK_OFFSET(0x1F3C3E90)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1F3C3940)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C48E0)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_OFFSET UNITYSDK_OFFSET(0x1F3C4720)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C4900)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_OFFSET UNITYSDK_OFFSET(0x1F3C4860)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C4CA0)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_OFFSET UNITYSDK_OFFSET(0x1F3C4C00)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C4C80)
#define UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_OFFSET UNITYSDK_OFFSET(0x1F3C4AC0)
#define UNITYENGINE_PHYSICS2D_GET_DEFAULTPHYSICSSCENE_OFFSET UNITYSDK_OFFSET(0x1F3C1B00)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C1B80)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1F3C1B10)
#define UNITYENGINE_PHYSICS2D_GET_QUERIESHITTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1F3BFB80)
#define UNITYENGINE_PHYSICS2D_LINECASTALL_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C2740)
#define UNITYENGINE_PHYSICS2D_LINECASTALL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3C26C0)
#define UNITYENGINE_PHYSICS2D_LINECASTALL_OFFSET UNITYSDK_OFFSET(0x1F3C2520)
#define UNITYENGINE_PHYSICS2D_LINECAST_1_OFFSET UNITYSDK_OFFSET(0x1F3C22B0)
#define UNITYENGINE_PHYSICS2D_LINECAST_OFFSET UNITYSDK_OFFSET(0x1F3C1FC0)
#define UNITYENGINE_PHYSICS2D_OVERLAPPOINTALL_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C4560)
#define UNITYENGINE_PHYSICS2D_OVERLAPPOINTALL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F3C44F0)
#define UNITYENGINE_PHYSICS2D_OVERLAPPOINTALL_OFFSET UNITYSDK_OFFSET(0x1F3C4370)
#define UNITYENGINE_PHYSICS2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0x1F3C4180)
#define UNITYENGINE_PHYSICS2D_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1F3C2A70)
#define UNITYENGINE_PHYSICS2D_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x1F3C2C40)
#define UNITYENGINE_PHYSICS2D_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x1F3C2EE0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_4_OFFSET UNITYSDK_OFFSET(0x1F3C30F0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_5_OFFSET UNITYSDK_OFFSET(0x1F3C3320)
#define UNITYENGINE_PHYSICS2D_RAYCAST_6_OFFSET UNITYSDK_OFFSET(0x1F3C3450)
#define UNITYENGINE_PHYSICS2D_RAYCAST_7_OFFSET UNITYSDK_OFFSET(0x1F3C3530)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1F3C2750)
#define UNITYENGINE_PHYSICS2D_SET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C1BF0)
#define UNITYENGINE_PHYSICS2D_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1F3C1B90)
#define UNITYENGINE_PHYSICS2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3C4CC0)
#define UNITYENGINE_PHYSICS2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C4CB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Physics2D_TypeDefinitionIndex = 18778;

	class Physics2D : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>** StaticGet_m_LastDisabledRigidbody2D()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>**)Il2CppClass::FromTypeDefinitionIndex(Physics2D_TypeDefinitionIndex)->GetStaticField(0x7C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D__CTOR_OFFSET))(this);
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

		static ::System::Void set_gravity(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_SET_GRAVITY_OFFSET))(value);
		}

		static ::System::Boolean get_queriesHitTriggers()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_QUERIESHITTRIGGERS_OFFSET))();
		}

		static ::System::Int32 GetLayerCollisionMask(::System::Int32 layer)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETLAYERCOLLISIONMASK_OFFSET))(layer);
		}

		static ::System::Int32 GetLayerCollisionMask_Internal(::System::Int32 layer)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETLAYERCOLLISIONMASK_INTERNAL_OFFSET))(layer);
		}

		static ::UnityEngine::ColliderDistance2D Distance(::UnityEngine::Collider2D* colliderA, ::UnityEngine::Collider2D* colliderB)
		{
			return ((::UnityEngine::ColliderDistance2D(*)(::UnityEngine::Collider2D*, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_DISTANCE_OFFSET))(colliderA, colliderB);
		}

		static ::UnityEngine::ColliderDistance2D Distance_Internal(::UnityEngine::Collider2D* colliderA, ::UnityEngine::Collider2D* colliderB)
		{
			return ((::UnityEngine::ColliderDistance2D(*)(::UnityEngine::Collider2D*, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_DISTANCE_INTERNAL_OFFSET))(colliderA, colliderB);
		}

		static ::UnityEngine::Vector2 ClosestPoint(::UnityEngine::Vector2 position, ::UnityEngine::Collider2D* collider)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_OFFSET))(position, collider);
		}

		static ::UnityEngine::Vector2 ClosestPoint_1(::UnityEngine::Vector2 position, ::UnityEngine::Rigidbody2D* rigidbody)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Rigidbody2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_1_OFFSET))(position, rigidbody);
		}

		static ::UnityEngine::Vector2 ClosestPoint_Collider(::UnityEngine::Vector2 position, ::UnityEngine::Collider2D* collider)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_COLLIDER_OFFSET))(position, collider);
		}

		static ::UnityEngine::Vector2 ClosestPoint_Rigidbody(::UnityEngine::Vector2 position, ::UnityEngine::Rigidbody2D* rigidbody)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Rigidbody2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_OFFSET))(position, rigidbody);
		}

		static ::UnityEngine::RaycastHit2D Linecast(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_LINECAST_OFFSET))(start, end);
		}

		static ::UnityEngine::RaycastHit2D Linecast_1(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_LINECAST_1_OFFSET))(start, end, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* LinecastAll(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_LINECASTALL_OFFSET))(start, end, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* LinecastAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_LINECASTALL_INTERNAL_OFFSET))(physicsScene, start, end, contactFilter);
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

		static ::UnityEngine::RaycastHit2D CircleCast(::UnityEngine::Vector2 origin, ::System::Single radius, ::UnityEngine::Vector2 direction, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CIRCLECAST_OFFSET))(origin, radius, direction, distance, layerMask);
		}

		static ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTION_OFFSET))(ray, distance, layerMask);
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

		static ::UnityEngine::Collider2D* OverlapPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Collider2D*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_OVERLAPPOINT_OFFSET))(point);
		}

		static ::Il2CppArray<::UnityEngine::Collider2D*>* OverlapPointAll(::UnityEngine::Vector2 point)
		{
			return ((::Il2CppArray<::UnityEngine::Collider2D*>*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_OVERLAPPOINTALL_OFFSET))(point);
		}

		static ::Il2CppArray<::UnityEngine::Collider2D*>* OverlapPointAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 point, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::Il2CppArray<::UnityEngine::Collider2D*>*(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_OVERLAPPOINTALL_INTERNAL_OFFSET))(physicsScene, point, contactFilter);
		}

		static ::System::Int32 GetContacts(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_OFFSET))(collider, contactFilter, contacts);
		}

		static ::System::Int32 GetContacts_1(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_1_OFFSET))(collider, contactFilter, colliders);
		}

		static ::System::Int32 GetContacts_2(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_2_OFFSET))(rigidbody, contactFilter, contacts);
		}

		static ::System::Int32 GetContacts_3(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_3_OFFSET))(rigidbody, contactFilter, colliders);
		}

		static ::System::Int32 GetColliderContactsArray(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSARRAY_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsArray(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetColliderContactsCollidersOnlyArray(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYARRAY_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyArray(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetContacts_4(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_4_OFFSET))(collider, contactFilter, contacts);
		}

		static ::System::Int32 GetContacts_5(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_5_OFFSET))(collider, contactFilter, colliders);
		}

		static ::System::Int32 GetContacts_6(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_6_OFFSET))(rigidbody, contactFilter, contacts);
		}

		static ::System::Int32 GetContacts_7(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCONTACTS_7_OFFSET))(rigidbody, contactFilter, colliders);
		}

		static ::System::Int32 GetColliderContactsList(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSLIST_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsList(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetColliderContactsCollidersOnlyList(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYLIST_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyList(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Void get_gravity_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_gravity_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_SET_GRAVITY_INJECTED_OFFSET))(value);
		}

		static ::System::Void Distance_Internal_Injected(::UnityEngine::Collider2D* colliderA, ::UnityEngine::Collider2D* colliderB, ::UnityEngine::ColliderDistance2D& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Collider2D*, ::UnityEngine::Collider2D*, ::UnityEngine::ColliderDistance2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_DISTANCE_INTERNAL_INJECTED_OFFSET))(colliderA, colliderB, ret);
		}

		static ::System::Void ClosestPoint_Collider_Injected(::UnityEngine::Vector2& position, ::UnityEngine::Collider2D* collider, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Collider2D*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_COLLIDER_INJECTED_OFFSET))(position, collider, ret);
		}

		static ::System::Void ClosestPoint_Rigidbody_Injected(::UnityEngine::Vector2& position, ::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Rigidbody2D*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_CLOSESTPOINT_RIGIDBODY_INJECTED_OFFSET))(position, rigidbody, ret);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* LinecastAll_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& start, ::UnityEngine::Vector2& end, ::UnityEngine::ContactFilter2D& contactFilter)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_LINECASTALL_INTERNAL_INJECTED_OFFSET))(physicsScene, start, end, contactFilter);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit2D>*(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::Collider2D*>* OverlapPointAll_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& point, ::UnityEngine::ContactFilter2D& contactFilter)
		{
			return ((::Il2CppArray<::UnityEngine::Collider2D*>*(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_OVERLAPPOINTALL_INTERNAL_INJECTED_OFFSET))(physicsScene, point, contactFilter);
		}

		static ::System::Int32 GetColliderContactsArray_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSARRAY_INJECTED_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsArray_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSARRAY_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetColliderContactsCollidersOnlyArray_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyArray_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYARRAY_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetColliderContactsList_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSLIST_INJECTED_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsList_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSLIST_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}

		static ::System::Int32 GetColliderContactsCollidersOnlyList_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETCOLLIDERCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET))(collider, contactFilter, results);
		}

		static ::System::Int32 GetRigidbodyContactsCollidersOnlyList_Injected(::UnityEngine::Rigidbody2D* rigidbody, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRIGIDBODYCONTACTSCOLLIDERSONLYLIST_INJECTED_OFFSET))(rigidbody, contactFilter, results);
		}
	};
}
