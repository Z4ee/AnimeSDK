#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IntersectionMaskRectangle_t_TypeDefinitionIndex = 37159;

	struct alignas(4) IntersectionMaskRectangle_t
	{
		::System::Single m_flTopLeftX; // 0x10
		::System::Single m_flTopLeftY; // 0x14
		::System::Single m_flWidth; // 0x18
		::System::Single m_flHeight; // 0x1C
	};
}
