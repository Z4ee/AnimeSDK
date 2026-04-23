#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A40D9F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40D8E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A40D750)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A40D5A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22E0130)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x7AEA80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A40D900)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40D980)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x22E0190)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40D9E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIME_OFFSET UNITYSDK_OFFSET(0x22E01C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40D9C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIME_OFFSET UNITYSDK_OFFSET(0x22E01B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A40D9A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x22E01A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x22E0050)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationClipPlayable_TypeDefinitionIndex = 5074;

	struct alignas(8) AnimationClipPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE__CTOR_OFFSET))(this, handle);
		}

		/*
		static ::UnityEngine::Animations::AnimationClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip)
		{
			return ((::UnityEngine::Animations::AnimationClipPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATE_OFFSET))(graph, clip);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLE_OFFSET))(graph, clip);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationClipPlayable playable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_IMPLICIT_OFFSET))(playable);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationClipPlayable other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_EQUALS_OFFSET))(this, other);
		}

		::System::Void SetApplyFootIK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIK_OFFSET))(this, value);
		}

		::System::Void SetRemoveStartOffset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSET_OFFSET))(this, value);
		}

		::System::Void SetOverrideLoopTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIME_OFFSET))(this, value);
		}

		::System::Void SetLoopTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIME_OFFSET))(this, value);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(graph, clip, handle);
		}
		*/

		static ::System::Void SetApplyFootIKInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIKINTERNAL_OFFSET))(handle, value);
		}

		static ::System::Void SetRemoveStartOffsetInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSETINTERNAL_OFFSET))(handle, value);
		}

		static ::System::Void SetOverrideLoopTimeInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIMEINTERNAL_OFFSET))(handle, value);
		}

		static ::System::Void SetLoopTimeInternal(::UnityEngine::Playables::PlayableHandle& handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIMEINTERNAL_OFFSET))(handle, value);
		}

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::AnimationClip* clip, ::UnityEngine::Playables::PlayableHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::AnimationClip*, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(graph, clip, handle);
		}
		*/
	};
}
