#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextRevealQuadRange_TypeDefinitionIndex = 42704;

	struct alignas(4) UITextRevealQuadRange
	{
		::System::Int32 quadStart; // 0x10
		::System::Int32 quadCount; // 0x14
		::System::Int32 revealIndex; // 0x18
	};
}
