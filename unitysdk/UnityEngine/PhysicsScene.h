#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define UNITYENGINE_PHYSICSSCENE_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3898220)
#define UNITYENGINE_PHYSICSSCENE_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x38987A0)
#define UNITYENGINE_PHYSICSSCENE_BOXCASTSORT_OFFSET UNITYSDK_OFFSET(0x3898610)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET UNITYSDK_OFFSET(0x38984A0)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET UNITYSDK_OFFSET(0x38980A0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x38973B0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x38970D0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x38976A0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORT_OFFSET UNITYSDK_OFFSET(0x3897520)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET UNITYSDK_OFFSET(0x3897240)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x3896F60)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2C4D0)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0x38962E0)
#define UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33E360)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E580)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33E530)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E680)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33E610)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E600)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33E590)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET UNITYSDK_OFFSET(0x1B33E230)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33D900)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DAE0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33DA90)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DA80)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33DA30)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DBC0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33DB60)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DB50)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33DAF0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1B33D7D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D5C0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33D590)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D6E0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33D6B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D600)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33D5D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D6A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33D660)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D650)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33D610)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D530)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33D500)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D540)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET UNITYSDK_OFFSET(0x1B33D4D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D580)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B33D550)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33DE30)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E0C0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33E070)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DF80)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33DF30)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E060)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33E000)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DFF0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B33DF90)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1B33DD30)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3898420)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E520)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33E4E0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E4D0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B33E490)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET UNITYSDK_OFFSET(0x38983A0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULEALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3897890)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DC60)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33DC20)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DC10)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B33DBD0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET UNITYSDK_OFFSET(0x3897820)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHEREALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3898050)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E140)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33E110)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E100)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B33E0D0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0x3898000)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E220)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33E1C0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E1B0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET UNITYSDK_OFFSET(0x1B33E150)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D7C0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33D760)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33D750)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1B33D6F0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DD20)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1B33DCD0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33DCC0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1B33DC70)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x3896750)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_2_OFFSET UNITYSDK_OFFSET(0x3896DC0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x38964A0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3896C00)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTSORT_OFFSET UNITYSDK_OFFSET(0x3896A40)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x3896600)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x38968A0)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x3896340)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x3897EE0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3897A30)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x3897DB0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTSORT_OFFSET UNITYSDK_OFFSET(0x3897C80)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET UNITYSDK_OFFSET(0x3897B60)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x3897900)
#define UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38962D0)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene_TypeDefinitionIndex = 5312;

	struct alignas(4) PhysicsScene
	{
		::System::Int32 m_Handle; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::PhysicsScene a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PhysicsScene))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_1_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		/*
		::System::Boolean RaycastAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTestAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTest(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		::System::Boolean Raycast_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Internal_Raycast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Boolean RaycastAllowAsync_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Int32 Raycast_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Int32 RaycastSort(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		::System::Int32 RaycastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		::System::Int32 RaycastAllowAsync_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Ray a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_CapsuleCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit& a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_CapsuleCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit& a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		::System::Boolean CapsuleCast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit& a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Boolean CapsuleCastAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit& a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		::System::Int32 CapsuleCast_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Int32 CapsuleCastAllowAsync_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Int32 CapsuleCastSort(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		::System::Int32 CapsuleCastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		::System::Int32 OverlapCapsule(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Int32 OverlapCapsuleAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULEALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit& a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit& a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Internal_SphereCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit& a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Internal_SphereCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit& a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Boolean SphereCast(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		::System::Boolean SphereCastAllowAsync(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Int32 SphereCast_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		::System::Int32 SphereCastSort(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Int32 SphereCastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Int32 SphereCastAllowAsync_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Int32 OverlapSphere(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		/*
		::System::Int32 OverlapSphereAllowAsync(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHEREALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_BoxCast(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit& a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_BoxCastAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Vector3 a5, ::UnityEngine::RaycastHit& a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		::System::Boolean BoxCast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Boolean BoxCastAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		::System::Int32 OverlapBox(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		::System::Int32 OverlapBoxAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::UnityEngine::Quaternion a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		::System::Int32 BoxCast_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAlloc(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		::System::Int32 BoxCastSort(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::UnityEngine::Quaternion a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTSORT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		::System::Int32 BoxCastSortNonAllocAllowAsync(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::UnityEngine::Quaternion a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTestAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTest_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::QueryTriggerInteraction a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean Internal_Raycast_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Ray& a2, ::Il2CppArray<::UnityEngine::RaycastHit>* a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCastAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6, ::System::Boolean a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Collider*>* a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCast_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::System::Single a5, ::UnityEngine::RaycastHit& a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCastAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::System::Single a5, ::UnityEngine::RaycastHit& a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCast_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCastAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5, ::System::Single a6, ::UnityEngine::RaycastHit& a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion& a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::UnityEngine::Quaternion& a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::UnityEngine::Quaternion& a6, ::System::Single a7, ::System::Int32 a8, ::UnityEngine::QueryTriggerInteraction a9)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion& a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::Il2CppArray<::UnityEngine::RaycastHit>* a5, ::System::Boolean a6, ::UnityEngine::Quaternion& a7, ::System::Single a8, ::System::Int32 a9, ::UnityEngine::QueryTriggerInteraction a10)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
		*/
	};
}
