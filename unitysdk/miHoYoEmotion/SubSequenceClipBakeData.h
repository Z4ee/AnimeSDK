#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/SubSequenceBakeData.h"

namespace miHoYoEmotion { class SequenceBakeData_BakeData; }
namespace miHoYoEmotion { class SequenceClipBakeData_BakeData; }

#define MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA_GET_BAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0DB10)
#define MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA_SET_BAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0DB20)
#define MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0DBD0)
#define MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA___BASE_SET_BAKEDATA_OFFSET UNITYSDK_OFFSET(0x1BB0DC30)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SubSequenceClipBakeData_TypeDefinitionIndex = 39345;

	class SubSequenceClipBakeData : public ::miHoYoEmotion::SubSequenceBakeData
	{
	public:
		::miHoYoEmotion::SequenceClipBakeData_BakeData* _bakeData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA__CTOR_OFFSET))(this);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_bakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA_GET_BAKEDATA_OFFSET))(this);
		}

		::System::Void set_bakeData(::miHoYoEmotion::SequenceBakeData_BakeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA_SET_BAKEDATA_OFFSET))(this, value);
		}

		::System::Void __base_set_bakeData(::miHoYoEmotion::SequenceBakeData_BakeData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SUBSEQUENCECLIPBAKEDATA___BASE_SET_BAKEDATA_OFFSET))(this, P0);
		}
	};
}
