#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/TransitionType.h"

namespace System { class String; }

#define MIHOYOEMOTION_SEQUENCEBAKEDATA_BAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA27CB70)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceBakeData_BakeData_TypeDefinitionIndex = 41785;

	class SequenceBakeData_BakeData : public ::System::Object
	{
	public:
		::System::Single length; // 0x10
		::miHoYoEmotion::TransitionType transitionType; // 0x14
		::System::String* lastShape; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_BAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
