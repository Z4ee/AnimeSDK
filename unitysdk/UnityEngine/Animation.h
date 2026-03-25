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

#define UNITYENGINE_ANIMATION_ADDCLIP_1_OFFSET UNITYSDK_OFFSET(0x189D2F40)
#define UNITYENGINE_ANIMATION_ADDCLIP_2_OFFSET UNITYSDK_OFFSET(0x189D2F20)
#define UNITYENGINE_ANIMATION_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x189D2EF0)
#define UNITYENGINE_ANIMATION_BLEND_1_OFFSET UNITYSDK_OFFSET(0x189D2E00)
#define UNITYENGINE_ANIMATION_BLEND_2_OFFSET UNITYSDK_OFFSET(0x189D2E20)
#define UNITYENGINE_ANIMATION_BLEND_OFFSET UNITYSDK_OFFSET(0x189D2DF0)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_1_OFFSET UNITYSDK_OFFSET(0x189D2E50)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_2_OFFSET UNITYSDK_OFFSET(0x189D2E70)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_3_OFFSET UNITYSDK_OFFSET(0x189D2E90)
#define UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET UNITYSDK_OFFSET(0x189D2E40)
#define UNITYENGINE_ANIMATION_CROSSFADE_1_OFFSET UNITYSDK_OFFSET(0x189D2DC0)
#define UNITYENGINE_ANIMATION_CROSSFADE_2_OFFSET UNITYSDK_OFFSET(0x189D2DD0)
#define UNITYENGINE_ANIMATION_CROSSFADE_OFFSET UNITYSDK_OFFSET(0x189D2DB0)
#define UNITYENGINE_ANIMATION_GETCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x189D2F80)
#define UNITYENGINE_ANIMATION_GETCLIP_OFFSET UNITYSDK_OFFSET(0x189D3050)
#define UNITYENGINE_ANIMATION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189D2FF0)
#define UNITYENGINE_ANIMATION_GETSTATEATINDEX_OFFSET UNITYSDK_OFFSET(0x189D3030)
#define UNITYENGINE_ANIMATION_GETSTATECOUNT_OFFSET UNITYSDK_OFFSET(0x189D3040)
#define UNITYENGINE_ANIMATION_GETSTATE_OFFSET UNITYSDK_OFFSET(0x189D2D50)
#define UNITYENGINE_ANIMATION_GET_ANIMATEONLYIFVISIBLE_OFFSET UNITYSDK_OFFSET(0x189D30B0)
#define UNITYENGINE_ANIMATION_GET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0x189D3090)
#define UNITYENGINE_ANIMATION_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x189D2C20)
#define UNITYENGINE_ANIMATION_GET_CULLINGTYPE_OFFSET UNITYSDK_OFFSET(0x189D30D0)
#define UNITYENGINE_ANIMATION_GET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x189D3170)
#define UNITYENGINE_ANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x189D2D20)
#define UNITYENGINE_ANIMATION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x189D2D40)
#define UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x189D30F0)
#define UNITYENGINE_ANIMATION_GET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0x189D2C40)
#define UNITYENGINE_ANIMATION_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x189D2C60)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_RELEASEANIMATIONSTATES_OFFSET UNITYSDK_OFFSET(0x189D2FC0)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_REWIND_OFFSET UNITYSDK_OFFSET(0x189D2CF0)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_SAMPLE_OFFSET UNITYSDK_OFFSET(0x189D2D10)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_STOP_OFFSET UNITYSDK_OFFSET(0x189D2C90)
#define UNITYENGINE_ANIMATION_INTERNAL_CALL_SYNCLAYER_OFFSET UNITYSDK_OFFSET(0x189D2FE0)
#define UNITYENGINE_ANIMATION_INTERNAL_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x189D3140)
#define UNITYENGINE_ANIMATION_INTERNAL_REWINDBYNAME_OFFSET UNITYSDK_OFFSET(0x189D2CD0)
#define UNITYENGINE_ANIMATION_INTERNAL_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x189D3160)
#define UNITYENGINE_ANIMATION_INTERNAL_STOPBYNAME_OFFSET UNITYSDK_OFFSET(0x189D2CB0)
#define UNITYENGINE_ANIMATION_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x189D2D30)
#define UNITYENGINE_ANIMATION_PLAYDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x189D2D80)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_1_OFFSET UNITYSDK_OFFSET(0x189D2ED0)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_2_OFFSET UNITYSDK_OFFSET(0x189D2EE0)
#define UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET UNITYSDK_OFFSET(0x189D2EC0)
#define UNITYENGINE_ANIMATION_PLAY_1_OFFSET UNITYSDK_OFFSET(0x189D2D70)
#define UNITYENGINE_ANIMATION_PLAY_2_OFFSET UNITYSDK_OFFSET(0x189D2D90)
#define UNITYENGINE_ANIMATION_PLAY_3_OFFSET UNITYSDK_OFFSET(0x189D2DA0)
#define UNITYENGINE_ANIMATION_PLAY_4_OFFSET UNITYSDK_OFFSET(0x189D2F90)
#define UNITYENGINE_ANIMATION_PLAY_5_OFFSET UNITYSDK_OFFSET(0x189D2FA0)
#define UNITYENGINE_ANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x189D2D60)
#define UNITYENGINE_ANIMATION_RELEASEANIMATIONSTATES_OFFSET UNITYSDK_OFFSET(0x189D2FB0)
#define UNITYENGINE_ANIMATION_REMOVECLIP2_OFFSET UNITYSDK_OFFSET(0x189D2F70)
#define UNITYENGINE_ANIMATION_REMOVECLIP_1_OFFSET UNITYSDK_OFFSET(0x189D2F60)
#define UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET UNITYSDK_OFFSET(0x189D2F50)
#define UNITYENGINE_ANIMATION_REWIND_1_OFFSET UNITYSDK_OFFSET(0x189D2CE0)
#define UNITYENGINE_ANIMATION_REWIND_OFFSET UNITYSDK_OFFSET(0x189D2CC0)
#define UNITYENGINE_ANIMATION_SAMPLE_OFFSET UNITYSDK_OFFSET(0x189D2D00)
#define UNITYENGINE_ANIMATION_SET_ANIMATEONLYIFVISIBLE_OFFSET UNITYSDK_OFFSET(0x189D30C0)
#define UNITYENGINE_ANIMATION_SET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0x189D30A0)
#define UNITYENGINE_ANIMATION_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x189D2C30)
#define UNITYENGINE_ANIMATION_SET_CULLINGTYPE_OFFSET UNITYSDK_OFFSET(0x189D30E0)
#define UNITYENGINE_ANIMATION_SET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x189D3180)
#define UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x189D3150)
#define UNITYENGINE_ANIMATION_SET_PLAYAUTOMATICALLY_OFFSET UNITYSDK_OFFSET(0x189D2C50)
#define UNITYENGINE_ANIMATION_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x189D2C70)
#define UNITYENGINE_ANIMATION_STOP_1_OFFSET UNITYSDK_OFFSET(0x189D2CA0)
#define UNITYENGINE_ANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0x189D2C80)
#define UNITYENGINE_ANIMATION_SYNCLAYER_OFFSET UNITYSDK_OFFSET(0x189D2FD0)
#define UNITYENGINE_ANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x189D3190)

