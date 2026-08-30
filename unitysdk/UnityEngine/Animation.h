#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimationCullingType.h"
#include "unitysdk/UnityEngine/AnimationPlayMode.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/PlayMode.h"
#include "unitysdk/UnityEngine/QueueMode.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationState; }

#define UNITYENGINE_ANIMATION_ADDCLIP_1_OFFSET UNITYSDK_OFFSET(0x1EE91EF0)
#define UNITYENGINE_ANIMATION_ADDCLIP_2_OFFSET UNITYSDK_OFFSET(0x1EE91ED0)
#define UNITYENGINE_ANIMATION_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x1EE91EA0)
#define UNITYENGINE_ANIMATION_BLEND_1_OFFSET UNITYSDK_OFFSET(0x1EE91DB0)
#define UNITYENGINE_ANIMATION_BLEND_2_OFFSET UNITYSDK_OFFSET(0x1EE91DD0)
#define UNITYENGINE_ANIMATION_BLEND_OFFSET UNITYSDK_OFFSET(0x1EE91DA0)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_1_OFFSET UNITYSDK_OFFSET(0x1EE91E00)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_2_OFFSET UNITYSDK_OFFSET(0x1EE91E20)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_3_OFFSET UNITYSDK_OFFSET(0x1EE91E40)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET UNITYSDK_OFFSET(0x1EE91DF0)
#define UNITYENGINE_ANIMATION_CROSSFADE_1_OFFSET UNITYSDK_OFFSET(0x1EE91D70)
#define UNITYENGINE_ANIMATION_CROSSFADE_2_OFFSET UNITYSDK_OFFSET(0x1EE91D80)
#define UNITYENGINE_ANIMATION_CROSSFADE_OFFSET UNITYSDK_OFFSET(0x1EE91D60)
#define UNITYENGINE_ANIMATION_GETCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1EE91F30)
#define UNITYENGINE_ANIMATION_GETCLIP_OFFSET UNITYSDK_OFFSET(0x1EE92000)
#define UNITYENGINE_ANIMATION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE91FA0)
#define UNITYENGINE_ANIMATION_GETSTATEATINDEX_OFFSET UNITYSDK_OFFSET(0x1EE91FE0)
#define UNITYENGINE_ANIMATION_GETSTATECOUNT_OFFSET UNITYSDK_OFFSET(0x1EE91FF0)
#define UNITYENGINE_ANIMATION_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1EE91D00)
#define UNITYENGINE_ANIMATION_GET_ANIMATEONLYIFVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EE92060)
#define UNITYENGINE_ANIMATION_GET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0x1EE92040)
#define UNITYENGINE_ANIMATION_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1EE91BD0)
#define UNITYENGINE_ANIMATION_GET_CULLINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EE92080)
#define UNITYENGINE_ANIMATION_GET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1EE92120)
#define UNITYENGINE_ANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1EE91CD0)
#define UNITYENGINE_ANIMATION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EE91CF0)
#define UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EE920A0)
#define UNITYENGINE_ANIMATION_GET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0x1EE91BF0)
#define UNITYENGINE_ANIMATION_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1EE91C10)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_RELEASEANIMATIONSTATES_OFFSET UNITYSDK_OFFSET(0x1EE91F70)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_REWIND_OFFSET UNITYSDK_OFFSET(0x1EE91CA0)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1EE91CC0)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_STOP_OFFSET UNITYSDK_OFFSET(0x1EE91C40)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_SYNCLAYER_OFFSET UNITYSDK_OFFSET(0x1EE91F90)
#define UNITYENGINE_ANIMATION_INTERNAL_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EE920F0)
#define UNITYENGINE_ANIMATION_INTERNAL_REWINDBYNAME_OFFSET UNITYSDK_OFFSET(0x1EE91C80)
#define UNITYENGINE_ANIMATION_INTERNAL_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EE92110)
#define UNITYENGINE_ANIMATION_INTERNAL_STOPBYNAME_OFFSET UNITYSDK_OFFSET(0x1EE91C60)
#define UNITYENGINE_ANIMATION_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1EE91CE0)
#define UNITYENGINE_ANIMATION_PLAYDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x1EE91D30)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_1_OFFSET UNITYSDK_OFFSET(0x1EE91E80)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_2_OFFSET UNITYSDK_OFFSET(0x1EE91E90)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET UNITYSDK_OFFSET(0x1EE91E70)
#define UNITYENGINE_ANIMATION_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1EE91D20)
#define UNITYENGINE_ANIMATION_PLAY_2_OFFSET UNITYSDK_OFFSET(0x1EE91D40)
#define UNITYENGINE_ANIMATION_PLAY_3_OFFSET UNITYSDK_OFFSET(0x1EE91D50)
#define UNITYENGINE_ANIMATION_PLAY_4_OFFSET UNITYSDK_OFFSET(0x1EE91F40)
#define UNITYENGINE_ANIMATION_PLAY_5_OFFSET UNITYSDK_OFFSET(0x1EE91F50)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x1EE91D10)
#define UNITYENGINE_ANIMATION_RELEASEANIMATIONSTATES_OFFSET UNITYSDK_OFFSET(0x1EE91F60)
#define UNITYENGINE_ANIMATION_REMOVECLIP2_OFFSET UNITYSDK_OFFSET(0x1EE91F20)
#define UNITYENGINE_ANIMATION_REMOVECLIP_1_OFFSET UNITYSDK_OFFSET(0x1EE91F10)
#define UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET UNITYSDK_OFFSET(0x1EE91F00)
#define UNITYENGINE_ANIMATION_REWIND_1_OFFSET UNITYSDK_OFFSET(0x1EE91C90)
#define UNITYENGINE_ANIMATION_REWIND_OFFSET UNITYSDK_OFFSET(0x1EE91C70)
#define UNITYENGINE_ANIMATION_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1EE91CB0)
#define UNITYENGINE_ANIMATION_SET_ANIMATEONLYIFVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EE92070)
#define UNITYENGINE_ANIMATION_SET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0x1EE92050)
#define UNITYENGINE_ANIMATION_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1EE91BE0)
#define UNITYENGINE_ANIMATION_SET_CULLINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EE92090)
#define UNITYENGINE_ANIMATION_SET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1EE92130)
#define UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EE92100)
#define UNITYENGINE_ANIMATION_SET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0x1EE91C00)
#define UNITYENGINE_ANIMATION_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x1EE91C20)
#define UNITYENGINE_ANIMATION_STOP_1_OFFSET UNITYSDK_OFFSET(0x1EE91C50)
#define UNITYENGINE_ANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0x1EE91C30)
#define UNITYENGINE_ANIMATION_SYNCLAYER_OFFSET UNITYSDK_OFFSET(0x1EE91F80)
#define UNITYENGINE_ANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE92140)

