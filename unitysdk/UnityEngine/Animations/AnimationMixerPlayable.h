#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B262D20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B262C60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B262A50)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B262920)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x387C440)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2BC6740)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B262CB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B262D30)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x387C5D0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationMixerPlayable_TypeDefinitionIndex = 5171;

	struct alignas(8) AnimationMixerPlayable
	{
		static ::UnityEngine::Animations::AnimationMixerPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationMixerPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationMixerPlayable_TypeDefinitionIndex)->GetStaticField(0xAD30);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationMixerPlayable Create(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Animations::AnimationMixerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATE_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLE_OFFSET))(a1, a2, a3);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationMixerPlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationMixerPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph a1, ::System::Boolean a2, ::UnityEngine::Playables::PlayableHandle& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& a1, ::System::Boolean a2, ::UnityEngine::Playables::PlayableHandle& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/
	};
}
