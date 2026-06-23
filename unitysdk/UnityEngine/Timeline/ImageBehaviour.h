#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_TIMELINE_IMAGEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A9220)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ImageBehaviour_TypeDefinitionIndex = 32384;

	class ImageBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Sprite* Image; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMAGEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
