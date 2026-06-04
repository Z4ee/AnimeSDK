#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B262100)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B261FF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B261E60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B261CB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x387C440)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2BC6740)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B262010)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B262090)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x387C4A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2620F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIME_OFFSET UNITYSDK_OFFSET(0x387C4D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2620D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIME_OFFSET UNITYSDK_OFFSET(0x387C4C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2620B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0x387C4B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x387C370)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationClipPlayable_TypeDefinitionIndex = 5168;

	struct alignas(8) AnimationClipPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Animations::AnimationClipPlayable Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::UnityEngine::Animations::AnimationClipPlayable(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLE_OFFSET))(a1, a2);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationClipPlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationClipPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationClipPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Void SetApplyFootIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIK_OFFSET))(this, a1);
		}

		::System::Void SetRemoveStartOffset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetOverrideLoopTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIME_OFFSET))(this, a1);
		}

		::System::Void SetLoopTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIME_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::Playables::PlayableHandle& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(a1, a2, a3);
		}
		*/

		static ::System::Void SetApplyFootIKInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIKINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetRemoveStartOffsetInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSETINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetOverrideLoopTimeInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIMEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SetLoopTimeInternal(::UnityEngine::Playables::PlayableHandle& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIMEINTERNAL_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::Playables::PlayableHandle& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::AnimationClip*, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/
	};
}
