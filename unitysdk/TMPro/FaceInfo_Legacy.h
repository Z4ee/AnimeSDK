#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TMPRO_FACEINFO_LEGACY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D4CA0)

namespace TMPro
{
	inline static constexpr unsigned int FaceInfo_Legacy_TypeDefinitionIndex = 39796;

	class FaceInfo_Legacy : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Single PointSize; // 0x18
		::System::Single Scale; // 0x1C
		::System::Int32 CharacterCount; // 0x20
		::System::Single LineHeight; // 0x24
		::System::Single Baseline; // 0x28
		::System::Single Ascender; // 0x2C
		::System::Single CapHeight; // 0x30
		::System::Single Descender; // 0x34
		::System::Single CenterLine; // 0x38
		::System::Single SuperscriptOffset; // 0x3C
		::System::Single SubscriptOffset; // 0x40
		::System::Single SubSize; // 0x44
		::System::Single Underline; // 0x48
		::System::Single UnderlineThickness; // 0x4C
		::System::Single strikethrough; // 0x50
		::System::Single strikethroughThickness; // 0x54
		::System::Single TabWidth; // 0x58
		::System::Single Padding; // 0x5C
		::System::Single AtlasWidth; // 0x60
		::System::Single AtlasHeight; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FACEINFO_LEGACY__CTOR_OFFSET))(this);
		}
	};
}
