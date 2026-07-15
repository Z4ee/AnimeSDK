#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteFrame.h"
#include "unitysdk/TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteSize.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

namespace TMPro::SpriteAssetUtilities
{
	inline static constexpr unsigned int TexturePacker_JsonArray_Frame_TypeDefinitionIndex = 41898;

	struct alignas(8) TexturePacker_JsonArray_Frame
	{
		::System::String* filename; // 0x10
		::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame frame; // 0x18
		::System::Boolean rotated; // 0x28
		::System::Boolean trimmed; // 0x29
		::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame spriteSourceSize; // 0x2C
		::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize sourceSize; // 0x3C
		::UnityEngine::Vector2 pivot; // 0x44
	};
}
