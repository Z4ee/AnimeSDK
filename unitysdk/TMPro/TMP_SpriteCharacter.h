#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement.h"

namespace System { class String; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_SpriteGlyph; }

#define TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x18B60EF0)
#define TMPRO_TMP_SPRITECHARACTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18B60EE0)
#define TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18B60C90)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B60F00)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18B60F30)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18B60F70)
#define TMPRO_TMP_SPRITECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B60C80)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteCharacter_TypeDefinitionIndex = 43445;

	class TMP_SpriteCharacter : public ::TMPro::TMP_TextElement
	{
	public:
		::System::String* m_Name; // 0x30
		::System::Int32 m_HashCode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::TMPro::TMP_SpriteGlyph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_SpriteGlyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::TMPro::TMP_SpriteAsset* a2, ::TMPro::TMP_SpriteGlyph* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::TMPro::TMP_SpriteGlyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITECHARACTER_GET_HASHCODE_OFFSET))(this);
		}
	};
}
