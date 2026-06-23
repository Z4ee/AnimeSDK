#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/SequenceBakeData_BakeData.h"

namespace miHoYoEmotion { class ClipShapeCurveGrp; }
namespace miHoYoEmotion { class StopShapeData; }

#define MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_BAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0C950)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceClipBakeData_BakeData_TypeDefinitionIndex = 39382;

	class SequenceClipBakeData_BakeData : public ::miHoYoEmotion::SequenceBakeData_BakeData
	{
	public:
		::miHoYoEmotion::ClipShapeCurveGrp* bakedGrp; // 0x18
		::miHoYoEmotion::StopShapeData* stopShapeData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCECLIPBAKEDATA_BAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
