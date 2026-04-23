#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A40E630)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40E570)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A40E360)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A40E230)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E0130)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A40E5C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A40E640)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x22E02D0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationMixerPlayable_TypeDefinitionIndex = 5077;

	struct alignas(8) AnimationMixerPlayable
	{
		static ::UnityEngine::Animations::AnimationMixerPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationMixerPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationMixerPlayable_TypeDefinitionIndex)->GetStaticField(0x6260);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount, ::System::Boolean normalizeWeights)
		{
			return ((::UnityEngine::Animations::AnimationMixerPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATE_OFFSET))(graph, inputCount, normalizeWeights);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 inputCount, ::System::Boolean normalizeWeights)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLE_OFFSET))(graph, inputCount, normalizeWeights);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationMixerPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationMixerPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::System::Boolean normalizeWeights, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, normalizeWeights, handle);
		}
		*/

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::System::Boolean normalizeWeights, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, normalizeWeights, handle);
		}
		*/
	};
}
