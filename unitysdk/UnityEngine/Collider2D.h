#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ColliderDistance2D.h"
#include "unitysdk/UnityEngine/ColliderErrorState2D.h"
#include "unitysdk/UnityEngine/ContactFilter2D.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CompositeCollider2D; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class PhysicsMaterial2D; }
namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_COLLIDER2D_CASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4C710)
#define UNITYENGINE_COLLIDER2D_CASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC4C2F0)
#define UNITYENGINE_COLLIDER2D_CASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4C7A0)
#define UNITYENGINE_COLLIDER2D_CASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC4C770)
#define UNITYENGINE_COLLIDER2D_CAST_1_OFFSET UNITYSDK_OFFSET(0x1BC4C320)
#define UNITYENGINE_COLLIDER2D_CAST_2_OFFSET UNITYSDK_OFFSET(0x1BC4C4A0)
#define UNITYENGINE_COLLIDER2D_CAST_3_OFFSET UNITYSDK_OFFSET(0x1BC4C620)
#define UNITYENGINE_COLLIDER2D_CAST_4_OFFSET UNITYSDK_OFFSET(0x1BC4C670)
#define UNITYENGINE_COLLIDER2D_CAST_5_OFFSET UNITYSDK_OFFSET(0x1BC4C6C0)
#define UNITYENGINE_COLLIDER2D_CAST_6_OFFSET UNITYSDK_OFFSET(0x1BC4C720)
#define UNITYENGINE_COLLIDER2D_CAST_OFFSET UNITYSDK_OFFSET(0x1BC4C0E0)
#define UNITYENGINE_COLLIDER2D_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1BC4CE70)
#define UNITYENGINE_COLLIDER2D_CREATEMESH_OFFSET UNITYSDK_OFFSET(0x1BC4AC80)
#define UNITYENGINE_COLLIDER2D_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1BC4AE60)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x1BC4B580)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_2_OFFSET UNITYSDK_OFFSET(0x1BC4B7A0)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_3_OFFSET UNITYSDK_OFFSET(0x1BC4B8E0)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_4_OFFSET UNITYSDK_OFFSET(0x1BC4BA20)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_5_OFFSET UNITYSDK_OFFSET(0x1BC4BC40)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_6_OFFSET UNITYSDK_OFFSET(0x1BC4BE60)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_7_OFFSET UNITYSDK_OFFSET(0x1BC4BFA0)
#define UNITYENGINE_COLLIDER2D_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x1BC4B310)
#define UNITYENGINE_COLLIDER2D_GETSHAPEHASH_OFFSET UNITYSDK_OFFSET(0x1BC4AC90)
#define UNITYENGINE_COLLIDER2D_GET_ATTACHEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1BC4AC60)
#define UNITYENGINE_COLLIDER2D_GET_BOUNCINESS_OFFSET UNITYSDK_OFFSET(0x1BC4AD50)
#define UNITYENGINE_COLLIDER2D_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4ACF0)
#define UNITYENGINE_COLLIDER2D_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1BC4ACA0)
#define UNITYENGINE_COLLIDER2D_GET_COMPOSITECAPABLE_OFFSET UNITYSDK_OFFSET(0x1BC4AD10)
#define UNITYENGINE_COLLIDER2D_GET_COMPOSITE_OFFSET UNITYSDK_OFFSET(0x1BC4ABE0)
#define UNITYENGINE_COLLIDER2D_GET_DENSITY_OFFSET UNITYSDK_OFFSET(0x1BC4AB60)
#define UNITYENGINE_COLLIDER2D_GET_ERRORSTATE_OFFSET UNITYSDK_OFFSET(0x1BC4AD00)
#define UNITYENGINE_COLLIDER2D_GET_FRICTION_OFFSET UNITYSDK_OFFSET(0x1BC4AD40)
#define UNITYENGINE_COLLIDER2D_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1BC4AB80)
#define UNITYENGINE_COLLIDER2D_GET_OFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4AC20)
#define UNITYENGINE_COLLIDER2D_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1BC4ABF0)
#define UNITYENGINE_COLLIDER2D_GET_SHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x1BC4AC70)
#define UNITYENGINE_COLLIDER2D_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BC4AD20)
#define UNITYENGINE_COLLIDER2D_GET_USEDBYCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x1BC4ABC0)
#define UNITYENGINE_COLLIDER2D_GET_USEDBYEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC4ABA0)
#define UNITYENGINE_COLLIDER2D_ISTOUCHINGLAYERS_1_OFFSET UNITYSDK_OFFSET(0x1BC4AE20)
#define UNITYENGINE_COLLIDER2D_ISTOUCHINGLAYERS_OFFSET UNITYSDK_OFFSET(0x1BC4AE10)
#define UNITYENGINE_COLLIDER2D_ISTOUCHING_1_OFFSET UNITYSDK_OFFSET(0x1BC4AD70)
#define UNITYENGINE_COLLIDER2D_ISTOUCHING_2_OFFSET UNITYSDK_OFFSET(0x1BC4ADC0)
#define UNITYENGINE_COLLIDER2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4AE00)
#define UNITYENGINE_COLLIDER2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_OFFSET UNITYSDK_OFFSET(0x1BC4ADF0)
#define UNITYENGINE_COLLIDER2D_ISTOUCHING_OFFSET UNITYSDK_OFFSET(0x1BC4AD60)
#define UNITYENGINE_COLLIDER2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4ADB0)
#define UNITYENGINE_COLLIDER2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_OFFSET UNITYSDK_OFFSET(0x1BC4ADA0)
#define UNITYENGINE_COLLIDER2D_OVERLAPCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x1BC4B2B0)
#define UNITYENGINE_COLLIDER2D_OVERLAPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1BC4B250)
#define UNITYENGINE_COLLIDER2D_OVERLAPPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4AE50)
#define UNITYENGINE_COLLIDER2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0x1BC4AE30)
#define UNITYENGINE_COLLIDER2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4CDE0)
#define UNITYENGINE_COLLIDER2D_RAYCASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC4C940)
#define UNITYENGINE_COLLIDER2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4CE60)
#define UNITYENGINE_COLLIDER2D_RAYCASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC4CE30)
#define UNITYENGINE_COLLIDER2D_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1BC4C970)
#define UNITYENGINE_COLLIDER2D_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x1BC4CA50)
#define UNITYENGINE_COLLIDER2D_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x1BC4CB40)
#define UNITYENGINE_COLLIDER2D_RAYCAST_4_OFFSET UNITYSDK_OFFSET(0x1BC4CC40)
#define UNITYENGINE_COLLIDER2D_RAYCAST_5_OFFSET UNITYSDK_OFFSET(0x1BC4CD60)
#define UNITYENGINE_COLLIDER2D_RAYCAST_6_OFFSET UNITYSDK_OFFSET(0x1BC4CDA0)
#define UNITYENGINE_COLLIDER2D_RAYCAST_7_OFFSET UNITYSDK_OFFSET(0x1BC4CDF0)
#define UNITYENGINE_COLLIDER2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1BC4C7B0)
#define UNITYENGINE_COLLIDER2D_SET_DENSITY_OFFSET UNITYSDK_OFFSET(0x1BC4AB70)
#define UNITYENGINE_COLLIDER2D_SET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1BC4AB90)
#define UNITYENGINE_COLLIDER2D_SET_OFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4AC50)
#define UNITYENGINE_COLLIDER2D_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1BC4AC30)
#define UNITYENGINE_COLLIDER2D_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BC4AD30)
#define UNITYENGINE_COLLIDER2D_SET_USEDBYCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x1BC4ABD0)
#define UNITYENGINE_COLLIDER2D_SET_USEDBYEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1BC4ABB0)
#define UNITYENGINE_COLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4AA10)

