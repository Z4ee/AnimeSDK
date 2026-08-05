#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/SequenceBakeData.h"

namespace miHoYoEmotion { class SequenceBakeData_BakeData; }
namespace miHoYoEmotion { class SequenceClipBakeData_BakeData; }

#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1D04F570)
#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1D04F580)
#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04F630)
#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA___BASE_SET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1D04F690)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceClipBakeData_TypeDefinitionIndex = 40031;

	class SequenceClipBakeData : public ::miHoYoEmotion::SequenceBakeData
	{
	public:
		::miHoYoEmotion::SequenceClipBakeData_BakeData* _phonemeBakeData; // 0x18
		::System::Int32 emotionIdx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA__CTOR_OFFSET))(this);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_phonemeBakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET))(this);
		}

		::System::Void set_phonemeBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET))(this, value);
		}

		::System::Void __base_set_phonemeBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA___BASE_SET_PHONEMEBAKEDATA_OFFSET))(this, P0);
		}
	};
}