namespace UnityEngine
{
	inline static constexpr unsigned int Animation_TypeDefinitionIndex = 5733;

	class Animation : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_clip(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Boolean get_playAutomatically()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_PLAYAUTOMATICALLY_OFFSET))(this);
		}

		::System::Void set_playAutomatically(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_PLAYAUTOMATICALLY_OFFSET))(this, a1);
		}

		::UnityEngine::WrapMode get_wrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_WRAPMODE_OFFSET))(this);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_WRAPMODE_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_STOP_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_Stop(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_STOP_OFFSET))(a1);
		}

		::System::Void Stop_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_STOP_1_OFFSET))(this, a1);
		}

		::System::Void Internal_StopByName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_STOPBYNAME_OFFSET))(this, a1);
		}

		::System::Void Rewind(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REWIND_OFFSET))(this, a1);
		}

		::System::Void Internal_RewindByName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_REWINDBYNAME_OFFSET))(this, a1);
		}

		::System::Void Rewind_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REWIND_1_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_Rewind(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_REWIND_OFFSET))(a1);
		}

		::System::Void Sample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SAMPLE_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_Sample(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_SAMPLE_OFFSET))(a1);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsPlaying(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ISPLAYING_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationState* get_Item(::System::String* a1)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Boolean Play()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(this);
		}

		::System::Boolean Play_1(::UnityEngine::PlayMode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_1_OFFSET))(this, a1);
		}

		::System::Boolean Play_2(::System::String* a1, ::UnityEngine::PlayMode a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean Play_3(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_3_OFFSET))(this, a1);
		}

		::System::Void CrossFade(::System::String* a1, ::System::Single a2, ::UnityEngine::PlayMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CrossFade_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_1_OFFSET))(this, a1, a2);
		}

		::System::Void CrossFade_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_2_OFFSET))(this, a1);
		}

		::System::Void Blend(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Blend_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_1_OFFSET))(this, a1, a2);
		}

		::System::Void Blend_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_2_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationState* CrossFadeQueued(::System::String* a1, ::System::Single a2, ::UnityEngine::QueueMode a3, ::UnityEngine::PlayMode a4)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::QueueMode, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::AnimationState* CrossFadeQueued_1(::System::String* a1, ::System::Single a2, ::UnityEngine::QueueMode a3)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::QueueMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationState* CrossFadeQueued_2(::System::String* a1, ::System::Single a2)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationState* CrossFadeQueued_3(::System::String* a1)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_3_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationState* PlayQueued(::System::String* a1, ::UnityEngine::QueueMode a2, ::UnityEngine::PlayMode a3)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::UnityEngine::QueueMode, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationState* PlayQueued_1(::System::String* a1, ::UnityEngine::QueueMode a2)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::UnityEngine::QueueMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationState* PlayQueued_2(::System::String* a1)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_2_OFFSET))(this, a1);
		}

		::System::Void AddClip(::UnityEngine::AnimationClip* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_OFFSET))(this, a1, a2);
		}

		::System::Void AddClip_1(::UnityEngine::AnimationClip* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AddClip_2(::UnityEngine::AnimationClip* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveClip(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET))(this, a1);
		}

		::System::Void RemoveClip_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP_1_OFFSET))(this, a1);
		}

		::System::Int32 GetClipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETCLIPCOUNT_OFFSET))(this);
		}

		::System::Void RemoveClip2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP2_OFFSET))(this, a1);
		}

		::System::Boolean PlayDefaultAnimation(::UnityEngine::PlayMode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYDEFAULTANIMATION_OFFSET))(this, a1);
		}

		::System::Boolean Play_4(::UnityEngine::AnimationPlayMode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationPlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_4_OFFSET))(this, a1);
		}

		::System::Boolean Play_5(::System::String* a1, ::UnityEngine::AnimationPlayMode a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationPlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_5_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseAnimationStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_RELEASEANIMATIONSTATES_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_ReleaseAnimationStates(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_RELEASEANIMATIONSTATES_OFFSET))(a1);
		}

		::System::Void SyncLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SYNCLAYER_OFFSET))(this, a1);
		}

		static ::System::Void INTERNAL_CALL_SyncLayer(::UnityEngine::Animation* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_SYNCLAYER_OFFSET))(a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETENUMERATOR_OFFSET))(this);
		}

		::UnityEngine::AnimationState* GetState(::System::String* a1)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationState* GetStateAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATEATINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetStateCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATECOUNT_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* GetClip(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETCLIP_OFFSET))(this, a1);
		}

		::System::Boolean get_animatePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ANIMATEPHYSICS_OFFSET))(this);
		}

		::System::Void set_animatePhysics(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ANIMATEPHYSICS_OFFSET))(this, a1);
		}

		::System::Boolean get_animateOnlyIfVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ANIMATEONLYIFVISIBLE_OFFSET))(this);
		}

		::System::Void set_animateOnlyIfVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ANIMATEONLYIFVISIBLE_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCullingType get_cullingType()
		{
			return ((::UnityEngine::AnimationCullingType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_CULLINGTYPE_OFFSET))(this);
		}

		::System::Void set_cullingType(::UnityEngine::AnimationCullingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCullingType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_CULLINGTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_localBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_OFFSET))(this);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_OFFSET))(this, a1);
		}

		::System::Void INTERNAL_get_localBounds(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_GET_LOCALBOUNDS_OFFSET))(this, a1);
		}

		::System::Void INTERNAL_set_localBounds(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_SET_LOCALBOUNDS_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enableFeatureAnimationLightweightDeactivate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET))();
		}

		static ::System::Void set_enableFeatureAnimationLightweightDeactivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET))(a1);
		}
	};
}
