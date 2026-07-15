#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/Extents.h"
#include "unitysdk/TMPro/HorizontalAlignmentOptions.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_LineInfo_TypeDefinitionIndex = 41806;

	struct alignas(4) TMP_LineInfo
	{
		::System::Int32 controlCharacterCount; // 0x10
		::System::Int32 characterCount; // 0x14
		::System::Int32 visibleCharacterCount; // 0x18
		::System::Int32 spaceCount; // 0x1C
		::System::Int32 wordCount; // 0x20
		::System::Int32 firstCharacterIndex; // 0x24
		::System::Int32 firstVisibleCharacterIndex; // 0x28
		::System::Int32 lastCharacterIndex; // 0x2C
		::System::Int32 lastVisibleCharacterIndex; // 0x30
		::System::Single length; // 0x34
		::System::Single lineHeight; // 0x38
		::System::Single ascender; // 0x3C
		::System::Single baseline; // 0x40
		::System::Single descender; // 0x44
		::System::Single maxAdvance; // 0x48
		::System::Single width; // 0x4C
		::System::Single marginLeft; // 0x50
		::System::Single marginRight; // 0x54
		::TMPro::HorizontalAlignmentOptions alignment; // 0x58
		::TMPro::Extents lineExtents; // 0x5C
	};
}
