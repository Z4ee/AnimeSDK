#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define UNITYENGINE_CONTACTPOINT_GETCOLLIDERBYINSTANCEID_OFFSET UNITYSDK_OFFSET(0x18A9E920)
#define UNITYENGINE_CONTACTPOINT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x24600)
#define UNITYENGINE_CONTACTPOINT_GET_OTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x21250A0)
#define UNITYENGINE_CONTACTPOINT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x245E0)
#define UNITYENGINE_CONTACTPOINT_GET_SEPARATION_OFFSET UNITYSDK_OFFSET(0x20E0750)

namespace UnityEngine
{
	inline static constexpr unsigned int ContactPoint_TypeDefinitionIndex = 5224;

	struct alignas(4) ContactPoint
	{
		::UnityEngine::Vector3 m_Point; // 0x10
		::UnityEngine::Vector3 m_Normal; // 0x1C
		::System::Int32 m_ThisColliderInstanceID; // 0x28
		::System::Int32 m_OtherColliderInstanceID; // 0x2C
		::System::Single m_Separation; // 0x30

		::UnityEngine::Vector3 get_point()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_POINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_NORMAL_OFFSET))(this);
		}

		::UnityEngine::Collider* get_otherCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_OTHERCOLLIDER_OFFSET))(this);
		}

		::System::Single get_separation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_SEPARATION_OFFSET))(this);
		}

		static ::UnityEngine::Collider* GetColliderByInstanceID(::System::Int32 instanceID)
		{
			return ((::UnityEngine::Collider*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GETCOLLIDERBYINSTANCEID_OFFSET))(instanceID);
		}
	};
}
