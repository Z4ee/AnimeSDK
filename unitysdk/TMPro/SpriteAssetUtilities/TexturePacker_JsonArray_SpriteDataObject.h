#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_Frame.h"
#include "unitysdk/TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_Meta.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITEDATAOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC22A80)

namespace TMPro::SpriteAssetUtilities
{
	inline static constexpr unsigned int TexturePacker_JsonArray_SpriteDataObject_TypeDefinitionIndex = 43511;

	class TexturePacker_JsonArray_SpriteDataObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* frames; // 0x10
		::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta meta; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITEDATAOBJECT__CTOR_OFFSET))(this);
		}
	};
}
