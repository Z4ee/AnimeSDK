#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/SerializableDictionary_2.h"

namespace miHoYoEmotion { class PhonemeShapeListWrapper; }

#define MIHOYOEMOTION_EMOTIONGROUPEDPHONEMES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFE690)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmotionGroupedPhonemes_TypeDefinitionIndex = 39388;

	class EmotionGroupedPhonemes : public ::miHoYoEmotion::SerializableDictionary_2<::System::Int32, ::miHoYoEmotion::PhonemeShapeListWrapper*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTIONGROUPEDPHONEMES__CTOR_OFFSET))(this);
		}
	};
}
