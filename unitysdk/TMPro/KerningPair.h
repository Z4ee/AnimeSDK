#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/GlyphValueRecord_Legacy.h"

#define TMPRO_KERNINGPAIR_CONVERTLEGACYKERNINGDATA_OFFSET UNITYSDK_OFFSET(0x17191AC0)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x17191A20)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0x17191A00)
#define TMPRO_KERNINGPAIR_GET_IGNORESPACINGADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x17191A60)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0x17191A50)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0x17191A30)
#define TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0x17191A10)
#define TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0x17191A40)
#define TMPRO_KERNINGPAIR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17191AD0)
#define TMPRO_KERNINGPAIR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17191A90)
#define TMPRO_KERNINGPAIR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17191AA0)
#define TMPRO_KERNINGPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x17191A70)

namespace TMPro
{
	inline static constexpr unsigned int KerningPair_TypeDefinitionIndex = 41775;

	class KerningPair : public ::System::Object
	{
	public:
		static ::TMPro::KerningPair** StaticGet_empty()
		{
			return (::TMPro::KerningPair**)Il2CppClass::FromTypeDefinitionIndex(KerningPair_TypeDefinitionIndex)->GetStaticField(0x56440);
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

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::TMPro::GlyphValueRecord_Legacy a2, ::System::UInt32 a3, ::TMPro::GlyphValueRecord_Legacy a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR__CCTOR_OFFSET))();
		}

		::System::UInt32 get_firstGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET))(this);
		}

		::System::Void set_firstGlyph(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET))(this, a1);
		}

		::TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments()
		{
			return ((::TMPro::GlyphValueRecord_Legacy(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET))(this);
		}

		::System::UInt32 get_secondGlyph()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET))(this);
		}

		::System::Void set_secondGlyph(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET))(this, a1);
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
