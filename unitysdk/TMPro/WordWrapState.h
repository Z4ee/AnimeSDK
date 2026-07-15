#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/Extents.h"
#include "unitysdk/TMPro/FontStyles.h"
#include "unitysdk/TMPro/FontWeight.h"
#include "unitysdk/TMPro/HighlightState.h"
#include "unitysdk/TMPro/HorizontalAlignmentOptions.h"
#include "unitysdk/TMPro/MaterialReference.h"
#include "unitysdk/TMPro/TMP_FontStyleStack.h"
#include "unitysdk/TMPro/TMP_LineInfo.h"
#include "unitysdk/TMPro/TMP_TextProcessingStack_1.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace TMPro { class TMP_ColorGradient; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class Material; }

namespace TMPro
{
	inline static constexpr unsigned int WordWrapState_TypeDefinitionIndex = 41885;

	struct alignas(8) WordWrapState
	{
		::System::Int32 previous_WordBreak; // 0x10
		::System::Int32 total_CharacterCount; // 0x14
		::System::Int32 visible_CharacterCount; // 0x18
		::System::Int32 visible_SpriteCount; // 0x1C
		::System::Int32 visible_LinkCount; // 0x20
		::System::Int32 firstCharacterIndex; // 0x24
		::System::Int32 firstVisibleCharacterIndex; // 0x28
		::System::Int32 lastCharacterIndex; // 0x2C
		::System::Int32 lastVisibleCharIndex; // 0x30
		::System::Int32 lineNumber; // 0x34
		::System::Single maxCapHeight; // 0x38
		::System::Single maxAscender; // 0x3C
		::System::Single maxDescender; // 0x40
		::System::Single startOfLineAscender; // 0x44
		::System::Single maxLineAscender; // 0x48
		::System::Single maxLineDescender; // 0x4C
		::System::Single pageAscender; // 0x50
		::TMPro::HorizontalAlignmentOptions horizontalAlignment; // 0x54
		::System::Single marginLeft; // 0x58
		::System::Single marginRight; // 0x5C
		::System::Single xAdvance; // 0x60
		::System::Single preferredWidth; // 0x64
		::System::Single preferredHeight; // 0x68
		::System::Single previousLineScale; // 0x6C
		::System::Int32 wordCount; // 0x70
		::TMPro::FontStyles fontStyle; // 0x74
		::System::Int32 italicAngle; // 0x78
		::System::Single fontScaleMultiplier; // 0x7C
		::System::Single currentFontSize; // 0x80
		::System::Single baselineOffset; // 0x84
		::System::Single lineOffset; // 0x88
		::System::Boolean isDrivenLineSpacing; // 0x8C
		::System::Single glyphHorizontalAdvanceAdjustment; // 0x90
		::System::Single cSpace; // 0x94
		::System::Single mSpace; // 0x98
		::TMPro::TMP_TextInfo* textInfo; // 0xA0
		::TMPro::TMP_LineInfo lineInfo; // 0xA8
		::UnityEngine::Color32 vertexColor; // 0x104
		::UnityEngine::Color32 underlineColor; // 0x108
		::UnityEngine::Color32 strikethroughColor; // 0x10C
		::UnityEngine::Color32 highlightColor; // 0x110
		::TMPro::TMP_FontStyleStack basicStyleStack; // 0x114
		::TMPro::TMP_TextProcessingStack_1<::System::Int32> italicAngleStack; // 0x120
		::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> colorStack; // 0x140
		::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack; // 0x160
		::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack; // 0x180
		::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack; // 0x1A0
		::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> highlightStateStack; // 0x1C0
		::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient*> colorGradientStack; // 0x1F0
		::TMPro::TMP_TextProcessingStack_1<::System::Single> sizeStack; // 0x218
		::TMPro::TMP_TextProcessingStack_1<::System::Single> indentStack; // 0x238
		::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> fontWeightStack; // 0x258
		::TMPro::TMP_TextProcessingStack_1<::System::Int32> styleStack; // 0x278
		::TMPro::TMP_TextProcessingStack_1<::System::Single> baselineStack; // 0x298
		::TMPro::TMP_TextProcessingStack_1<::System::Int32> actionStack; // 0x2B8
		::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> materialReferenceStack; // 0x2D8
		::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> lineJustificationStack; // 0x330
		::System::Int32 spriteAnimationID; // 0x350
		::TMPro::TMP_FontAsset* currentFontAsset; // 0x358
		::TMPro::TMP_SpriteAsset* currentSpriteAsset; // 0x360
		::UnityEngine::Material* currentMaterial; // 0x368
		::System::Int32 currentMaterialIndex; // 0x370
		::TMPro::Extents meshExtents; // 0x374
		::System::Boolean tagNoParsing; // 0x384
		::System::Boolean isNonBreakingSpace; // 0x385
	};
}
