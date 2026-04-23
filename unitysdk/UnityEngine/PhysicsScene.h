#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define UNITYENGINE_PHYSICSSCENE_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F8E40)
#define UNITYENGINE_PHYSICSSCENE_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F93C0)
#define UNITYENGINE_PHYSICSSCENE_BOXCASTSORT_OFFSET UNITYSDK_OFFSET(0x22F9230)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET UNITYSDK_OFFSET(0x22F90C0)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET UNITYSDK_OFFSET(0x22F8CC0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x22F7FD0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F7CF0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F82C0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORT_OFFSET UNITYSDK_OFFSET(0x22F8140)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET UNITYSDK_OFFSET(0x22F7E60)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x22F7B80)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x299F0)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22F6DC0)
#define UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F1510)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F1730)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F16E0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F1830)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F17C0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F17B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F1740)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET UNITYSDK_OFFSET(0x1A4F13E0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0AB0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0C90)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0C40)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0C30)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F0BE0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0D70)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0D10)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0D00)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F0CA0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1A4F0980)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0770)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0740)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0890)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0860)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F07B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F0780)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0850)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0810)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0800)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F07C0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F06E0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F06B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F06F0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET UNITYSDK_OFFSET(0x1A4F0680)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0730)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1A4F0700)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0FE0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F1270)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F1220)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F1130)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F10E0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F1210)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F11B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F11A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1A4F1140)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1A4F0EE0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F9040)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F16D0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F1690)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F1680)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4F1640)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET UNITYSDK_OFFSET(0x22F8FC0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULEALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F84B0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0E10)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0DD0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0DC0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4F0D80)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET UNITYSDK_OFFSET(0x22F8440)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHEREALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F8C70)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F12F0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F12C0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F12B0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4F1280)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0x22F8C20)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F13D0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F1370)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F1360)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET UNITYSDK_OFFSET(0x1A4F1300)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0970)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0910)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0900)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1A4F08A0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0ED0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x1A4F0E80)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4F0E70)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1A4F0E20)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x22F72A0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_2_OFFSET UNITYSDK_OFFSET(0x22F79B0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F6FA0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F77D0)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTSORT_OFFSET UNITYSDK_OFFSET(0x22F75F0)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x22F7120)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x22F7420)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x22F6E20)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_1_OFFSET UNITYSDK_OFFSET(0x22F8B00)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F8650)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET UNITYSDK_OFFSET(0x22F89D0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTSORT_OFFSET UNITYSDK_OFFSET(0x22F88A0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET UNITYSDK_OFFSET(0x22F8780)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x22F8520)
#define UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22F6DB0)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene_TypeDefinitionIndex = 5236;

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

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::PhysicsScene other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PhysicsScene))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_1_OFFSET))(this, other);
		}

		/*
		::System::Boolean Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET))(this, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean RaycastAllowAsync(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_OFFSET))(this, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTestAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_OFFSET))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTest(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean Raycast_1(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET))(this, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_Raycast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean RaycastAllowAsync_1(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_1_OFFSET))(this, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 Raycast_2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET))(this, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 RaycastSort(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTSORT_OFFSET))(this, origin, direction, raycastHits, nearest, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_OFFSET))(physicsScene, ray, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 RaycastSortNonAllocAllowAsync(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET))(this, origin, direction, raycastHits, nearest, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_OFFSET))(physicsScene, ray, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 RaycastAllowAsync_2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTALLOWASYNC_2_OFFSET))(this, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAllocAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET))(physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCastAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_OFFSET))(physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET))(physicsScene, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_CapsuleCastAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTALLOWASYNC_OFFSET))(physicsScene, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET))(this, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean CapsuleCastAllowAsync(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_OFFSET))(this, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 CapsuleCast_1(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET))(this, point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 CapsuleCastAllowAsync_1(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTALLOWASYNC_1_OFFSET))(this, point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 CapsuleCastSort(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORT_OFFSET))(this, point1, point2, radius, direction, results, nearest, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 CapsuleCastSortNonAllocAllowAsync(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTSORTNONALLOCALLOWASYNC_OFFSET))(this, point1, point2, radius, direction, results, nearest, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET))(this, point0, point1, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 OverlapCapsuleAllowAsync(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULEALLOWASYNC_OFFSET))(this, point0, point1, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET))(physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCastAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_OFFSET))(physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET))(physicsScene, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_SphereCastAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTALLOWASYNC_OFFSET))(physicsScene, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean SphereCast(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET))(this, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean SphereCastAllowAsync(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_OFFSET))(this, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_OFFSET))(physicsScene, origin, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET))(physicsScene, origin, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 SphereCast_1(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET))(this, origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 SphereCastSort(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTSORT_OFFSET))(this, origin, radius, direction, results, nearest, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 SphereCastSortNonAllocAllowAsync(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTSORTNONALLOCALLOWASYNC_OFFSET))(this, origin, radius, direction, results, nearest, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 SphereCastAllowAsync_1(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTALLOWASYNC_1_OFFSET))(this, origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 OverlapSphere(::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET))(this, position, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 OverlapSphereAllowAsync(::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHEREALLOWASYNC_OFFSET))(this, position, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::UnityEngine::RaycastHit& outHit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET))(physicsScene, center, halfExtents, direction, orientation, maxDistance, outHit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCastAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::UnityEngine::RaycastHit& outHit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_OFFSET))(physicsScene, center, halfExtents, direction, orientation, maxDistance, outHit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_BoxCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET))(physicsScene, center, halfExtents, orientation, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_BoxCastAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTALLOWASYNC_OFFSET))(physicsScene, center, halfExtents, orientation, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET))(this, center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Boolean BoxCastAllowAsync(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTALLOWASYNC_OFFSET))(this, center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_InternalAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET))(this, center, halfExtents, results, orientation, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 OverlapBoxAllowAsync(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXALLOWASYNC_OFFSET))(this, center, halfExtents, results, orientation, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, orientation, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 BoxCast_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET))(this, center, halfExtents, direction, results, orientation, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, nearest, orientation, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 BoxCastSort(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Boolean nearest, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTSORT_OFFSET))(this, center, halfExtents, direction, results, nearest, orientation, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAllocAllowAsync(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, nearest, orientation, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		::System::Int32 BoxCastSortNonAllocAllowAsync(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Boolean nearest, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTSORTNONALLOCALLOWASYNC_OFFSET))(this, center, halfExtents, direction, results, nearest, orientation, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTestAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTESTALLOWASYNC_INJECTED_OFFSET))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTest_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_Raycast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTALLOWASYNC_INJECTED_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOC_INJECTED_OFFSET))(physicsScene, ray, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(physicsScene, ray, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& point1, ::UnityEngine::Vector3& point2, ::System::Single radius, ::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET))(physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCastAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& point1, ::UnityEngine::Vector3& point2, ::System::Single radius, ::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECASTALLOWASYNC_INJECTED_OFFSET))(physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOC_INJECTED_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& point0, ::UnityEngine::Vector3& point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& point0, ::UnityEngine::Vector3& point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET))(physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCastAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECASTALLOWASYNC_INJECTED_OFFSET))(physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOC_INJECTED_OFFSET))(physicsScene, origin, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(physicsScene, origin, radius, direction, raycastHits, nearest, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCALLOWASYNC_INJECTED_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::UnityEngine::RaycastHit& outHit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, orientation, maxDistance, outHit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCastAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::UnityEngine::RaycastHit& outHit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCASTALLOWASYNC_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, orientation, maxDistance, outHit, layerMask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion& orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_InternalAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion& orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNALALLOWASYNC_INJECTED_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, orientation, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOC_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, nearest, orientation, maxDistance, mask, queryTriggerInteraction);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastSortNonAllocAllowAsync_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Boolean nearest, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTSORTNONALLOCALLOWASYNC_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, nearest, orientation, maxDistance, mask, queryTriggerInteraction);
		}
		*/
	};
}
