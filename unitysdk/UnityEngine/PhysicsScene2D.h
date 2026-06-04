#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2C4D0)
#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x3895E50)
#define UNITYENGINE_PHYSICSSCENE2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B324A30)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B324A00)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x3896180)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3249A0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B324960)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3249F0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3249B0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x3896010)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x38960C0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x3896120)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B324950)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3248C0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0x3895EB0)
#define UNITYENGINE_PHYSICSSCENE2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3895E40)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene2D_TypeDefinitionIndex = 5264;

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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::PhysicsScene2D a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PhysicsScene2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_EQUALS_1_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET))(this, a1, a2, a3, a4);
		}
		*/

		/*
		::UnityEngine::RaycastHit2D Raycast_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::UnityEngine::ContactFilter2D a4)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_1_OFFSET))(this, a1, a2, a3, a4);
		}
		*/

		/*
		static ::UnityEngine::RaycastHit2D Raycast_Internal(::UnityEngine::PhysicsScene2D a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::UnityEngine::ContactFilter2D a5)
		{
			return ((::UnityEngine::RaycastHit2D(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		::System::Int32 Raycast_2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::UnityEngine::ContactFilter2D a4, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Int32 RaycastArray_Internal(::UnityEngine::PhysicsScene2D a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::UnityEngine::ContactFilter2D a5, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Int32 Raycast_3(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::UnityEngine::ContactFilter2D a4, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Int32 RaycastList_Internal(::UnityEngine::PhysicsScene2D a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::UnityEngine::ContactFilter2D a5, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Int32 GetRayIntersection(::UnityEngine::Ray a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET))(this, a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Int32 GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Void Raycast_Internal_Injected(::UnityEngine::PhysicsScene2D& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::System::Single a4, ::UnityEngine::ContactFilter2D& a5, ::UnityEngine::RaycastHit2D& a6)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::UnityEngine::RaycastHit2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 RaycastArray_Internal_Injected(::UnityEngine::PhysicsScene2D& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::System::Single a4, ::UnityEngine::ContactFilter2D& a5, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 RaycastList_Internal_Injected(::UnityEngine::PhysicsScene2D& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::System::Single a4, ::UnityEngine::ContactFilter2D& a5, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 GetRayIntersectionArray_Internal_Injected(::UnityEngine::PhysicsScene2D& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene2D&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/
	};
}
