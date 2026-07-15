#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_BOUNDS_CLOSESTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C4D1F90)
#define UNITYENGINE_BOUNDS_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x3AC5200)
#define UNITYENGINE_BOUNDS_CONTAINS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C4D1F00)
#define UNITYENGINE_BOUNDS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x3AC51A0)
#define UNITYENGINE_BOUNDS_ENCAPSULATE_1_OFFSET UNITYSDK_OFFSET(0x3AC4EF0)
#define UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0x3AC4E80)
#define UNITYENGINE_BOUNDS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AC4C80)
#define UNITYENGINE_BOUNDS_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AC4BD0)
#define UNITYENGINE_BOUNDS_EXPAND_1_OFFSET UNITYSDK_OFFSET(0x3AC5010)
#define UNITYENGINE_BOUNDS_EXPAND_OFFSET UNITYSDK_OFFSET(0x3AC4FE0)
#define UNITYENGINE_BOUNDS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AC4B10)
#define UNITYENGINE_BOUNDS_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x165820)
#define UNITYENGINE_BOUNDS_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x38CBD20)
#define UNITYENGINE_BOUNDS_GET_MAX_OFFSET UNITYSDK_OFFSET(0x3AC4DB0)
#define UNITYENGINE_BOUNDS_GET_MIN_OFFSET UNITYSDK_OFFSET(0x3AC4D30)
#define UNITYENGINE_BOUNDS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x3AC4CE0)
#define UNITYENGINE_BOUNDS_INTERSECTRAYAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C4D1F30)
#define UNITYENGINE_BOUNDS_INTERSECTRAYAABB_OFFSET UNITYSDK_OFFSET(0x1C4D1C20)
#define UNITYENGINE_BOUNDS_INTERSECTRAY_1_OFFSET UNITYSDK_OFFSET(0x3AC5140)
#define UNITYENGINE_BOUNDS_INTERSECTRAY_OFFSET UNITYSDK_OFFSET(0x3AC50F0)
#define UNITYENGINE_BOUNDS_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x3AC5040)
#define UNITYENGINE_BOUNDS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C4D1830)
#define UNITYENGINE_BOUNDS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C4D18C0)
#define UNITYENGINE_BOUNDS_SETMINMAX_OFFSET UNITYSDK_OFFSET(0x3AC4E30)
#define UNITYENGINE_BOUNDS_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x165690)
#define UNITYENGINE_BOUNDS_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x38CBD40)
#define UNITYENGINE_BOUNDS_SET_MAX_OFFSET UNITYSDK_OFFSET(0x3AC4DE0)
#define UNITYENGINE_BOUNDS_SET_MIN_OFFSET UNITYSDK_OFFSET(0x3AC4D60)
#define UNITYENGINE_BOUNDS_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x3AC4D00)
#define UNITYENGINE_BOUNDS_SQRDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C4D1F20)
#define UNITYENGINE_BOUNDS_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x3AC51D0)
#define UNITYENGINE_BOUNDS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3AC5190)
#define UNITYENGINE_BOUNDS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AC5180)
#define UNITYENGINE_BOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x3AC4AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int Bounds_TypeDefinitionIndex = 4066;

	struct alignas(4) Bounds
	{
		::UnityEngine::Vector3 m_Center; // 0x10
		::UnityEngine::Vector3 m_Extents; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EQUALS_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_CENTER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_extents()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_EXTENTS_OFFSET))(this);
		}

		::System::Void set_extents(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_EXTENTS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_min()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_MIN_OFFSET))(this);
		}

		::System::Void set_min(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_MIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_max()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_MAX_OFFSET))(this);
		}

		::System::Void set_max(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_MAX_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Void SetMinMax(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SETMINMAX_OFFSET))(this, a1, a2);
		}

		::System::Void Encapsulate(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET))(this, a1);
		}

		::System::Void Encapsulate_1(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_ENCAPSULATE_1_OFFSET))(this, a1);
		}

		::System::Void Expand(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EXPAND_OFFSET))(this, a1);
		}

		::System::Void Expand_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EXPAND_1_OFFSET))(this, a1);
		}

		::System::Boolean Intersects(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean IntersectRay(::UnityEngine::Ray a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAY_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean IntersectRay_1(::UnityEngine::Ray a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAY_1_OFFSET))(this, a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CONTAINS_OFFSET))(this, a1);
		}

		::System::Single SqrDistance(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SQRDISTANCE_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean IntersectRayAABB(::UnityEngine::Ray a1, ::UnityEngine::Bounds a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Bounds, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAYAABB_OFFSET))(a1, a2, a3);
		}
		*/

		::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CLOSESTPOINT_OFFSET))(this, a1);
		}

		static ::System::Boolean Contains_Injected(::UnityEngine::Bounds& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CONTAINS_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single SqrDistance_Injected(::UnityEngine::Bounds& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SQRDISTANCE_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean IntersectRayAABB_Injected(::UnityEngine::Ray& a1, ::UnityEngine::Bounds& a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray&, ::UnityEngine::Bounds&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAYAABB_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::Void ClosestPoint_Injected(::UnityEngine::Bounds& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CLOSESTPOINT_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}
