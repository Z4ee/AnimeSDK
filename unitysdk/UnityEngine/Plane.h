#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_PLANE_CLOSESTPOINTONPLANE_OFFSET UNITYSDK_OFFSET(0x22BEE90)
#define UNITYENGINE_PLANE_GETDISTANCETOPOINT_OFFSET UNITYSDK_OFFSET(0x22BEF00)
#define UNITYENGINE_PLANE_GETSIDE_OFFSET UNITYSDK_OFFSET(0x22BEF30)
#define UNITYENGINE_PLANE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define UNITYENGINE_PLANE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x245D0)
#define UNITYENGINE_PLANE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x22E5A20)
#define UNITYENGINE_PLANE_SETNORMALANDPOSITION_OFFSET UNITYSDK_OFFSET(0x22E5920)
#define UNITYENGINE_PLANE_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xCCC0)
#define UNITYENGINE_PLANE_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0xDE0E0)
#define UNITYENGINE_PLANE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22E5AE0)
#define UNITYENGINE_PLANE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x24670)
#define UNITYENGINE_PLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x22E5830)

namespace UnityEngine
{
	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 3890;

	struct alignas(4) Plane
	{
		::UnityEngine::Vector3 m_Normal; // 0x10
		::System::Single m_Distance; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 inNormal, ::UnityEngine::Vector3 inPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE__CTOR_OFFSET))(this, inNormal, inPoint);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE__CTOR_1_OFFSET))(this, a, b, c);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SET_NORMAL_OFFSET))(this, value);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SET_DISTANCE_OFFSET))(this, value);
		}

		::System::Void SetNormalAndPosition(::UnityEngine::Vector3 inNormal, ::UnityEngine::Vector3 inPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SETNORMALANDPOSITION_OFFSET))(this, inNormal, inPoint);
		}

		::UnityEngine::Vector3 ClosestPointOnPlane(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_CLOSESTPOINTONPLANE_OFFSET))(this, point);
		}

		::System::Single GetDistanceToPoint(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GETDISTANCETOPOINT_OFFSET))(this, point);
		}

		::System::Boolean GetSide(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GETSIDE_OFFSET))(this, point);
		}

		/*
		::System::Boolean Raycast(::UnityEngine::Ray ray, ::System::Single& enter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_RAYCAST_OFFSET))(this, ray, enter);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_TOSTRING_OFFSET))(this);
		}
	};
}
