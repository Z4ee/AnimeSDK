#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_PLANE_CLOSESTPOINTONPLANE_OFFSET UNITYSDK_OFFSET(0x385C860)
#define UNITYENGINE_PLANE_GETDISTANCETOPOINT_OFFSET UNITYSDK_OFFSET(0x385C8D0)
#define UNITYENGINE_PLANE_GETSIDE_OFFSET UNITYSDK_OFFSET(0x385C900)
#define UNITYENGINE_PLANE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xD530)
#define UNITYENGINE_PLANE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x25350)
#define UNITYENGINE_PLANE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x3882680)
#define UNITYENGINE_PLANE_SETNORMALANDPOSITION_OFFSET UNITYSDK_OFFSET(0x3882580)
#define UNITYENGINE_PLANE_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xD540)
#define UNITYENGINE_PLANE_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1F70430)
#define UNITYENGINE_PLANE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3882740)
#define UNITYENGINE_PLANE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x253F0)
#define UNITYENGINE_PLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x3882490)

namespace UnityEngine
{
	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 4064;

	struct alignas(4) Plane
	{
		::UnityEngine::Vector3 m_Normal; // 0x10
		::System::Single m_Distance; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SET_NORMAL_OFFSET))(this, a1);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Void SetNormalAndPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_SETNORMALANDPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 ClosestPointOnPlane(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_CLOSESTPOINTONPLANE_OFFSET))(this, a1);
		}

		::System::Single GetDistanceToPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GETDISTANCETOPOINT_OFFSET))(this, a1);
		}

		::System::Boolean GetSide(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_GETSIDE_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Raycast(::UnityEngine::Ray a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_RAYCAST_OFFSET))(this, a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLANE_TOSTRING_OFFSET))(this);
		}
	};
}
