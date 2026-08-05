#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITESIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAC3A60)

namespace TMPro::SpriteAssetUtilities
{
	inline static constexpr unsigned int TexturePacker_JsonArray_SpriteSize_TypeDefinitionIndex = 39924;

	struct alignas(4) TexturePacker_JsonArray_SpriteSize
	{
		::System::Single w; // 0x10
		::System::Single h; // 0x14

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITESIZE_TOSTRING_OFFSET))(this);
		}
	};
}
