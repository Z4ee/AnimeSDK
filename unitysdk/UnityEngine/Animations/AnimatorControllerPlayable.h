#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x210D580)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x148EF80)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETHANDLE_OFFSET UNITYSDK_OFFSET(0x210E070)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189D6C60)
#define UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x210E000)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimatorControllerPlayable_TypeDefinitionIndex = 5079;

	struct alignas(8) AnimatorControllerPlayable
	{
		static ::UnityEngine::Animations::AnimatorControllerPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimatorControllerPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimatorControllerPlayable_TypeDefinitionIndex)->GetStaticField(0x64F0);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Void SetHandle(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_SETHANDLE_OFFSET))(this, handle);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimatorControllerPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORCONTROLLERPLAYABLE_EQUALS_OFFSET))(this, other);
		}
	};
}
