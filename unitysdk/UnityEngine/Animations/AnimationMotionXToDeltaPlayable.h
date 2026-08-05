#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC4D0C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC4CF00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1FC4CB30)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC4C940)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xAD4330)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x31EA80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FC4CF80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC4D0B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTION_OFFSET UNITYSDK_OFFSET(0xAD43E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC4D0D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD41B0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationMotionXToDeltaPlayable_TypeDefinitionIndex = 6679;

	struct alignas(8) AnimationMotionXToDeltaPlayable
	{
		static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationMotionXToDeltaPlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationMotionXToDeltaPlayable_TypeDefinitionIndex)->GetStaticField(0x3160);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable Create(::UnityEngine::Playables::PlayableGraph graph)
		{
			return ((::UnityEngine::Animations::AnimationMotionXToDeltaPlayable(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATE_OFFSET))(graph);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLE_OFFSET))(graph);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		::System::Void SetAbsoluteMotion(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTION_OFFSET))(this, value);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, handle);
		}
		*/

		static ::System::Void SetAbsoluteMotionInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTIONINTERNAL_OFFSET))(handle, value);
		}

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, handle);
		}
		*/
	};
}
