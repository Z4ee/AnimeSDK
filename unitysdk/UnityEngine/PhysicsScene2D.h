#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x299F0)
#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x22F6940)
#define UNITYENGINE_PHYSICSSCENE2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D6EF0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D6EC0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x22F6C70)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D6E60)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D6E20)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D6EB0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D6E70)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x22F6B00)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x22F6BB0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x22F6C10)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D6E10)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D6D80)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0x22F69A0)
#define UNITYENGINE_PHYSICSSCENE2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22F6930)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene2D_TypeDefinitionIndex = 5188;

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
		::System::Int32 GetRayIntersection(::UnityEngine::Ray ray, ::System::Single distance, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET))(this, ray, distance, results, layerMask);
		}
		*/

		/*
		static ::System::Int32 GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single distance, ::System::Int32 layerMask, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET))(physicsScene, origin, direction, distance, layerMask, results);
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
		static ::System::Int32 GetRayIntersectionArray_Internal_Injected(::UnityEngine::PhysicsScene2D& physicsScene, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction, ::System::Single distance, ::System::Int32 layerMask, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET))(physicsScene, origin, direction, distance, layerMask, results);
		}
		*/
	};
}
