#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace miHoYoEmotion { class SequenceBakeData_BakeData; }

#define MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_EMOTIONBAKEDATA_OFFSET UNITYSDK_OFFSET(0x8E53210)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x8E531F0)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_EMOTIONBAKEDATA_OFFSET UNITYSDK_OFFSET(0x8E53200)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0x8E531E0)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8E53220)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceBakeData_TypeDefinitionIndex = 40966;

	class SequenceBakeData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA__CTOR_OFFSET))(this);
		}

		::System::Void set_phonemeBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET))(this, value);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_phonemeBakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET))(this);
		}

		::System::Void set_emotionBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_EMOTIONBAKEDATA_OFFSET))(this, value);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_emotionBakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_EMOTIONBAKEDATA_OFFSET))(this);
		}
	};
}
