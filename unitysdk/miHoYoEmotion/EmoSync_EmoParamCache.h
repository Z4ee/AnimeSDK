#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19790250)
#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x197917E0)
#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x19791800)
#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETEMOTIONCACHE_OFFSET UNITYSDK_OFFSET(0x1978EE80)
#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETPHONEMECACHE_OFFSET UNITYSDK_OFFSET(0x1978E700)
#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETSEQDATACACHE_OFFSET UNITYSDK_OFFSET(0x19791840)
#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x197917F0)
#define MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x19791130)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoSync_EmoParamCache_TypeDefinitionIndex = 37714;

	class EmoSync_EmoParamCache : public ::System::Object
	{
	public:
		::System::String* phonemeName; // 0x10
		::System::String* emotionName; // 0x18
		::miHoYoEmotion::SequenceBakeData* seqData; // 0x20
		::System::Single blendTime; // 0x28
		::System::Boolean _IsDirty_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SET_ISDIRTY_OFFSET))(this, value);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETDIRTY_OFFSET))(this);
		}

		::System::Void SetEmotionCache(::System::String* pEmotionName, ::System::Single pBlendTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETEMOTIONCACHE_OFFSET))(this, pEmotionName, pBlendTime);
		}

		::System::Void SetPhonemeCache(::System::String* pPhoneme, ::System::Single pBlendTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETPHONEMECACHE_OFFSET))(this, pPhoneme, pBlendTime);
		}

		::System::Void SetSeqDataCache(::miHoYoEmotion::SequenceBakeData* pSeqData)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_SETSEQDATACACHE_OFFSET))(this, pSeqData);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSYNC_EMOPARAMCACHE_CLEAR_OFFSET))(this);
		}
	};
}
