#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TextElementType.h"

namespace TMPro { class TMP_Asset; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AF069B0)
#define TMPRO_TMP_TEXTELEMENT_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1AF06A20)
#define TMPRO_TMP_TEXTELEMENT_GET_GLYPH_OFFSET UNITYSDK_OFFSET(0x1AF06A00)
#define TMPRO_TMP_TEXTELEMENT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1AF06A40)
#define TMPRO_TMP_TEXTELEMENT_GET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x1AF069E0)
#define TMPRO_TMP_TEXTELEMENT_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0x1AF069C0)
#define TMPRO_TMP_TEXTELEMENT_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0x1AF06A30)
#define TMPRO_TMP_TEXTELEMENT_SET_GLYPH_OFFSET UNITYSDK_OFFSET(0x1AF06A10)
#define TMPRO_TMP_TEXTELEMENT_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1AF06A50)
#define TMPRO_TMP_TEXTELEMENT_SET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0x1AF069F0)
#define TMPRO_TMP_TEXTELEMENT_SET_UNICODE_OFFSET UNITYSDK_OFFSET(0x1AF069D0)
#define TMPRO_TMP_TEXTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF06A60)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextElement_TypeDefinitionIndex = 37595;

	class TMP_TextElement : public ::System::Object
	{
	public:
		::TMPro::TextElementType m_ElementType; // 0x10
		::System::UInt32 m_Unicode; // 0x14
		::TMPro::TMP_Asset* m_TextAsset; // 0x18
		::UnityEngine::TextCore::Glyph* m_Glyph; // 0x20
		::System::UInt32 m_GlyphIndex; // 0x28
		::System::Single m_Scale; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT__CTOR_OFFSET))(this);
		}

		::TMPro::TextElementType get_elementType()
		{
			return ((::TMPro::TextElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_unicode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_UNICODE_OFFSET))(this);
		}

		::System::Void set_unicode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_UNICODE_OFFSET))(this, value);
		}

		::TMPro::TMP_Asset* get_textAsset()
		{
			return ((::TMPro::TMP_Asset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_TEXTASSET_OFFSET))(this);
		}

		::System::Void set_textAsset(::TMPro::TMP_Asset* value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Asset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_TEXTASSET_OFFSET))(this, value);
		}

		::UnityEngine::TextCore::Glyph* get_glyph()
		{
			return ((::UnityEngine::TextCore::Glyph*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_GLYPH_OFFSET))(this);
		}

		::System::Void set_glyph(::UnityEngine::TextCore::Glyph* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_GLYPH_OFFSET))(this, value);
		}

		::System::UInt32 get_glyphIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_GLYPHINDEX_OFFSET))(this);
		}

		::System::Void set_glyphIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_GLYPHINDEX_OFFSET))(this, value);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_SCALE_OFFSET))(this, value);
		}
	};
}
