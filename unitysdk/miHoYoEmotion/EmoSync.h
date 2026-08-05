#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/EmoMgrUser.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class EmoSync_EmoParamCache; }
namespace miHoYoEmotion { class EmoSync_PhoFinishDelegate; }
namespace miHoYoEmotion { class EmotionSetData; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define MIHOYOEMOTION_EMOSYNC_ADD_ONPHOFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x1D03CF60)
#define MIHOYOEMOTION_EMOSYNC_CLEAREMOTION_OFFSET UNITYSDK_OFFSET(0x1D03F8E0)
#define MIHOYOEMOTION_EMOSYNC_CLEARSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D03FB30)
#define MIHOYOEMOTION_EMOSYNC_EMOFINISH_OFFSET UNITYSDK_OFFSET(0x1D03FBC0)
#define MIHOYOEMOTION_EMOSYNC_ENDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D03F220)
#define MIHOYOEMOTION_EMOSYNC_GETEMOTION_OFFSET UNITYSDK_OFFSET(0x1D03D5E0)
#define MIHOYOEMOTION_EMOSYNC_GETPHONEME_OFFSET UNITYSDK_OFFSET(0x1D03D4F0)
#define MIHOYOEMOTION_EMOSYNC_GET_GLOBALPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1D03CB20)
#define MIHOYOEMOTION_EMOSYNC_GET_SETDATA_OFFSET UNITYSDK_OFFSET(0x1D03CF40)
#define MIHOYOEMOTION_EMOSYNC_GET_USEPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1D03CBE0)
#define MIHOYOEMOTION_EMOSYNC_INTERRUPTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D03F300)
#define MIHOYOEMOTION_EMOSYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D040C30)
#define MIHOYOEMOTION_EMOSYNC_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1D040BB0)
#define MIHOYOEMOTION_EMOSYNC_PERFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1D040210)
#define MIHOYOEMOTION_EMOSYNC_PHOFINISH_OFFSET UNITYSDK_OFFSET(0x1D03FC50)
#define MIHOYOEMOTION_EMOSYNC_PLAYATTIME_OFFSET UNITYSDK_OFFSET(0x1D03F050)
#define MIHOYOEMOTION_EMOSYNC_PLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D03EA50)
#define MIHOYOEMOTION_EMOSYNC_PREPAREFORPOOL_OFFSET UNITYSDK_OFFSET(0x1D03F580)
#define MIHOYOEMOTION_EMOSYNC_PREPAREFORUSE_OFFSET UNITYSDK_OFFSET(0x1D03F960)
#define MIHOYOEMOTION_EMOSYNC_REMOVE_ONPHOFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x1D03CFE0)
#define MIHOYOEMOTION_EMOSYNC_RESETEMOTION_OFFSET UNITYSDK_OFFSET(0x1D03E390)
#define MIHOYOEMOTION_EMOSYNC_RESETPHONEME_OFFSET UNITYSDK_OFFSET(0x1D03D6D0)
#define MIHOYOEMOTION_EMOSYNC_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x1D03F3E0)
#define MIHOYOEMOTION_EMOSYNC_SETDEFAULTEMOTION_OFFSET UNITYSDK_OFFSET(0x1D040AB0)
#define MIHOYOEMOTION_EMOSYNC_SETDEFAULTPHONEME_OFFSET UNITYSDK_OFFSET(0x1D040B40)
#define MIHOYOEMOTION_EMOSYNC_SETEMOTION_OFFSET UNITYSDK_OFFSET(0x1D03E4E0)
#define MIHOYOEMOTION_EMOSYNC_SETPHONEMEANDEMOTION_OFFSET UNITYSDK_OFFSET(0x1D03DC40)
#define MIHOYOEMOTION_EMOSYNC_SETPHONEME_OFFSET UNITYSDK_OFFSET(0x1D03D830)
#define MIHOYOEMOTION_EMOSYNC_SETPOSEFACIALKEY_OFFSET UNITYSDK_OFFSET(0x1D03E850)
#define MIHOYOEMOTION_EMOSYNC_SET_GLOBALPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1D03CB80)
#define MIHOYOEMOTION_EMOSYNC_SET_SETDATA_OFFSET UNITYSDK_OFFSET(0x1D03CF50)
#define MIHOYOEMOTION_EMOSYNC_SET_USEPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1D03CD90)
#define MIHOYOEMOTION_EMOSYNC_START_OFFSET UNITYSDK_OFFSET(0x1D0405A0)
#define MIHOYOEMOTION_EMOSYNC_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1D03EF70)
#define MIHOYOEMOTION_EMOSYNC_UPDATECACHE_OFFSET UNITYSDK_OFFSET(0x1D03D4A0)
#define MIHOYOEMOTION_EMOSYNC_UPDATEEMOTIONCACHE_OFFSET UNITYSDK_OFFSET(0x1D03D280)
#define MIHOYOEMOTION_EMOSYNC_UPDATEPHONEMECACHE_OFFSET UNITYSDK_OFFSET(0x1D03D060)
#define MIHOYOEMOTION_EMOSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D040DE0)
#define MIHOYOEMOTION_EMOSYNC___BASE_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1D041030)
#define MIHOYOEMOTION_EMOSYNC___BASE_START_OFFSET UNITYSDK_OFFSET(0x1D0410C0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoSync_TypeDefinitionIndex = 40012;

	class EmoSync : public ::miHoYoEmotion::EmoMgrUser
	{
	public:
		// static const ::System::String* DEFAULT_EMOTION; // 0x0
		// static const ::System::String* DEFAULT_EMOTION01; // 0x0
		// static const ::System::String* DEFAULT_PHONEMES; // 0x0
		::System::String* defaultEmotion; // 0x38
		::System::String* resetEmotion; // 0x40
		::System::String* resetPhoneme; // 0x48
		::miHoYoEmotion::EmotionSetData* _setData; // 0x50
		::System::Collections::Generic::List_1<::miHoYoEmotion::BaseShape*>* phonemes; // 0x58
		::System::Collections::Generic::List_1<::miHoYoEmotion::BaseShape*>* emotions; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::miHoYoEmotion::BaseShape*>* _phonemeCache; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::miHoYoEmotion::BaseShape*>* _emotionCache; // 0x70
		::miHoYoEmotion::EmoSync_EmoParamCache* _emoParamCache; // 0x78
		::System::String* _curEmotion; // 0x80
		::System::String* _curPhoneme; // 0x88
		::miHoYoEmotion::EmoSync_PhoFinishDelegate* OnPhoFinishEvent; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC__CTOR_OFFSET))(this);
		}

		static ::System::Single get_GlobalPlaybackSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_GET_GLOBALPLAYBACKSPEED_OFFSET))();
		}

		static ::System::Void set_GlobalPlaybackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SET_GLOBALPLAYBACKSPEED_OFFSET))(value);
		}

		::System::Boolean get_UsePlaybackSpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_GET_USEPLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_UsePlaybackSpeed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SET_USEPLAYBACKSPEED_OFFSET))(this, value);
		}

		::miHoYoEmotion::EmotionSetData* get_setData()
		{
			return ((::miHoYoEmotion::EmotionSetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_GET_SETDATA_OFFSET))(this);
		}

		::System::Void set_setData(::miHoYoEmotion::EmotionSetData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmotionSetData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SET_SETDATA_OFFSET))(this, value);
		}

		::System::Void add_OnPhoFinishEvent(::miHoYoEmotion::EmoSync_PhoFinishDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync_PhoFinishDelegate*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_ADD_ONPHOFINISHEVENT_OFFSET))(this, value);
		}

		::System::Void remove_OnPhoFinishEvent(::miHoYoEmotion::EmoSync_PhoFinishDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoSync_PhoFinishDelegate*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_REMOVE_ONPHOFINISHEVENT_OFFSET))(this, value);
		}

		::System::Void UpdatePhonemeCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_UPDATEPHONEMECACHE_OFFSET))(this);
		}

		::System::Void UpdateEmotionCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_UPDATEEMOTIONCACHE_OFFSET))(this);
		}

		::System::Void UpdateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_UPDATECACHE_OFFSET))(this);
		}

		::miHoYoEmotion::BaseShape* GetPhoneme(::System::String* phonemeName)
		{
			return ((::miHoYoEmotion::BaseShape*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_GETPHONEME_OFFSET))(this, phonemeName);
		}

		::miHoYoEmotion::BaseShape* GetEmotion(::System::String* emotionName)
		{
			return ((::miHoYoEmotion::BaseShape*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_GETEMOTION_OFFSET))(this, emotionName);
		}

		::System::Void ResetPhoneme(::System::Boolean playPost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_RESETPHONEME_OFFSET))(this, playPost);
		}

		::System::Void SetPhoneme(::System::String* phonemeName, ::System::Single blendTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SETPHONEME_OFFSET))(this, phonemeName, blendTime);
		}

		::System::Void SetPhonemeAndEmotion(::System::String* phonemeName, ::System::String* emotionName, ::System::Single blendTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SETPHONEMEANDEMOTION_OFFSET))(this, phonemeName, emotionName, blendTime);
		}

		::System::Void ResetEmotion(::System::Boolean playPost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_RESETEMOTION_OFFSET))(this, playPost);
		}

		::System::Void SetEmotion(::System::String* emotionName, ::System::Single blendTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SETEMOTION_OFFSET))(this, emotionName, blendTime);
		}

		::System::Void SetPoseFacialKey(::System::String* poseKey, ::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SETPOSEFACIALKEY_OFFSET))(this, poseKey, facialKey);
		}

		::System::Void PlaySequence(::miHoYoEmotion::SequenceBakeData* seqData)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PLAYSEQUENCE_OFFSET))(this, seqData);
		}

		::System::Void PlayAtTime(::miHoYoEmotion::SequenceBakeData* seqData, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PLAYATTIME_OFFSET))(this, seqData, time);
		}

		::System::Void EndSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_ENDSEQUENCE_OFFSET))(this);
		}

		::System::Void InterruptSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_INTERRUPTSEQUENCE_OFFSET))(this);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_RESETSTATE_OFFSET))(this);
		}

		::System::Void Toggle(::System::Boolean toggle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_TOGGLE_OFFSET))(this, toggle);
		}

		::System::Void PrepareForPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PREPAREFORPOOL_OFFSET))(this);
		}

		::System::Void PrepareForUse(::UnityEngine::SkinnedMeshRenderer* smr, ::UnityEngine::Mesh* lod0Mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PREPAREFORUSE_OFFSET))(this, smr, lod0Mesh);
		}

		::System::Void ClearSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_CLEARSEQUENCE_OFFSET))(this);
		}

		::System::Void ClearEmotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_CLEAREMOTION_OFFSET))(this);
		}

		::System::Void EmoFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOFINISH_OFFSET))(this);
		}

		::System::Void PhoFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PHOFINISH_OFFSET))(this);
		}

		::System::Void PerformCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_PERFORMCACHE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_START_OFFSET))(this);
		}

		::System::Void SetDefaultEmotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SETDEFAULTEMOTION_OFFSET))(this);
		}

		::System::Void SetDefaultPhoneme()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_SETDEFAULTPHONEME_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC___BASE_ONREALENABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC___BASE_START_OFFSET))(this);
		}
	};
}
