#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class TMP_FontAsset; }

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontWeightPair_TypeDefinitionIndex = 41772;

	struct alignas(8) TMP_FontWeightPair
	{
		::TMPro::TMP_FontAsset* regularTypeface; // 0x10
		::TMPro::TMP_FontAsset* italicTypeface; // 0x18
	};
}
