#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/BlendTarget.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0x1C53C680)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2E1000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETTARGET_OFFSET UNITYSDK_OFFSET(0x9E2210)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1C53C860)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALGETTARGET_OFFSET UNITYSDK_OFFSET(0x1C53CDD0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x1C53CE00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET UNITYSDK_OFFSET(0x1C53CDE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1C53CC40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C53CC30)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_SETBLENDTARGET_OFFSET UNITYSDK_OFFSET(0x9E2230)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_SETTARGET_OFFSET UNITYSDK_OFFSET(0x9E2220)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x9E2090)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableOutput_TypeDefinitionIndex = 6598;

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

		::System::Void SetBlendTarget(::UnityEngine::Animations::BlendTarget value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::BlendTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_SETBLENDTARGET_OFFSET))(this, value);
		}

		static ::UnityEngine::Animator* InternalGetTarget(::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::UnityEngine::Animator*(*)(::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALGETTARGET_OFFSET))(handle);
		}

		static ::System::Void InternalSetTarget(::UnityEngine::Playables::PlayableOutputHandle& handle, ::UnityEngine::Animator* target)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET))(handle, target);
		}

		static ::System::Void InternalSetBlendTarget(::UnityEngine::Playables::PlayableOutputHandle& handle, ::UnityEngine::Animations::BlendTarget value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&, ::UnityEngine::Animations::BlendTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETBLENDTARGET_OFFSET))(handle, value);
		}
	};
}
