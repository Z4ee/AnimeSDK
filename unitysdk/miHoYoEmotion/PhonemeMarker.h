#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseMarker.h"

#define MIHOYOEMOTION_PHONEMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E52E30)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int PhonemeMarker_TypeDefinitionIndex = 40964;

	class PhonemeMarker : public ::miHoYoEmotion::BaseMarker
	{
	public:
		::System::Boolean isSingleFrame; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMEMARKER__CTOR_OFFSET))(this);
		}
	};
}
