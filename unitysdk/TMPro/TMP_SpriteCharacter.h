#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement.h"

namespace System { class String; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_SpriteGlyph; }

#define TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x1E747610)
#define TMPRO_TMP_SPRITECHARACTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E747570)
#define TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E747580)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E747630)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E747660)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E7476A0)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E747620)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteCharacter_TypeDefinitionIndex = 39195;

	class TMP_SpriteCharacter : public ::TMPro::TMP_TextElement
	{
	public:
		::System::String* m_Name; // 0x30
		::System::Int32 m_HashCode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 unicode, ::TMPro::TMP_SpriteGlyph* glyph)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_SpriteGlyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_1_OFFSET))(this, unicode, glyph);
		}

		::System::Void _ctor_2(::System::UInt32 unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, ::TMPro::TMP_SpriteGlyph* glyph)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::TMPro::TMP_SpriteGlyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_2_OFFSET))(this, unicode, spriteAsset, glyph);
		}

		::System::Void _ctor_3(::System::UInt32 unicode, ::System::UInt32 glyphIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_3_OFFSET))(this, unicode, glyphIndex);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET))(this);
		}
	};
}
