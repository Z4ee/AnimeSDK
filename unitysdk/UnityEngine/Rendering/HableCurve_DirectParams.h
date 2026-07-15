#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_DirectParams_TypeDefinitionIndex = 34166;

	struct alignas(4) HableCurve_DirectParams
	{
		::System::Single x0; // 0x10
		::System::Single y0; // 0x14
		::System::Single x1; // 0x18
		::System::Single y1; // 0x1C
		::System::Single W; // 0x20
		::System::Single overshootX; // 0x24
		::System::Single overshootY; // 0x28
		::System::Single gamma; // 0x2C
	};
}
