#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_LineExtraInfo_TypeDefinitionIndex = 90270;

	struct alignas(4) NAP_LineExtraInfo
	{
		::System::Single extraHeight; // 0x10
		::System::Single shiftY; // 0x14
	};
}
