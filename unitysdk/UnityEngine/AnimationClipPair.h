#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATIONCLIPPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C507CF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationClipPair_TypeDefinitionIndex = 6549;

	class AnimationClipPair : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* originalClip; // 0x10
		::UnityEngine::AnimationClip* overrideClip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIPPAIR__CTOR_OFFSET))(this);
		}
	};
}
