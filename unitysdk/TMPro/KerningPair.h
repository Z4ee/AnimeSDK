#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/GlyphValueRecord_Legacy.h"

#define TMPRO_KERNINGPAIR_CONVERTLEGACYKERNINGDATA_OFFSET UNITYSDK_OFFSET(0x1F6A28A0)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x1F6A2800)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0x1F6A27E0)
#define TMPRO_KERNINGPAIR_GET_IGNORESPACINGADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x1F6A2840)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x1F6A2830)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0x1F6A2810)
#define TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0x1F6A27F0)
#define TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0x1F6A2820)
#define TMPRO_KERNINGPAIR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A28B0)
#define TMPRO_KERNINGPAIR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A2870)
#define TMPRO_KERNINGPAIR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F6A2880)
#define TMPRO_KERNINGPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A2850)

namespace TMPro
{
	inline static constexpr unsigned int KerningPair_TypeDefinitionIndex = 39802;

	class KerningPair : public ::System::Object
	{
	public:
		static ::TMPro::KerningPair** StaticGet_empty()
		{
			return (::TMPro::KerningPair**)Il2CppClass::FromTypeDefinitionIndex(KerningPair_TypeDefinitionIndex)->GetStaticField(0x2C710);
		}
		::System::UInt32 m_FirstGlyph; // 0x10
		::TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments; // 0x14
		::System::UInt32 m_SecondGlyph; // 0x24
		::TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments; // 0x28
		::System::Single xOffset; // 0x38
		::System::Boolean m_IgnoreSpacingAdjustments; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 left, ::System::UInt32 right, ::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CTOR_1_OFFSET))(this, left, right, offset);
		}

		::System::Void _ctor_2(::System::UInt32 firstGlyph, ::TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, ::System::UInt32 secondGlyph, ::TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CTOR_2_OFFSET))(this, firstGlyph, firstGlyphAdjustments, secondGlyph, secondGlyphAdjustments);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CCTOR_OFFSET))();
		}

		::System::UInt32 get_firstGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET))(this);
		}

		::System::Void set_firstGlyph(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET))(this, value);
		}

		::TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments()
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET))(this);
		}

		::System::UInt32 get_secondGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET))(this);
		}

		::System::Void set_secondGlyph(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET))(this, value);
		}

		::TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments()
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET))(this);
		}

		::System::Boolean get_ignoreSpacingAdjustments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_IGNORESPACINGADJUSTMENTS_OFFSET))(this);
		}

		::System::Void ConvertLegacyKerningData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_CONVERTLEGACYKERNINGDATA_OFFSET))(this);
		}
	};
}
