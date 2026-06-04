#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement_Legacy.h"

#define TMPRO_TMP_GLYPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1B1B54D0)
#define TMPRO_TMP_GLYPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B5540)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Glyph_TypeDefinitionIndex = 40955;

	class TMP_Glyph : public ::TMPro::TMP_TextElement_Legacy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPH__CTOR_OFFSET))(this);
		}

		static ::TMPro::TMP_Glyph* Clone(::TMPro::TMP_Glyph* a1)
		{
			return ((::TMPro::TMP_Glyph*(*)(::TMPro::TMP_Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPH_CLONE_OFFSET))(a1);
		}
	};
}
