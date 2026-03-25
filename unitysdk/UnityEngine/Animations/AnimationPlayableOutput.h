#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0x189D5930)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x148EF80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETTARGET_OFFSET UNITYSDK_OFFSET(0x210DB60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0x189D5AB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALGETTARGET_OFFSET UNITYSDK_OFFSET(0x189D5DB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET UNITYSDK_OFFSET(0x189D5DC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x189D5CC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x189D5A80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_SETTARGET_OFFSET UNITYSDK_OFFSET(0x210DB70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x210DA80)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableOutput_TypeDefinitionIndex = 5074;

	struct alignas(8) AnimationPlayableOutput
	{
		::UnityEngine::Playables::PlayableOutputHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT__CTOR_OFFSET))(this, handle);
		}

		/*
		static ::UnityEngine::Animations::AnimationPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::System::String* name, ::UnityEngine::Animator* target)
		{
			return ((::UnityEngine::Animations::AnimationPlayableOutput(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_CREATE_OFFSET))(graph, name, target);
		}
		*/

		static ::UnityEngine::Animations::AnimationPlayableOutput get_Null()
		{
			return ((::UnityEngine::Animations::AnimationPlayableOutput(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GET_NULL_OFFSET))();
		}

		::UnityEngine::Playables::PlayableOutputHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableOutputHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::PlayableOutput op_Implicit(::UnityEngine::Animations::AnimationPlayableOutput output)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::UnityEngine::Animations::AnimationPlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET))(output);
		}
		*/

		/*
		static ::UnityEngine::Animations::AnimationPlayableOutput op_Explicit(::UnityEngine::Playables::PlayableOutput output)
		{
			return ((::UnityEngine::Animations::AnimationPlayableOutput(*)(::UnityEngine::Playables::PlayableOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET))(output);
		}
		*/

		::UnityEngine::Animator* GetTarget()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETTARGET_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_SETTARGET_OFFSET))(this, value);
		}

		static ::UnityEngine::Animator* InternalGetTarget(::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::UnityEngine::Animator*(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALGETTARGET_OFFSET))(handle);
		}

		static ::System::Void InternalSetTarget(::UnityEngine::Playables::PlayableOutputHandle& handle, ::UnityEngine::Animator* target)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET))(handle, target);
		}
	};
}
