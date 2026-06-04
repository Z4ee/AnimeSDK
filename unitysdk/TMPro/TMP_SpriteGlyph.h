#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Glyph.h"
#include "unitysdk/UnityEngine/TextCore/GlyphMetrics.h"
#include "unitysdk/UnityEngine/TextCore/GlyphRect.h"

namespace UnityEngine { class Sprite; }

#define TMPRO_TMP_SPRITEGLYPH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1D7030)
#define TMPRO_TMP_SPRITEGLYPH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B1D7080)
#define TMPRO_TMP_SPRITEGLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D6D00)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteGlyph_TypeDefinitionIndex = 41020;

	class TMP_SpriteGlyph : public ::UnityEngine::TextCore::Glyph
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::UnityEngine::TextCore::GlyphMetrics a2, ::UnityEngine::TextCore::GlyphRect a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::UnityEngine::TextCore::GlyphMetrics a2, ::UnityEngine::TextCore::GlyphRect a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Sprite* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, ::System::Single, ::System::Int32, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
