#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19CC30)

namespace TMPro::SpriteAssetUtilities
{
	inline static constexpr unsigned int TexturePacker_JsonArray_TypeDefinitionIndex = 41080;

	class TexturePacker_JsonArray : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY__CTOR_OFFSET))(this);
		}
	};
}
