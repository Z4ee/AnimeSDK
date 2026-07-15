#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_TextElement.h"

namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_CHARACTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x171960C0)
#define TMPRO_TMP_CHARACTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17196100)
#define TMPRO_TMP_CHARACTER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17196140)
#define TMPRO_TMP_CHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x171960B0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Character_TypeDefinitionIndex = 41738;

	class TMP_Character : public ::TMPro::TMP_TextElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::UnityEngine::TextCore::Glyph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::TMPro::TMP_FontAsset* a2, ::UnityEngine::TextCore::Glyph* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::TMPro::TMP_FontAsset*, ::UnityEngine::TextCore::Glyph*))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER__CTOR_3_OFFSET))(this, a1, a2);
		}
	};
}
