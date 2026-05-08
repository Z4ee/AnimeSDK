#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Comic { class IComicAnim; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_SUBSPRITEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3894B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupPlayableAsset_SubSpriteItem_TypeDefinitionIndex = 30799;

	class ImgSplitScreenGroupPlayableAsset_SubSpriteItem : public ::System::Object
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x10
		::MoleMole::Comic::IComicAnim* animInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMGSPLITSCREENGROUPPLAYABLEASSET_SUBSPRITEITEM__CTOR_OFFSET))(this);
		}
	};
}
