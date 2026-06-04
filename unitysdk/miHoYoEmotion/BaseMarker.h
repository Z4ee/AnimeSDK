#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYEND_OFFSET UNITYSDK_OFFSET(0xA27C3E0)
#define MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYSTART_OFFSET UNITYSDK_OFFSET(0xA27C3C0)
#define MIHOYOEMOTION_BASEMARKER_UPDATEENDTIME_OFFSET UNITYSDK_OFFSET(0xA27C410)
#define MIHOYOEMOTION_BASEMARKER_UPDATESTARTTIME_OFFSET UNITYSDK_OFFSET(0xA27C400)
#define MIHOYOEMOTION_BASEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xA27C420)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BaseMarker_TypeDefinitionIndex = 41779;

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

		::System::Void UpdateBothTimeByStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYSTART_OFFSET))(this, a1);
		}

		::System::Void UpdateBothTimeByEnd(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATEBOTHTIMEBYEND_OFFSET))(this, a1);
		}

		::System::Void UpdateStartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATESTARTTIME_OFFSET))(this, a1);
		}

		::System::Void UpdateEndTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEMARKER_UPDATEENDTIME_OFFSET))(this, a1);
		}
	};
}
