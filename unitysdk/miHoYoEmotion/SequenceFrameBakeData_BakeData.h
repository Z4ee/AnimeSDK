#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/SequenceBakeData_BakeData.h"

namespace miHoYoEmotion { class SequenceFrameBakeData_FrameBinding; }

#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_BAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0CC00)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceFrameBakeData_BakeData_TypeDefinitionIndex = 39327;

	class SequenceFrameBakeData_BakeData : public ::miHoYoEmotion::SequenceBakeData_BakeData
	{
	public:
		::Il2CppArray<::miHoYoEmotion::SequenceFrameBakeData_FrameBinding*>* bakedBindings; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_BAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
