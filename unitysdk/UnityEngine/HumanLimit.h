#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int HumanLimit_TypeDefinitionIndex = 5151;

	struct alignas(4) HumanLimit
	{
		::UnityEngine::Vector3 m_Min; // 0x10
		::UnityEngine::Vector3 m_Max; // 0x1C
		::UnityEngine::Vector3 m_Center; // 0x28
		::System::Single m_AxisLength; // 0x34
		::System::Int32 m_UseDefaultValues; // 0x38
	};
}
