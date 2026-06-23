#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYOEMOTION_BASEMARKER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1BAE2530)
#define MIHOYOEMOTION_BASEMARKER_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1BAE2310)
#define MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYEND_OFFSET UNITYSDK_OFFSET(0x1BAE2400)
#define MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYSTART_OFFSET UNITYSDK_OFFSET(0x1BAE2320)
#define MIHOYOEMOTION_BASEMARKER_UPDATEENDTIME_OFFSET UNITYSDK_OFFSET(0x1BAE24D0)
#define MIHOYOEMOTION_BASEMARKER_UPDATESTARTTIME_OFFSET UNITYSDK_OFFSET(0x1BAE2470)
#define MIHOYOEMOTION_BASEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE2580)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BaseMarker_TypeDefinitionIndex = 39331;

	class BaseMarker : public ::System::Object
	{
	public:
		::System::Boolean postToFinalCanChange; // 0x10
		::System::String* name; // 0x18
		::System::Single startTime; // 0x20
		::System::Single endTime; // 0x24
		::System::Single intensity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER__CTOR_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_GET_DURATION_OFFSET))(this);
		}

		::System::Void UpdateBothTimeByStart(::System::Single newStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYSTART_OFFSET))(this, newStartTime);
		}

		::System::Void UpdateBothTimeByEnd(::System::Single newEndTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYEND_OFFSET))(this, newEndTime);
		}

		::System::Void UpdateStartTime(::System::Single newStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATESTARTTIME_OFFSET))(this, newStartTime);
		}

		::System::Void UpdateEndTime(::System::Single newEndTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATEENDTIME_OFFSET))(this, newEndTime);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_GETTIME_OFFSET))(this);
		}
	};
}