namespace UnityEngine
{
	inline static constexpr unsigned int Animation_TypeDefinitionIndex = 5060;

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

		::System::Void set_clip(::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_CLIP_OFFSET))(this, value);
		}

		::System::Boolean get_playAutomatically()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_PLAYAUTOMATICALLY_OFFSET))(this);
		}

		::System::Void set_playAutomatically(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_PLAYAUTOMATICALLY_OFFSET))(this, value);
		}

		::UnityEngine::WrapMode get_wrapMode()
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_WRAPMODE_OFFSET))(this);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_WRAPMODE_OFFSET))(this, value);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_STOP_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_Stop(::UnityEngine::Animation* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_STOP_OFFSET))(self);
		}

		::System::Void Stop_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_STOP_1_OFFSET))(this, name);
		}

		::System::Void Internal_StopByName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_STOPBYNAME_OFFSET))(this, name);
		}

		::System::Void Rewind(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REWIND_OFFSET))(this, name);
		}

		::System::Void Internal_RewindByName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_REWINDBYNAME_OFFSET))(this, name);
		}

		::System::Void Rewind_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REWIND_1_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_Rewind(::UnityEngine::Animation* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_REWIND_OFFSET))(self);
		}

		::System::Void Sample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SAMPLE_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_Sample(::UnityEngine::Animation* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_SAMPLE_OFFSET))(self);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsPlaying(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ISPLAYING_OFFSET))(this, name);
		}

		::UnityEngine::AnimationState* get_Item(::System::String* name)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ITEM_OFFSET))(this, name);
		}

		::System::Boolean Play()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_OFFSET))(this);
		}

		::System::Boolean Play_1(::UnityEngine::PlayMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_1_OFFSET))(this, mode);
		}

		::System::Boolean Play_2(::System::String* animation, ::UnityEngine::PlayMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_2_OFFSET))(this, animation, mode);
		}

		::System::Boolean Play_3(::System::String* animation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_3_OFFSET))(this, animation);
		}

		::System::Void CrossFade(::System::String* animation, ::System::Single fadeLength, ::UnityEngine::PlayMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_OFFSET))(this, animation, fadeLength, mode);
		}

		::System::Void CrossFade_1(::System::String* animation, ::System::Single fadeLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_1_OFFSET))(this, animation, fadeLength);
		}

		::System::Void CrossFade_2(::System::String* animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADE_2_OFFSET))(this, animation);
		}

		::System::Void Blend(::System::String* animation, ::System::Single targetWeight, ::System::Single fadeLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_OFFSET))(this, animation, targetWeight, fadeLength);
		}

		::System::Void Blend_1(::System::String* animation, ::System::Single targetWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_1_OFFSET))(this, animation, targetWeight);
		}

		::System::Void Blend_2(::System::String* animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_BLEND_2_OFFSET))(this, animation);
		}

		::UnityEngine::AnimationState* CrossFadeQueued(::System::String* animation, ::System::Single fadeLength, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::QueueMode, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_OFFSET))(this, animation, fadeLength, queue, mode);
		}

		::UnityEngine::AnimationState* CrossFadeQueued_1(::System::String* animation, ::System::Single fadeLength, ::UnityEngine::QueueMode queue)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::QueueMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_1_OFFSET))(this, animation, fadeLength, queue);
		}

		::UnityEngine::AnimationState* CrossFadeQueued_2(::System::String* animation, ::System::Single fadeLength)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_2_OFFSET))(this, animation, fadeLength);
		}

		::UnityEngine::AnimationState* CrossFadeQueued_3(::System::String* animation)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_CROSSFADEQUEUED_3_OFFSET))(this, animation);
		}

		::UnityEngine::AnimationState* PlayQueued(::System::String* animation, ::UnityEngine::QueueMode queue, ::UnityEngine::PlayMode mode)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::UnityEngine::QueueMode, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_OFFSET))(this, animation, queue, mode);
		}

		::UnityEngine::AnimationState* PlayQueued_1(::System::String* animation, ::UnityEngine::QueueMode queue)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*, ::UnityEngine::QueueMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_1_OFFSET))(this, animation, queue);
		}

		::UnityEngine::AnimationState* PlayQueued_2(::System::String* animation)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYQUEUED_2_OFFSET))(this, animation);
		}

		::System::Void AddClip(::UnityEngine::AnimationClip* clip, ::System::String* newName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_OFFSET))(this, clip, newName);
		}

		::System::Void AddClip_1(::UnityEngine::AnimationClip* clip, ::System::String* newName, ::System::Int32 firstFrame, ::System::Int32 lastFrame, ::System::Boolean addLoopFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_1_OFFSET))(this, clip, newName, firstFrame, lastFrame, addLoopFrame);
		}

		::System::Void AddClip_2(::UnityEngine::AnimationClip* clip, ::System::String* newName, ::System::Int32 firstFrame, ::System::Int32 lastFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ADDCLIP_2_OFFSET))(this, clip, newName, firstFrame, lastFrame);
		}

		::System::Void RemoveClip(::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP_OFFSET))(this, clip);
		}

		::System::Void RemoveClip_1(::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP_1_OFFSET))(this, clipName);
		}

		::System::Int32 GetClipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETCLIPCOUNT_OFFSET))(this);
		}

		::System::Void RemoveClip2(::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_REMOVECLIP2_OFFSET))(this, clipName);
		}

		::System::Boolean PlayDefaultAnimation(::UnityEngine::PlayMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAYDEFAULTANIMATION_OFFSET))(this, mode);
		}

		::System::Boolean Play_4(::UnityEngine::AnimationPlayMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationPlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_4_OFFSET))(this, mode);
		}

		::System::Boolean Play_5(::System::String* animation, ::UnityEngine::AnimationPlayMode mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationPlayMode))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_PLAY_5_OFFSET))(this, animation, mode);
		}

		::System::Void ReleaseAnimationStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_RELEASEANIMATIONSTATES_OFFSET))(this);
		}

		static ::System::Void INTERNAL_CALL_ReleaseAnimationStates(::UnityEngine::Animation* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_RELEASEANIMATIONSTATES_OFFSET))(self);
		}

		::System::Void SyncLayer(::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SYNCLAYER_OFFSET))(this, layer);
		}

		static ::System::Void INTERNAL_CALL_SyncLayer(::UnityEngine::Animation* self, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_CALL_SYNCLAYER_OFFSET))(self, layer);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETENUMERATOR_OFFSET))(this);
		}

		::UnityEngine::AnimationState* GetState(::System::String* name)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATE_OFFSET))(this, name);
		}

		::UnityEngine::AnimationState* GetStateAtIndex(::System::Int32 index)
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATEATINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetStateCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETSTATECOUNT_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* GetClip(::System::String* name)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GETCLIP_OFFSET))(this, name);
		}

		::System::Boolean get_animatePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ANIMATEPHYSICS_OFFSET))(this);
		}

		::System::Void set_animatePhysics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ANIMATEPHYSICS_OFFSET))(this, value);
		}

		::System::Boolean get_animateOnlyIfVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ANIMATEONLYIFVISIBLE_OFFSET))(this);
		}

		::System::Void set_animateOnlyIfVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ANIMATEONLYIFVISIBLE_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCullingType get_cullingType()
		{
			return ((::UnityEngine::AnimationCullingType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_CULLINGTYPE_OFFSET))(this);
		}

		::System::Void set_cullingType(::UnityEngine::AnimationCullingType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCullingType))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_CULLINGTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Bounds get_localBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_LOCALBOUNDS_OFFSET))(this);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_LOCALBOUNDS_OFFSET))(this, value);
		}

		::System::Void INTERNAL_get_localBounds(::UnityEngine::Bounds& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_GET_LOCALBOUNDS_OFFSET))(this, value);
		}

		::System::Void INTERNAL_set_localBounds(::UnityEngine::Bounds& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_INTERNAL_SET_LOCALBOUNDS_OFFSET))(this, value);
		}

		static ::System::Boolean get_enableFeatureAnimationLightweightDeactivate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_GET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET))();
		}

		static ::System::Void set_enableFeatureAnimationLightweightDeactivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_SET_ENABLEFEATUREANIMATIONLIGHTWEIGHTDEACTIVATE_OFFSET))(value);
		}
	};
}
