#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define UNITYENGINE_PHYSICSSCENE_BOXCASTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0xA7E480)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET UNITYSDK_OFFSET(0xA7E360)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET UNITYSDK_OFFSET(0xA7E090)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECASTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0xA7DAB0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET UNITYSDK_OFFSET(0xA7D9B0)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0xA7D840)
#define UNITYENGINE_PHYSICSSCENE_COLLIDERRAYCAST_OFFSET UNITYSDK_OFFSET(0xA7E680)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x826600)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA7D160)
#define UNITYENGINE_PHYSICSSCENE_GETCOLLIDERCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0xA7E610)
#define UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOCTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8510)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOCTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1EDA84A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8490)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1EDA8420)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET UNITYSDK_OFFSET(0x1EDA8160)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA79D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1EDA7960)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7950)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1EDA78E0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1EDA77B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_COLLIDERRAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8840)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_COLLIDERRAYCAST_OFFSET UNITYSDK_OFFSET(0x1EDA8810)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_GETCOLLIDERCLOSESTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8770)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_GETCOLLIDERCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1EDA8720)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_ISCOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x1EDA8800)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7710)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1EDA76B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA73D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1EDA7380)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7300)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET UNITYSDK_OFFSET(0x1EDA72C0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7570)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1EDA7510)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7370)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1EDA7310)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7EC0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1EDA7E50)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7E40)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1EDA7DD0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1EDA7CD0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_TRYGETCOLLIDERSURFACENORMALTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA86A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_TRYGETCOLLIDERSURFACENORMALTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1EDA8640)
#define UNITYENGINE_PHYSICSSCENE_ISCOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x1EDA87F0)
#define UNITYENGINE_PHYSICSSCENE_ISVALID_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA6FC0)
#define UNITYENGINE_PHYSICSSCENE_ISVALID_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA6FA0)
#define UNITYENGINE_PHYSICSSCENE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA7D1C0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOCTHREADSAFEV2_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8370)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOCTHREADSAFEV2_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA8310)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8300)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA82A0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOXTHREADSAFEV2_OFFSET UNITYSDK_OFFSET(0xA7E2C0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET UNITYSDK_OFFSET(0xA7E220)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOCTHREADSAFEV2_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7BB0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOCTHREADSAFEV2_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA7B50)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOCTHREADSAFEV2_OFFSET UNITYSDK_OFFSET(0xA7DC40)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7B40)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA7AE0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET UNITYSDK_OFFSET(0xA7DBB0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOCTHREADSAFEV2_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8050)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOCTHREADSAFEV2_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA8000)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7FF0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EDA7FA0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERETHREADSAFEV2_OFFSET UNITYSDK_OFFSET(0xA7E020)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0xA7DFB0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8150)
#define UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET UNITYSDK_OFFSET(0x1EDA80D0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA77A0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1EDA7720)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA7CC0)
#define UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1EDA7C50)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTNONALLOCTHREADSAFE_OFFSET UNITYSDK_OFFSET(0xA7D700)
#define UNITYENGINE_PHYSICSSCENE_RAYCASTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0xA7D5B0)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0xA7D330)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0xA7D480)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA7D230)
#define UNITYENGINE_PHYSICSSCENE_REGISTERASYNCQUERY_OFFSET UNITYSDK_OFFSET(0xA7D1F0)
#define UNITYENGINE_PHYSICSSCENE_SETLOCKSCENE_OFFSET UNITYSDK_OFFSET(0xA7D1E0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECASTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0xA7DED0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET UNITYSDK_OFFSET(0xA7DDF0)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET UNITYSDK_OFFSET(0xA7DCD0)
#define UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA7D150)
#define UNITYENGINE_PHYSICSSCENE_TRYGETCOLLIDERSURFACENORMALTHREADSAFE_OFFSET UNITYSDK_OFFSET(0xA7E5A0)
#define UNITYENGINE_PHYSICSSCENE_UNREGISTERASYNCQUERY_OFFSET UNITYSDK_OFFSET(0xA7D210)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene_TypeDefinitionIndex = 7800;

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

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_ISVALID_OFFSET))(this);
		}

		static ::System::Boolean IsValid_Internal(::UnityEngine::PhysicsScene physicsScene)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_ISVALID_INTERNAL_OFFSET))(physicsScene);
		}

		::System::Void SetLockScene(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SETLOCKSCENE_OFFSET))(this, value);
		}

		/*
		::System::Void RegisterAsyncQuery(::Unity::Jobs::JobHandle jobHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_REGISTERASYNCQUERY_OFFSET))(this, jobHandle);
		}
		*/

		/*
		::System::Void UnRegisterAsyncQuery(::Unity::Jobs::JobHandle jobHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_UNREGISTERASYNCQUERY_OFFSET))(this, jobHandle);
		}
		*/

		/*
		::System::Boolean Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET))(this, origin, direction, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastTest(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Boolean Raycast_1(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_1_OFFSET))(this, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_Raycast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 Raycast_2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_2_OFFSET))(this, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Boolean RaycastThreadSafe(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTTHREADSAFE_OFFSET))(this, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastThreadSafe(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTHREADSAFE_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 RaycastNonAllocThreadSafe(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCASTNONALLOCTHREADSAFE_OFFSET))(this, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAllocThreadSafe(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCTHREADSAFE_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_OFFSET))(physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECAST_OFFSET))(physicsScene, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Boolean CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET))(this, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 CapsuleCast_1(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_1_OFFSET))(this, point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocThreadSafe(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCTHREADSAFE_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 CapsuleCastThreadSafe(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECASTTHREADSAFE_OFFSET))(this, point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULE_OFFSET))(this, point0, point1, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAllocThreadSafeV2_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOCTHREADSAFEV2_INTERNAL_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 OverlapCapsuleNonAllocThreadSafeV2(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOCTHREADSAFEV2_OFFSET))(this, point0, point1, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_OFFSET))(physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECAST_OFFSET))(physicsScene, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Boolean SphereCast(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET))(this, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 SphereCast_1(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_1_OFFSET))(this, origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocThreadSafe(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCTHREADSAFE_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 SphereCastThreadSafe(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECASTTHREADSAFE_OFFSET))(this, origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 OverlapSphere(::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET))(this, position, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAllocThreadSafeV2_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOCTHREADSAFEV2_INTERNAL_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 OverlapSphereThreadSafeV2(::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERETHREADSAFEV2_OFFSET))(this, position, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::UnityEngine::RaycastHit& outHit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_OFFSET))(physicsScene, center, halfExtents, direction, orientation, maxDistance, outHit, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_BoxCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCAST_OFFSET))(physicsScene, center, halfExtents, orientation, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Boolean BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET))(this, center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOX_OFFSET))(this, center, halfExtents, results, orientation, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAllocThreadSafeV2_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOCTHREADSAFEV2_INTERNAL_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 OverlapBoxThreadSafeV2(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXTHREADSAFEV2_OFFSET))(this, center, halfExtents, results, orientation, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, orientation, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 BoxCast_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_1_OFFSET))(this, center, halfExtents, direction, results, orientation, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAllocThreadSafe(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOCTHREADSAFE_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, orientation, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		::System::Int32 BoxCastThreadSafe(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCASTTHREADSAFE_OFFSET))(this, center, halfExtents, direction, results, orientation, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::UnityEngine::Vector3 Internal_TryGetColliderSurfaceNormalThreadSafe(::UnityEngine::PhysicsScene physicsScene, ::System::Int32 instanceID, ::UnityEngine::Vector3 point, ::System::Single maxDistance)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_TRYGETCOLLIDERSURFACENORMALTHREADSAFE_OFFSET))(physicsScene, instanceID, point, maxDistance);
		}
		*/

		/*
		::UnityEngine::Vector3 TryGetColliderSurfaceNormalThreadSafe(::System::Int32 instanceID, ::UnityEngine::Vector3 point, ::System::Single maxDistance)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_TRYGETCOLLIDERSURFACENORMALTHREADSAFE_OFFSET))(this, instanceID, point, maxDistance);
		}
		*/

		/*
		static ::UnityEngine::Vector3 Internal_GetColliderClosestPoint(::UnityEngine::PhysicsScene physicsScene, ::System::Int32 instanceID, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_GETCOLLIDERCLOSESTPOINT_OFFSET))(physicsScene, instanceID, point);
		}
		*/

		/*
		::UnityEngine::Vector3 GetColliderClosestPoint(::System::Int32 instanceID, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_GETCOLLIDERCLOSESTPOINT_OFFSET))(this, instanceID, point);
		}
		*/

		static ::System::Boolean IsColliderTrigger(::System::Int32 colliderInstanceID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_ISCOLLIDERTRIGGER_OFFSET))(colliderInstanceID);
		}

		static ::System::Boolean Internal_IsColliderTrigger(::System::Int32 colliderInstanceID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_ISCOLLIDERTRIGGER_OFFSET))(colliderInstanceID);
		}

		/*
		static ::System::Boolean Internal_ColliderRaycast(::UnityEngine::PhysicsScene physicsScene, ::System::Int32 instanceID, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& outHit, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_COLLIDERRAYCAST_OFFSET))(physicsScene, instanceID, ray, outHit, maxDistance);
		}
		*/

		/*
		::System::Boolean ColliderRaycast(::System::Int32 instanceID, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& outHit, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_COLLIDERRAYCAST_OFFSET))(this, instanceID, ray, outHit, maxDistance);
		}
		*/

		static ::System::Boolean IsValid_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_ISVALID_INTERNAL_INJECTED_OFFSET))(physicsScene);
		}

		/*
		static ::System::Boolean Internal_RaycastTest_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_Raycast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Internal_RaycastThreadSafe_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTHREADSAFE_INJECTED_OFFSET))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_RaycastNonAllocThreadSafe_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOCTHREADSAFE_INJECTED_OFFSET))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Query_CapsuleCast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& point1, ::UnityEngine::Vector3& point2, ::System::Single radius, ::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_CAPSULECAST_INJECTED_OFFSET))(physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_CapsuleCastNonAllocThreadSafe_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& p0, ::UnityEngine::Vector3& p1, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOCTHREADSAFE_INJECTED_OFFSET))(physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& point0, ::UnityEngine::Vector3& point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOC_INTERNAL_INJECTED_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapCapsuleNonAllocThreadSafeV2_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& point0, ::UnityEngine::Vector3& point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPCAPSULENONALLOCTHREADSAFEV2_INTERNAL_INJECTED_OFFSET))(physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Query_SphereCast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_SPHERECAST_INJECTED_OFFSET))(physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_SphereCastNonAllocThreadSafe_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOCTHREADSAFE_INJECTED_OFFSET))(physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapSphereNonAllocThreadSafeV2_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& position, ::System::Single radius, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOCTHREADSAFEV2_INTERNAL_INJECTED_OFFSET))(physicsScene, position, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Boolean Query_BoxCast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::UnityEngine::RaycastHit& outHit, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_QUERY_BOXCAST_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, orientation, maxDistance, outHit, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion& orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOC_INTERNAL_INJECTED_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 OverlapBoxNonAllocThreadSafeV2_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::Il2CppArray<::UnityEngine::OverlapResult>* results, ::UnityEngine::Quaternion& orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::OverlapResult>*, ::UnityEngine::Quaternion&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPBOXNONALLOCTHREADSAFEV2_INTERNAL_INJECTED_OFFSET))(physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAlloc_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, orientation, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Int32 Internal_BoxCastNonAllocThreadSafe_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Vector3& direction, ::Il2CppArray<::UnityEngine::RaycastHit>* raycastHits, ::UnityEngine::Quaternion& orientation, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOCTHREADSAFE_INJECTED_OFFSET))(physicsScene, center, halfExtents, direction, raycastHits, orientation, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}
		*/

		/*
		static ::System::Void Internal_TryGetColliderSurfaceNormalThreadSafe_Injected(::UnityEngine::PhysicsScene& physicsScene, ::System::Int32 instanceID, ::UnityEngine::Vector3& point, ::System::Single maxDistance, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene&, ::System::Int32, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_TRYGETCOLLIDERSURFACENORMALTHREADSAFE_INJECTED_OFFSET))(physicsScene, instanceID, point, maxDistance, ret);
		}
		*/

		/*
		static ::System::Void Internal_GetColliderClosestPoint_Injected(::UnityEngine::PhysicsScene& physicsScene, ::System::Int32 instanceID, ::UnityEngine::Vector3& point, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene&, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_GETCOLLIDERCLOSESTPOINT_INJECTED_OFFSET))(physicsScene, instanceID, point, ret);
		}
		*/

		/*
		static ::System::Boolean Internal_ColliderRaycast_Injected(::UnityEngine::PhysicsScene& physicsScene, ::System::Int32 instanceID, ::UnityEngine::Ray& ray, ::UnityEngine::RaycastHit& outHit, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::System::Int32, ::UnityEngine::Ray&, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_COLLIDERRAYCAST_INJECTED_OFFSET))(physicsScene, instanceID, ray, outHit, maxDistance);
		}
		*/
	};
}
