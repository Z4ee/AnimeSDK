#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_CONTACTPOINT2D_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA501D0)
#define UNITYENGINE_CONTACTPOINT2D_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA50430)
#define UNITYENGINE_CONTACTPOINT2D_GET_NORMALIMPULSE_OFFSET UNITYSDK_OFFSET(0x9F06F0)
#define UNITYENGINE_CONTACTPOINT2D_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNITYENGINE_CONTACTPOINT2D_GET_OTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA50270)
#define UNITYENGINE_CONTACTPOINT2D_GET_OTHERRIGIDBODY_OFFSET UNITYSDK_OFFSET(0xA503A0)
#define UNITYENGINE_CONTACTPOINT2D_GET_POINT_OFFSET UNITYSDK_OFFSET(0x246290)
#define UNITYENGINE_CONTACTPOINT2D_GET_RELATIVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define UNITYENGINE_CONTACTPOINT2D_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0xA50310)
#define UNITYENGINE_CONTACTPOINT2D_GET_SEPARATION_OFFSET UNITYSDK_OFFSET(0x674F40)
#define UNITYENGINE_CONTACTPOINT2D_GET_TANGENTIMPULSE_OFFSET UNITYSDK_OFFSET(0x79AF70)

namespace UnityEngine
{
	inline static constexpr unsigned int ContactPoint2D_TypeDefinitionIndex = 18384;

	struct alignas(4) ContactPoint2D
	{
		::UnityEngine::Vector2 m_Point; // 0x10
		::UnityEngine::Vector2 m_Normal; // 0x18
		::UnityEngine::Vector2 m_RelativeVelocity; // 0x20
		::System::Single m_Separation; // 0x28
		::System::Single m_NormalImpulse; // 0x2C
		::System::Single m_TangentImpulse; // 0x30
		::System::Int32 m_Collider; // 0x34
		::System::Int32 m_OtherCollider; // 0x38
		::System::Int32 m_Rigidbody; // 0x3C
		::System::Int32 m_OtherRigidbody; // 0x40
		::System::Int32 m_Enabled; // 0x44

		::UnityEngine::Vector2 get_point()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_POINT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_normal()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_NORMAL_OFFSET))(this);
		}

		::System::Single get_separation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_SEPARATION_OFFSET))(this);
		}

		::System::Single get_normalImpulse()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_NORMALIMPULSE_OFFSET))(this);
		}

		::System::Single get_tangentImpulse()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_TANGENTIMPULSE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_relativeVelocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_RELATIVEVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Collider2D* get_collider()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_COLLIDER_OFFSET))(this);
		}

		::UnityEngine::Collider2D* get_otherCollider()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_OTHERCOLLIDER_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_rigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_RIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_otherRigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_OTHERRIGIDBODY_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT2D_GET_ENABLED_OFFSET))(this);
		}
	};
}
