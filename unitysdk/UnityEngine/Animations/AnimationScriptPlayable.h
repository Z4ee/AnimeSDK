#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x387C440)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2BC6740)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2648D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x387CD30)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationScriptPlayable_TypeDefinitionIndex = 5179;

	struct alignas(8) AnimationScriptPlayable
	{
		static ::UnityEngine::Animations::AnimationScriptPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationScriptPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationScriptPlayable_TypeDefinitionIndex)->GetStaticField(0xAD90);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationScriptPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCRIPTPLAYABLE_EQUALS_OFFSET))(this, a1);
		}
	};
}
