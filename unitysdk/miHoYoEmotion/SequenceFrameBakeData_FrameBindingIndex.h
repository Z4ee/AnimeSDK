#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDINGINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1979FFE0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceFrameBakeData_FrameBindingIndex_TypeDefinitionIndex = 37759;

	class SequenceFrameBakeData_FrameBindingIndex : public ::System::Object
	{
	public:
		::System::String* bindingName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_FRAMEBINDINGINDEX__CTOR_OFFSET))(this);
		}
	};
}
