#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Glyph.h"
#include "unitysdk/UnityEngine/TextCore/GlyphMetrics.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"

namespace UnityEngine { class Sprite; }

#define TMPRO_TMP_SPRITEGLYPH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A37DA00)
#define TMPRO_TMP_SPRITEGLYPH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A37DA50)
#define TMPRO_TMP_SPRITEGLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A37D6D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteGlyph_TypeDefinitionIndex = 40193;

	class TMP_SpriteGlyph : public ::UnityEngine::TextCore::Glyph
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, ::System::Single scale, ::System::Int32 atlasIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH__CTOR_1_OFFSET))(this, index, metrics, glyphRect, scale, atlasIndex);
		}

		::System::Void _ctor_2(::System::UInt32 index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, ::System::Single scale, ::System::Int32 atlasIndex, ::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, ::System::Single, ::System::Int32, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH__CTOR_2_OFFSET))(this, index, metrics, glyphRect, scale, atlasIndex, sprite);
		}
	};
}
