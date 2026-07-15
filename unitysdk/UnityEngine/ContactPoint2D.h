#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ContactPoint2D_TypeDefinitionIndex = 5280;

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
	};
}