namespace UnityEngine
{
	inline static constexpr unsigned int Collider2D_TypeDefinitionIndex = 7636;

	class Collider2D : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Single get_density()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_DENSITY_OFFSET))(this);
		}

		::System::Void set_density(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_DENSITY_OFFSET))(this, value);
		}

		::System::Boolean get_isTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void set_isTrigger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_ISTRIGGER_OFFSET))(this, value);
		}

		::System::Boolean get_usedByEffector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_USEDBYEFFECTOR_OFFSET))(this);
		}

		::System::Void set_usedByEffector(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_USEDBYEFFECTOR_OFFSET))(this, value);
		}

		::System::Boolean get_usedByComposite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_USEDBYCOMPOSITE_OFFSET))(this);
		}

		::System::Void set_usedByComposite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_USEDBYCOMPOSITE_OFFSET))(this, value);
		}

		::UnityEngine::CompositeCollider2D* get_composite()
		{
			return ((::UnityEngine::CompositeCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_COMPOSITE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_OFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Rigidbody2D* get_attachedRigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_ATTACHEDRIGIDBODY_OFFSET))(this);
		}

		::System::Int32 get_shapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_SHAPECOUNT_OFFSET))(this);
		}

		::UnityEngine::Mesh* CreateMesh(::System::Boolean useBodyPosition, ::System::Boolean useBodyRotation)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CREATEMESH_OFFSET))(this, useBodyPosition, useBodyRotation);
		}

		::System::UInt32 GetShapeHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETSHAPEHASH_OFFSET))(this);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_BOUNDS_OFFSET))(this);
		}

		::UnityEngine::ColliderErrorState2D get_errorState()
		{
			return ((::UnityEngine::ColliderErrorState2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_ERRORSTATE_OFFSET))(this);
		}

		::System::Boolean get_compositeCapable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_COMPOSITECAPABLE_OFFSET))(this);
		}

		::UnityEngine::PhysicsMaterial2D* get_sharedMaterial()
		{
			return ((::UnityEngine::PhysicsMaterial2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::PhysicsMaterial2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsMaterial2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_SHAREDMATERIAL_OFFSET))(this, value);
		}

		::System::Single get_friction()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_FRICTION_OFFSET))(this);
		}

		::System::Single get_bounciness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_BOUNCINESS_OFFSET))(this);
		}

		::System::Boolean IsTouching(::UnityEngine::Collider2D* collider)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHING_OFFSET))(this, collider);
		}

		::System::Boolean IsTouching_1(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHING_1_OFFSET))(this, collider, contactFilter);
		}

		::System::Boolean IsTouching_OtherColliderWithFilter(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_OFFSET))(this, collider, contactFilter);
		}

		::System::Boolean IsTouching_2(::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHING_2_OFFSET))(this, contactFilter);
		}

		::System::Boolean IsTouching_AnyColliderWithFilter(::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_OFFSET))(this, contactFilter);
		}

		::System::Boolean IsTouchingLayers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHINGLAYERS_OFFSET))(this);
		}

		::System::Boolean IsTouchingLayers_1(::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHINGLAYERS_1_OFFSET))(this, layerMask);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPPOINT_OFFSET))(this, point);
		}

		::UnityEngine::ColliderDistance2D Distance(::UnityEngine::Collider2D* collider)
		{
			return ((::UnityEngine::ColliderDistance2D(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_DISTANCE_OFFSET))(this, collider);
		}

		::System::Int32 OverlapCollider(::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPCOLLIDER_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 OverlapCollider_1(::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPCOLLIDER_1_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 GetContacts(::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_OFFSET))(this, contacts);
		}

		::System::Int32 GetContacts_1(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_1_OFFSET))(this, contacts);
		}

		::System::Int32 GetContacts_2(::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_2_OFFSET))(this, contactFilter, contacts);
		}

		::System::Int32 GetContacts_3(::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_3_OFFSET))(this, contactFilter, contacts);
		}

		::System::Int32 GetContacts_4(::Il2CppArray<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_4_OFFSET))(this, colliders);
		}

		::System::Int32 GetContacts_5(::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_5_OFFSET))(this, colliders);
		}

		::System::Int32 GetContacts_6(::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_6_OFFSET))(this, contactFilter, colliders);
		}

		::System::Int32 GetContacts_7(::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GETCONTACTS_7_OFFSET))(this, contactFilter, colliders);
		}

		::System::Int32 Cast(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CAST_OFFSET))(this, direction, results);
		}

		::System::Int32 Cast_1(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CAST_1_OFFSET))(this, direction, results, distance);
		}

		::System::Int32 Cast_2(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance, ::System::Boolean ignoreSiblingColliders)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CAST_2_OFFSET))(this, direction, results, distance, ignoreSiblingColliders);
		}

		::System::Int32 Cast_3(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CAST_3_OFFSET))(this, direction, contactFilter, results);
		}

		::System::Int32 Cast_4(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CAST_4_OFFSET))(this, direction, contactFilter, results, distance);
		}

		::System::Int32 Cast_5(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance, ::System::Boolean ignoreSiblingColliders)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CAST_5_OFFSET))(this, direction, contactFilter, results, distance, ignoreSiblingColliders);
		}

		::System::Int32 CastArray_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::System::Boolean ignoreSiblingColliders, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Boolean, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CASTARRAY_INTERNAL_OFFSET))(this, direction, distance, contactFilter, ignoreSiblingColliders, results);
		}

		::System::Int32 Cast_6(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, ::System::Single distance, ::System::Boolean ignoreSiblingColliders)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CAST_6_OFFSET))(this, direction, contactFilter, results, distance, ignoreSiblingColliders);
		}

		::System::Int32 CastList_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::System::Boolean ignoreSiblingColliders, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CASTLIST_INTERNAL_OFFSET))(this, direction, distance, contactFilter, ignoreSiblingColliders, results);
		}

		::System::Int32 Raycast(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_OFFSET))(this, direction, results);
		}

		::System::Int32 Raycast_1(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_1_OFFSET))(this, direction, results, distance);
		}

		::System::Int32 Raycast_2(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_2_OFFSET))(this, direction, results, distance, layerMask);
		}

		::System::Int32 Raycast_3(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance, ::System::Int32 layerMask, ::System::Single minDepth)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_3_OFFSET))(this, direction, results, distance, layerMask, minDepth);
		}

		::System::Int32 Raycast_4(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance, ::System::Int32 layerMask, ::System::Single minDepth, ::System::Single maxDepth)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_4_OFFSET))(this, direction, results, distance, layerMask, minDepth, maxDepth);
		}

		::System::Int32 Raycast_5(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_5_OFFSET))(this, direction, contactFilter, results);
		}

		::System::Int32 Raycast_6(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_6_OFFSET))(this, direction, contactFilter, results, distance);
		}

		::System::Int32 RaycastArray_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCASTARRAY_INTERNAL_OFFSET))(this, direction, distance, contactFilter, results);
		}

		::System::Int32 Raycast_7(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCAST_7_OFFSET))(this, direction, contactFilter, results, distance);
		}

		::System::Int32 RaycastList_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCASTLIST_INTERNAL_OFFSET))(this, direction, distance, contactFilter, results);
		}

		::UnityEngine::Vector2 ClosestPoint(::UnityEngine::Vector2 position)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CLOSESTPOINT_OFFSET))(this, position);
		}

		::System::Void get_offset_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_OFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_offset_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_OFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_BOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Boolean IsTouching_OtherColliderWithFilter_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INJECTED_OFFSET))(this, collider, contactFilter);
		}

		::System::Boolean IsTouching_AnyColliderWithFilter_Injected(::UnityEngine::ContactFilter2D& contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INJECTED_OFFSET))(this, contactFilter);
		}

		::System::Boolean OverlapPoint_Injected(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPPOINT_INJECTED_OFFSET))(this, point);
		}

		::System::Int32 CastArray_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Boolean ignoreSiblingColliders, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::System::Boolean, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CASTARRAY_INTERNAL_INJECTED_OFFSET))(this, direction, distance, contactFilter, ignoreSiblingColliders, results);
		}

		::System::Int32 CastList_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Boolean ignoreSiblingColliders, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_CASTLIST_INTERNAL_INJECTED_OFFSET))(this, direction, distance, contactFilter, ignoreSiblingColliders, results);
		}

		::System::Int32 RaycastArray_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET))(this, direction, distance, contactFilter, results);
		}

		::System::Int32 RaycastList_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET))(this, direction, distance, contactFilter, results);
		}
	};
}
