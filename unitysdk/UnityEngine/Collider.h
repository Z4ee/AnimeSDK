#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class PhysicMaterial; }
namespace UnityEngine { class Rigidbody; }

#define UNITYENGINE_COLLIDER_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1ED9CE60)
#define UNITYENGINE_COLLIDER_CLOSESTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9CC40)
#define UNITYENGINE_COLLIDER_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1ED9CBF0)
#define UNITYENGINE_COLLIDER_GET_ATTACHEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1ED9CB80)
#define UNITYENGINE_COLLIDER_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9CCA0)
#define UNITYENGINE_COLLIDER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1ED9CC50)
#define UNITYENGINE_COLLIDER_GET_CONTACTOFFSET_OFFSET UNITYSDK_OFFSET(0x1ED9CBB0)
#define UNITYENGINE_COLLIDER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1ED9CB60)
#define UNITYENGINE_COLLIDER_GET_HASMODIFIABLECONTACTS_OFFSET UNITYSDK_OFFSET(0x1ED9CCB0)
#define UNITYENGINE_COLLIDER_GET_ISIGNOREIK_OFFSET UNITYSDK_OFFSET(0x1ED9CEE0)
#define UNITYENGINE_COLLIDER_GET_ISIGNOREMDB_OFFSET UNITYSDK_OFFSET(0x1ED9CF00)
#define UNITYENGINE_COLLIDER_GET_ISSCENEQUERY_OFFSET UNITYSDK_OFFSET(0x1ED9CBD0)
#define UNITYENGINE_COLLIDER_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1ED9CB90)
#define UNITYENGINE_COLLIDER_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED9CCF0)
#define UNITYENGINE_COLLIDER_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED9CCD0)
#define UNITYENGINE_COLLIDER_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9CE50)
#define UNITYENGINE_COLLIDER_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1ED9CE40)
#define UNITYENGINE_COLLIDER_ISDELAYDELETED_OFFSET UNITYSDK_OFFSET(0x1ED9CED0)
#define UNITYENGINE_COLLIDER_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1ED9CD90)
#define UNITYENGINE_COLLIDER_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9CD80)
#define UNITYENGINE_COLLIDER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1ED9CD10)
#define UNITYENGINE_COLLIDER_SET_CONTACTOFFSET_OFFSET UNITYSDK_OFFSET(0x1ED9CBC0)
#define UNITYENGINE_COLLIDER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1ED9CB70)
#define UNITYENGINE_COLLIDER_SET_HASMODIFIABLECONTACTS_OFFSET UNITYSDK_OFFSET(0x1ED9CCC0)
#define UNITYENGINE_COLLIDER_SET_ISIGNOREIK_OFFSET UNITYSDK_OFFSET(0x1ED9CEF0)
#define UNITYENGINE_COLLIDER_SET_ISIGNOREMDB_OFFSET UNITYSDK_OFFSET(0x1ED9CF10)
#define UNITYENGINE_COLLIDER_SET_ISSCENEQUERY_OFFSET UNITYSDK_OFFSET(0x1ED9CBE0)
#define UNITYENGINE_COLLIDER_SET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1ED9CBA0)
#define UNITYENGINE_COLLIDER_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED9CD00)
#define UNITYENGINE_COLLIDER_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED9CCE0)
#define UNITYENGINE_COLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED9C6A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Collider_TypeDefinitionIndex = 7792;

	class Collider : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::Rigidbody* get_attachedRigidbody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ATTACHEDRIGIDBODY_OFFSET))(this);
		}

		::System::Boolean get_isTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void set_isTrigger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_ISTRIGGER_OFFSET))(this, value);
		}

		::System::Single get_contactOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_CONTACTOFFSET_OFFSET))(this);
		}

		::System::Void set_contactOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_CONTACTOFFSET_OFFSET))(this, value);
		}

		::System::Single get_isSceneQuery()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ISSCENEQUERY_OFFSET))(this);
		}

		::System::Void set_isSceneQuery(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_ISSCENEQUERY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_CLOSESTPOINT_OFFSET))(this, position);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Boolean get_hasModifiableContacts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_HASMODIFIABLECONTACTS_OFFSET))(this);
		}

		::System::Void set_hasModifiableContacts(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_HASMODIFIABLECONTACTS_OFFSET))(this, value);
		}

		::UnityEngine::PhysicMaterial* get_sharedMaterial()
		{
			return ((::UnityEngine::PhysicMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::PhysicMaterial* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicMaterial*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_SHAREDMATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::PhysicMaterial* get_material()
		{
			return ((::UnityEngine::PhysicMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::PhysicMaterial* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicMaterial*))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Boolean& hasHit)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_RAYCAST_OFFSET))(this, ray, maxDistance, hasHit);
		}

		::System::Boolean Raycast_1(::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_RAYCAST_1_OFFSET))(this, ray, hitInfo, maxDistance);
		}

		::System::Void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::UnityEngine::Vector3& outPos, ::System::Single& distance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET))(this, point, outPos, distance);
		}

		::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_CLOSESTPOINTONBOUNDS_OFFSET))(this, position);
		}

		::System::Boolean IsDelayDeleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_ISDELAYDELETED_OFFSET))(this);
		}

		::System::Boolean get_isIgnoreIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ISIGNOREIK_OFFSET))(this);
		}

		::System::Void set_isIgnoreIK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_ISIGNOREIK_OFFSET))(this, value);
		}

		::System::Boolean get_isIgnoreMDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ISIGNOREMDB_OFFSET))(this);
		}

		::System::Void set_isIgnoreMDB(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_ISIGNOREMDB_OFFSET))(this, value);
		}

		::System::Void ClosestPoint_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_CLOSESTPOINT_INJECTED_OFFSET))(this, position, ret);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_BOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void Raycast_Injected(::UnityEngine::Ray& ray, ::System::Single maxDistance, ::System::Boolean& hasHit, ::UnityEngine::RaycastHit& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Ray&, ::System::Single, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_RAYCAST_INJECTED_OFFSET))(this, ray, maxDistance, hasHit, ret);
		}

		::System::Void Internal_ClosestPointOnBounds_Injected(::UnityEngine::Vector3& point, ::UnityEngine::Vector3& outPos, ::System::Single& distance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET))(this, point, outPos, distance);
		}
	};
}
