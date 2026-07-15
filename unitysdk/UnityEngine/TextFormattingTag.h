#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextFormattingTag_TypeDefinitionIndex = 5020;

	enum class TextFormattingTag : ::System::Int32
	{
		kTagNone = 0,
		kTagAnnotation = 1,
		kTagOffsetX = 2,
		kTagOffsetY = 4,
		kTagLineHeight = 8,
		kTagBold = 16,
		kTagItalic = 32,
		kTagColor = 64,
		kTagSize = 128,
		kTagAlignment = 256,
		kTagPosX = 512,
		kTagIndent = 1024,
		kTagMargin = 2048,
		kTagMarginLeft = 4096,
		kTagMarginRight = 8192,
		kTagUnderline = 16384,
		kTagStrikethrough = 32768,
		kTagUnbreak = 65536,
		kTagIgnoreTag = 131072,
		kTagMaterial = 262144,
		kTagImage = 524288,
		kTagX = 1048576,
		kTagY = 2097152,
		kTagWidth = 4194304,
		kTagHeight = 8388608,
		kTagHyperlink = 16777216,
		kTagIcon = 33554432,
		kTagId = 67108864,
	};
}
