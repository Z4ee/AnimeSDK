#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/FontStyles.h"
#include "unitysdk/TMPro/HighlightState.h"
#include "unitysdk/TMPro/TMP_TextElementType.h"
#include "unitysdk/TMPro/TMP_Vertex.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_TextElement; }
namespace UnityEngine { class Material; }

namespace TMPro
{
	inline static constexpr unsigned int TMP_CharacterInfo_TypeDefinitionIndex = 41742;

	struct alignas(8) TMP_CharacterInfo
	{
		::System::Char character; // 0x10
		::System::Int32 index; // 0x14
		::System::Int32 stringLength; // 0x18
		::TMPro::TMP_TextElementType elementType; // 0x1C
		::TMPro::TMP_TextElement* textElement; // 0x20
		::TMPro::TMP_FontAsset* fontAsset; // 0x28
		::TMPro::TMP_SpriteAsset* spriteAsset; // 0x30
		::System::Int32 spriteIndex; // 0x38
		::UnityEngine::Material* material; // 0x40
		::System::Int32 materialReferenceIndex; // 0x48
		::System::Boolean isUsingAlternateTypeface; // 0x4C
		::System::Single pointSize; // 0x50
		::System::Int32 lineNumber; // 0x54
		::System::Int32 pageNumber; // 0x58
		::System::Int32 vertexIndex; // 0x5C
		::TMPro::TMP_Vertex vertex_BL; // 0x60
		::TMPro::TMP_Vertex vertex_TL; // 0x88
		::TMPro::TMP_Vertex vertex_TR; // 0xB0
		::TMPro::TMP_Vertex vertex_BR; // 0xD8
		::UnityEngine::Vector3 topLeft; // 0x100
		::UnityEngine::Vector3 bottomLeft; // 0x10C
		::UnityEngine::Vector3 topRight; // 0x118
		::UnityEngine::Vector3 bottomRight; // 0x124
		::System::Single origin; // 0x130
		::System::Single xAdvance; // 0x134
		::System::Single ascender; // 0x138
		::System::Single baseLine; // 0x13C
		::System::Single descender; // 0x140
		::System::Single adjustedAscender; // 0x144
		::System::Single adjustedDescender; // 0x148
		::System::Single aspectRatio; // 0x14C
		::System::Single scale; // 0x150
		::UnityEngine::Color32 color; // 0x154
		::UnityEngine::Color32 underlineColor; // 0x158
		::System::Int32 underlineVertexIndex; // 0x15C
		::UnityEngine::Color32 strikethroughColor; // 0x160
		::System::Int32 strikethroughVertexIndex; // 0x164
		::UnityEngine::Color32 highlightColor; // 0x168
		::TMPro::HighlightState highlightState; // 0x16C
		::TMPro::FontStyles style; // 0x180
		::System::Boolean isVisible; // 0x184
	};
}
