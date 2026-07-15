#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ColliderDistance2D_TypeDefinitionIndex = 5277;

	struct alignas(4) ColliderDistance2D
	{
		::UnityEngine::Vector2 m_PointA; // 0x10
		::UnityEngine::Vector2 m_PointB; // 0x18
		::UnityEngine::Vector2 m_Normal; // 0x20
		::System::Single m_Distance; // 0x28
		::System::Int32 m_IsValid; // 0x2C
	};
}
