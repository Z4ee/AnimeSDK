#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATORCLIPINFO_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x3C8B770)
#define UNITYENGINE_ANIMATORCLIPINFO_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x784700)
#define UNITYENGINE_ANIMATORCLIPINFO_INSTANCEIDTOANIMATIONCLIPPPTR_OFFSET UNITYSDK_OFFSET(0x1EE9B7D0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorClipInfo_TypeDefinitionIndex = 5697;

	struct alignas(4) AnimatorClipInfo
	{
		::System::Int32 m_ClipInstanceID; // 0x10
		::System::Single m_Weight; // 0x14

		::UnityEngine::AnimationClip* get_clip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCLIPINFO_GET_CLIP_OFFSET))(this);
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCLIPINFO_GET_WEIGHT_OFFSET))(this);
		}

		static ::UnityEngine::AnimationClip* InstanceIDToAnimationClipPPtr(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCLIPINFO_INSTANCEIDTOANIMATIONCLIPPPTR_OFFSET))(a1);
		}
	};
}
