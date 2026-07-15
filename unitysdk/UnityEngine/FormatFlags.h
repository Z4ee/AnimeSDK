#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FormatFlags_TypeDefinitionIndex = 5021;

	enum class FormatFlags : ::System::Int32
	{
		kTextFormatNone = 0,
		kFormatBold = 1,
		kFormatItalic = 2,
		kFormatColor = 4,
		kFormatSize = 8,
		kFormatMaterial = 16,
		kFormatImage = 32,
		kFormatAnnotation = 64,
		kFormatLineHeight = 128,
		kFormatAlignment = 256,
		kFormatPosX = 512,
		kFormatIndent = 1024,
		kFormatMargin = 2048,
		kFormatUnderline = 4096,
		kFormatStrikethrough = 8192,
		kFormatUnderlineColor = 16384,
		kFormatUnbreak = 32768,
		kFormatIcon = 65536,
		kFormatPop = 131072,
	};
}
