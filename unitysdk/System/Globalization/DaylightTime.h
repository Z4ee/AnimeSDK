#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1CD3A710)
#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_END_OFFSET UNITYSDK_OFFSET(0x1CD3A700)
#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_START_OFFSET UNITYSDK_OFFSET(0x1CD3A6F0)
#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD3A6E0)
#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3A6D0)

namespace System::Globalization
{
	inline static constexpr unsigned int DaylightTime_TypeDefinitionIndex = 720;

	class DaylightTime : public ::System::Object
	{
	public:
		::System::DateTime m_end; // 0x10
		::System::TimeSpan m_delta; // 0x18
		::System::DateTime m_start; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME__CTOR_1_OFFSET))(this, start, end, delta);
		}

		::System::DateTime get_Start()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_START_OFFSET))(this);
		}

		::System::DateTime get_End()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_END_OFFSET))(this);
		}

		::System::TimeSpan get_Delta()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_DELTA_OFFSET))(this);
		}
	};
}
