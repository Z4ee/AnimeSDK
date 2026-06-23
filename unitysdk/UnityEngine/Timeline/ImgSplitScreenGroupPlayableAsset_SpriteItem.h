#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupPlayableAsset_SubSpriteItem; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_SPRITEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E757D10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupPlayableAsset_SpriteItem_TypeDefinitionIndex = 32349;

	class ImgSplitScreenGroupPlayableAsset_SpriteItem : public ::System::Object
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x10
		::MoleMole::ComicImgPart partType; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ImgSplitScreenGroupPlayableAsset_SubSpriteItem*>* subSpriteItems; // 0x20
		::UnityEngine::Sprite* femaleSprite; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_SPRITEITEM__CTOR_OFFSET))(this);
		}
	};
}
