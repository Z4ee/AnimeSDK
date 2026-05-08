#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer_Matched_TypeDefinitionIndex = 49089;

	struct alignas(4) UITextTagReplacer_Matched
	{
		::System::UInt16 token; // 0x10
		::System::Int32 start; // 0x14
		::System::Int32 count; // 0x18
	};
}
