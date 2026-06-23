#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/SequenceBakeData.h"

namespace miHoYoEmotion { class SequenceBakeData_BakeData; }
namespace miHoYoEmotion { class SequenceFrameBakeData_BakeData; }

#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_GET_EMOTIONBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0CAC0)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0CA00)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_SET_EMOTIONBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0CAD0)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0CA10)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0CB80)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA___BASE_SET_EMOTIONBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0CBE0)
#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA___BASE_SET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0CBF0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceFrameBakeData_TypeDefinitionIndex = 39323;

	class SequenceFrameBakeData : public ::miHoYoEmotion::SequenceBakeData
	{
	public:
		::miHoYoEmotion::SequenceFrameBakeData_BakeData* _phonemeBakeData; // 0x18
		::miHoYoEmotion::SequenceFrameBakeData_BakeData* _emotionBakeData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA__CTOR_OFFSET))(this);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_phonemeBakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET))(this);
		}

		::System::Void set_phonemeBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET))(this, value);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_emotionBakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_GET_EMOTIONBAKEDATA_OFFSET))(this);
		}

		::System::Void set_emotionBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_SET_EMOTIONBAKEDATA_OFFSET))(this, value);
		}

		::System::Void __base_set_emotionBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA___BASE_SET_EMOTIONBAKEDATA_OFFSET))(this, P0);
		}

		::System::Void __base_set_phonemeBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA___BASE_SET_PHONEMEBAKEDATA_OFFSET))(this, P0);
		}
	};
}
