#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement.h"

namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_CHARACTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E879800)
#define TMPRO_TMP_CHARACTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E879840)
#define TMPRO_TMP_CHARACTER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E879880)
#define TMPRO_TMP_CHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8797F0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Character_TypeDefinitionIndex = 39101;

	class TMP_Character : public ::TMPro::TMP_TextElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 unicode, ::UnityEngine::TextCore::Glyph* glyph)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_1_OFFSET))(this, unicode, glyph);
		}

		::System::Void _ctor_2(::System::UInt32 unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_FontAsset*, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_2_OFFSET))(this, unicode, fontAsset, glyph);
		}

		::System::Void _ctor_3(::System::UInt32 unicode, ::System::UInt32 glyphIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_3_OFFSET))(this, unicode, glyphIndex);
		}
	};
}
