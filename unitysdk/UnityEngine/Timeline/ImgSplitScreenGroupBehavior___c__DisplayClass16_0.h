#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class ComicGroupTrack; }
namespace UnityEngine::Timeline { class ImgSplitScreenGroupBehavior; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImgSplitScreenGroupBehavior___c__DisplayClass16_0_TypeDefinitionIndex = 32344;

	struct alignas(8) ImgSplitScreenGroupBehavior___c__DisplayClass16_0
	{
		::UnityEngine::Timeline::ImgSplitScreenGroupBehavior* __4__this; // 0x10
		::UnityEngine::Timeline::ComicGroupTrack* groupTrack; // 0x18
		::UnityEngine::Transform* tempNode; // 0x20
		::UnityEngine::Transform* image01Trans; // 0x28
	};
}
