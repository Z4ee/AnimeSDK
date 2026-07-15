#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteSize.h"

namespace System { class String; }

namespace TMPro::SpriteAssetUtilities
{
	inline static constexpr unsigned int TexturePacker_JsonArray_Meta_TypeDefinitionIndex = 41899;

	struct alignas(8) TexturePacker_JsonArray_Meta
	{
		::System::String* app; // 0x10
		::System::String* version; // 0x18
		::System::String* image; // 0x20
		::System::String* format; // 0x28
		::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize size; // 0x30
		::System::Single scale; // 0x38
		::System::String* smartupdate; // 0x40
	};
}
