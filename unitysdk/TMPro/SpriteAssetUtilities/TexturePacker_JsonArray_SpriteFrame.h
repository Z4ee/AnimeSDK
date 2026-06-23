#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITEFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA787D0)

namespace TMPro::SpriteAssetUtilities
{
	inline static constexpr unsigned int TexturePacker_JsonArray_SpriteFrame_TypeDefinitionIndex = 39257;

	struct alignas(4) TexturePacker_JsonArray_SpriteFrame
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single w; // 0x18
		::System::Single h; // 0x1C

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITEFRAME_TOSTRING_OFFSET))(this);
		}
	};
}
