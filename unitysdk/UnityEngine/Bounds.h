#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_BOUNDS_CLOSESTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A42C9F0)
#define UNITYENGINE_BOUNDS_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x22E2E10)
#define UNITYENGINE_BOUNDS_CONTAINS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A42C960)
#define UNITYENGINE_BOUNDS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x22E2DB0)
#define UNITYENGINE_BOUNDS_ENCAPSULATE_1_OFFSET UNITYSDK_OFFSET(0x22E2B00)
#define UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0x22E2A90)
#define UNITYENGINE_BOUNDS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22E2890)
#define UNITYENGINE_BOUNDS_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E2820)
#define UNITYENGINE_BOUNDS_EXPAND_1_OFFSET UNITYSDK_OFFSET(0x22E2C20)
#define UNITYENGINE_BOUNDS_EXPAND_OFFSET UNITYSDK_OFFSET(0x22E2BF0)
#define UNITYENGINE_BOUNDS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22E2760)
#define UNITYENGINE_BOUNDS_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x245D0)
#define UNITYENGINE_BOUNDS_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x245F0)
#define UNITYENGINE_BOUNDS_GET_MAX_OFFSET UNITYSDK_OFFSET(0x22E29C0)
#define UNITYENGINE_BOUNDS_GET_MIN_OFFSET UNITYSDK_OFFSET(0x22E2940)
#define UNITYENGINE_BOUNDS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x22E28F0)
#define UNITYENGINE_BOUNDS_INTERSECTRAYAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A42C990)
#define UNITYENGINE_BOUNDS_INTERSECTRAYAABB_OFFSET UNITYSDK_OFFSET(0x1A42C500)
#define UNITYENGINE_BOUNDS_INTERSECTRAY_1_OFFSET UNITYSDK_OFFSET(0x22E2D50)
#define UNITYENGINE_BOUNDS_INTERSECTRAY_OFFSET UNITYSDK_OFFSET(0x22E2D00)
#define UNITYENGINE_BOUNDS_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x22E2C50)
#define UNITYENGINE_BOUNDS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A42C110)
#define UNITYENGINE_BOUNDS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A42C1A0)
#define UNITYENGINE_BOUNDS_SETMINMAX_OFFSET UNITYSDK_OFFSET(0x22E2A40)
#define UNITYENGINE_BOUNDS_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xDE0E0)
#define UNITYENGINE_BOUNDS_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x1707730)
#define UNITYENGINE_BOUNDS_SET_MAX_OFFSET UNITYSDK_OFFSET(0x22E29F0)
#define UNITYENGINE_BOUNDS_SET_MIN_OFFSET UNITYSDK_OFFSET(0x22E2970)
#define UNITYENGINE_BOUNDS_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x22E2910)
#define UNITYENGINE_BOUNDS_SQRDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A42C980)
#define UNITYENGINE_BOUNDS_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x22E2DE0)
#define UNITYENGINE_BOUNDS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22E2DA0)
#define UNITYENGINE_BOUNDS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22E2D90)
#define UNITYENGINE_BOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x22E2720)

namespace UnityEngine
{
	inline static constexpr unsigned int Bounds_TypeDefinitionIndex = 3887;

	struct alignas(4) Bounds
	{
		::UnityEngine::Vector3 m_Center; // 0x10
		::UnityEngine::Vector3 m_Extents; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS__CTOR_OFFSET))(this, center, size);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Bounds other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EQUALS_1_OFFSET))(this, other);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_CENTER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_extents()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_EXTENTS_OFFSET))(this);
		}

		::System::Void set_extents(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_EXTENTS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_min()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_MIN_OFFSET))(this);
		}

		::System::Void set_min(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_MIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_max()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_MAX_OFFSET))(this);
		}

		::System::Void set_max(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_MAX_OFFSET))(this, value);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Void SetMinMax(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SETMINMAX_OFFSET))(this, min, max);
		}

		::System::Void Encapsulate(::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET))(this, point);
		}

		::System::Void Encapsulate_1(::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_ENCAPSULATE_1_OFFSET))(this, bounds);
		}

		::System::Void Expand(::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EXPAND_OFFSET))(this, amount);
		}

		::System::Void Expand_1(::UnityEngine::Vector3 amount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EXPAND_1_OFFSET))(this, amount);
		}

		::System::Boolean Intersects(::UnityEngine::Bounds bounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTS_OFFSET))(this, bounds);
		}

		/*
		::System::Boolean IntersectRay(::UnityEngine::Ray ray)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAY_OFFSET))(this, ray);
		}
		*/

		/*
		::System::Boolean IntersectRay_1(::UnityEngine::Ray ray, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAY_1_OFFSET))(this, ray, distance);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_TOSTRING_1_OFFSET))(this, format);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CONTAINS_OFFSET))(this, point);
		}

		::System::Single SqrDistance(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SQRDISTANCE_OFFSET))(this, point);
		}

		/*
		static ::System::Boolean IntersectRayAABB(::UnityEngine::Ray ray, ::UnityEngine::Bounds bounds, ::System::Single& dist)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Bounds, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAYAABB_OFFSET))(ray, bounds, dist);
		}
		*/

		::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CLOSESTPOINT_OFFSET))(this, point);
		}

		static ::System::Boolean Contains_Injected(::UnityEngine::Bounds& _unity_self, ::UnityEngine::Vector3& point)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CONTAINS_INJECTED_OFFSET))(_unity_self, point);
		}

		static ::System::Single SqrDistance_Injected(::UnityEngine::Bounds& _unity_self, ::UnityEngine::Vector3& point)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SQRDISTANCE_INJECTED_OFFSET))(_unity_self, point);
		}

		/*
		static ::System::Boolean IntersectRayAABB_Injected(::UnityEngine::Ray& ray, ::UnityEngine::Bounds& bounds, ::System::Single& dist)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray&, ::UnityEngine::Bounds&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAYAABB_INJECTED_OFFSET))(ray, bounds, dist);
		}
		*/

		static ::System::Void ClosestPoint_Injected(::UnityEngine::Bounds& _unity_self, ::UnityEngine::Vector3& point, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CLOSESTPOINT_INJECTED_OFFSET))(_unity_self, point, ret);
		}
	};
}
