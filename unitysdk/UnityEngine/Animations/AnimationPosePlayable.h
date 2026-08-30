#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C8B0B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x14A80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE95020)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3C8AFA0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPosePlayable_TypeDefinitionIndex = 5748;

	struct alignas(8) AnimationPosePlayable
	{
		static ::UnityEngine::Animations::AnimationPosePlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationPosePlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationPosePlayable_TypeDefinitionIndex)->GetStaticField(0x91B0);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationPosePlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationPosePlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET))(this, a1);
		}
	};
}
