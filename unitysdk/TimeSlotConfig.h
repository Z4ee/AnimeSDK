#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberAnimWeightConfig.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberTypeWeightConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TIMESLOTCONFIG_METHOD_1_3C4F44036F654455_OFFSET UNITYSDK_OFFSET(0xAC26B00)
#define TIMESLOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAC26C50)

inline static constexpr unsigned int TimeSlotConfig_TypeDefinitionIndex = 38020;

class TimeSlotConfig : public ::System::Object
{
public:
	::System::String* SlotName; // 0x10
	::System::Int32 StartTimeInMinutes; // 0x18
	::System::Int32 EndTimeInMinutes; // 0x1C
	::System::Collections::Generic::List_1<::SubwayScheduleData_SubwayMemberTypeWeightConfig>* MemberTypeWeightConfigs; // 0x20
	::System::Collections::Generic::List_1<::SubwayScheduleData_SubwayMemberAnimWeightConfig>* MemberAnimWeightConfigs; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESLOTCONFIG__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_3C4F44036F654455()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESLOTCONFIG_METHOD_1_3C4F44036F654455_OFFSET))(this);
	}
};
