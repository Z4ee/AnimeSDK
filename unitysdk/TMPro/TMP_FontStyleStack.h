#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/FontStyles.h"

#define TMPRO_TMP_FONTSTYLESTACK_ADD_OFFSET UNITYSDK_OFFSET(0x9BC310)
#define TMPRO_TMP_FONTSTYLESTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x9BC300)
#define TMPRO_TMP_FONTSTYLESTACK_REMOVE_OFFSET UNITYSDK_OFFSET(0x9BC320)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontStyleStack_TypeDefinitionIndex = 37599;

	struct alignas(1) TMP_FontStyleStack
	{
		::System::Byte bold; // 0x10
		::System::Byte italic; // 0x11
		::System::Byte underline; // 0x12
		::System::Byte strikethrough; // 0x13
		::System::Byte highlight; // 0x14
		::System::Byte superscript; // 0x15
		::System::Byte subscript; // 0x16
		::System::Byte uppercase; // 0x17
		::System::Byte lowercase; // 0x18
		::System::Byte smallcaps; // 0x19

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTSTYLESTACK_CLEAR_OFFSET))(this);
		}

		::System::Byte Add(::TMPro::FontStyles style)
		{
			return ((::System::Byte(*)(::PVOID, ::TMPro::FontStyles))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTSTYLESTACK_ADD_OFFSET))(this, style);
		}

		::System::Byte Remove(::TMPro::FontStyles style)
		{
			return ((::System::Byte(*)(::PVOID, ::TMPro::FontStyles))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTSTYLESTACK_REMOVE_OFFSET))(this, style);
		}
	};
}
