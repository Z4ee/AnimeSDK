#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define TMPRO_TMP_TEXTELEMENT_LEGACY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39EE50)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextElement_Legacy_TypeDefinitionIndex = 40219;

	class TMP_TextElement_Legacy : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Single x; // 0x14
		::System::Single y; // 0x18
		::System::Single width; // 0x1C
		::System::Single height; // 0x20
		::System::Single xOffset; // 0x24
		::System::Single yOffset; // 0x28
		::System::Single xAdvance; // 0x2C
		::System::Single scale; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_LEGACY__CTOR_OFFSET))(this);
		}
	};
}
