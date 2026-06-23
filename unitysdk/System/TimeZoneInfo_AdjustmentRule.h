#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TimeZoneInfo_TransitionTime.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_1_OFFSET UNITYSDK_OFFSET(0x1C70D710)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x1C70D2E0)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C70D170)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C70D2B0)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1C70D820)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C70D940)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_VALIDATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x1C70D3C0)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C70DC50)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70D2D0)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_AdjustmentRule_TypeDefinitionIndex = 332;

	class TimeZoneInfo_AdjustmentRule : public ::System::Object
	{
	public:
		::System::TimeSpan m_baseUtcOffsetDelta; // 0x10
		::System::DateTime m_dateStart; // 0x18
		::System::TimeZoneInfo_TransitionTime m_daylightTransitionEnd; // 0x20
		::System::TimeSpan m_daylightDelta; // 0x38
		::System::DateTime m_dateEnd; // 0x40
		::System::TimeZoneInfo_TransitionTime m_daylightTransitionStart; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Boolean Equals(::System::TimeZoneInfo_AdjustmentRule* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_OFFSET))(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd);
		}

		static ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule_1(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_1_OFFSET))(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta);
		}

		static ::System::Void ValidateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_VALIDATEADJUSTMENTRULE_OFFSET))(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
