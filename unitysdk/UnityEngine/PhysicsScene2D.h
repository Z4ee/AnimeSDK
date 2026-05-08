#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }

#define UNITYENGINE_PHYSICSSCENE2D_CIRCLECAST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC51820)
#define UNITYENGINE_PHYSICSSCENE2D_CIRCLECAST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51790)
#define UNITYENGINE_PHYSICSSCENE2D_CIRCLECAST_OFFSET UNITYSDK_OFFSET(0x9AE6D0)
#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x661410)
#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AE1D0)
#define UNITYENGINE_PHYSICSSCENE2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC518F0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC518C0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_1_OFFSET UNITYSDK_OFFSET(0x9AE850)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC518B0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51830)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x9AE790)
#define UNITYENGINE_PHYSICSSCENE2D_LINECAST_1_OFFSET UNITYSDK_OFFSET(0x9AE360)
#define UNITYENGINE_PHYSICSSCENE2D_LINECAST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC51640)
#define UNITYENGINE_PHYSICSSCENE2D_LINECAST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC515C0)
#define UNITYENGINE_PHYSICSSCENE2D_LINECAST_OFFSET UNITYSDK_OFFSET(0x9AE230)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC51950)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51940)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC51970)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51960)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x1BC4B2E0)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1BC4B280)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC51930)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51900)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0x9AE8C0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC51730)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC516F0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC51780)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51740)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x9AE560)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x9AE610)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x9AE670)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC516E0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51650)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0x9AE400)
#define UNITYENGINE_PHYSICSSCENE2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9AE1C0)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene2D_TypeDefinitionIndex = 7620;

	struct alignas(4) PhysicsScene2D
	{
		::System::Int32 m_Handle; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::PhysicsScene2D other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PhysicsScene2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_EQUALS_1_OFFSET))(this, other);
		}

		/*
		::UnityEngine::RaycastHit2D Linecast(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_LINECAST_OFFSET))(this, start, end, layerMask);
		}
		*/

		/*
		::UnityEngine::RaycastHit2D Linecast_1(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_LINECAST_1_OFFSET))(this, start, end, contactFilter);
		}
		*/

		/*
		static ::UnityEngine::RaycastHit2D Linecast_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_LINECAST_INTERNAL_OFFSET))(physicsScene, start, end, contactFilter);
		}
		*/

		/*
		::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET))(this, origin, direction, distance, layerMask);
		}
		*/

		/*
		::UnityEngine::RaycastHit2D Raycast_1(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_1_OFFSET))(this, origin, direction, distance, contactFilter);
		}
		*/

		/*
		static ::UnityEngine::RaycastHit2D Raycast_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_OFFSET))(physicsScene, origin, direction, distance, contactFilter);
		}
		*/

		/*
		::System::Int32 Raycast_2(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_2_OFFSET))(this, origin, direction, distance, contactFilter, results);
		}
		*/

		/*
		static ::System::Int32 RaycastArray_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_OFFSET))(physicsScene, origin, direction, distance, contactFilter, results);
		}
		*/

		/*
		::System::Int32 Raycast_3(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_3_OFFSET))(this, origin, direction, distance, contactFilter, results);
		}
		*/

		/*
		static ::System::Int32 RaycastList_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_OFFSET))(physicsScene, origin, direction, distance, contactFilter, results);
		}
		*/

		/*
		::UnityEngine::RaycastHit2D CircleCast(::UnityEngine::Vector2 origin, ::System::Single radius, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_CIRCLECAST_OFFSET))(this, origin, radius, direction, distance, contactFilter);
		}
		*/

		/*
		static ::UnityEngine::RaycastHit2D CircleCast_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 origin, ::System::Single radius, ::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_CIRCLECAST_INTERNAL_OFFSET))(physicsScene, origin, radius, direction, distance, contactFilter);
		}
		*/

		/*
		::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET))(this, ray, distance, layerMask);
		}
		*/

		/*
		static ::UnityEngine::RaycastHit2D GetRayIntersection_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_OFFSET))(physicsScene, origin, direction, distance, layerMask);
		}
		*/

		/*
		::System::Int32 GetRayIntersection_1(::UnityEngine::Ray ray, ::System::Single distance, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_1_OFFSET))(this, ray, distance, results, layerMask);
		}
		*/

		/*
		static ::System::Int32 GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single distance, ::System::Int32 layerMask, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET))(physicsScene, origin, direction, distance, layerMask, results);
		}
		*/

		/*
		::UnityEngine::Collider2D* OverlapPoint(::UnityEngine::Vector2 point, ::System::Int32 layerMask)
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_OFFSET))(this, point, layerMask);
		}
		*/

		/*
		static ::UnityEngine::Collider2D* OverlapPoint_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 point, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::UnityEngine::Collider2D*(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_OFFSET))(physicsScene, point, contactFilter);
		}
		*/

		/*
		static ::System::Int32 OverlapCollider(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDER_OFFSET))(collider, contactFilter, results);
		}
		*/

		/*
		static ::System::Int32 OverlapColliderArray_Internal(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERARRAY_INTERNAL_OFFSET))(collider, contactFilter, results);
		}
		*/

		/*
		static ::System::Int32 OverlapCollider_1(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDER_1_OFFSET))(collider, contactFilter, results);
		}
		*/

		/*
		static ::System::Int32 OverlapColliderList_Internal(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERLIST_INTERNAL_OFFSET))(collider, contactFilter, results);
		}
		*/

		/*
		static ::System::Void Linecast_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& start, ::UnityEngine::Vector2& end, ::UnityEngine::ContactFilter2D& contactFilter, ::UnityEngine::RaycastHit2D& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::ContactFilter2D&, ::UnityEngine::RaycastHit2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_LINECAST_INTERNAL_INJECTED_OFFSET))(physicsScene, start, end, contactFilter, ret);
		}
		*/

		/*
		static ::System::Void Raycast_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::UnityEngine::RaycastHit2D& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::UnityEngine::RaycastHit2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, contactFilter, ret);
		}
		*/

		/*
		static ::System::Int32 RaycastArray_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, contactFilter, results);
		}
		*/

		/*
		static ::System::Int32 RaycastList_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, contactFilter, results);
		}
		*/

		/*
		static ::System::Void CircleCast_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& origin, ::System::Single radius, ::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::UnityEngine::RaycastHit2D& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::UnityEngine::RaycastHit2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_CIRCLECAST_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, radius, direction, distance, contactFilter, ret);
		}
		*/

		/*
		static ::System::Void GetRayIntersection_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction, ::System::Single distance, ::System::Int32 layerMask, ::UnityEngine::RaycastHit2D& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::UnityEngine::RaycastHit2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, layerMask, ret);
		}
		*/

		/*
		static ::System::Int32 GetRayIntersectionArray_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction, ::System::Single distance, ::System::Int32 layerMask, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, layerMask, results);
		}
		*/

		/*
		static ::UnityEngine::Collider2D* OverlapPoint_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector2& point, ::UnityEngine::ContactFilter2D& contactFilter)
		{
			return ((::UnityEngine::Collider2D*(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_INJECTED_OFFSET))(physicsScene, point, contactFilter);
		}
		*/

		/*
		static ::System::Int32 OverlapColliderArray_Internal_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERARRAY_INTERNAL_INJECTED_OFFSET))(collider, contactFilter, results);
		}
		*/

		/*
		static ::System::Int32 OverlapColliderList_Internal_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPCOLLIDERLIST_INTERNAL_INJECTED_OFFSET))(collider, contactFilter, results);
		}
		*/
	};
}
