#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TimeZoneInfo_TransitionTime.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_1_OFFSET UNITYSDK_OFFSET(0x18640390)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x1863DB80)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18647F30)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18646930)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DATEEND_OFFSET UNITYSDK_OFFSET(0x1864BD10)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DATESTART_OFFSET UNITYSDK_OFFSET(0x1864BD00)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DAYLIGHTDELTA_OFFSET UNITYSDK_OFFSET(0x1864BD20)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x1864BD50)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONSTART_OFFSET UNITYSDK_OFFSET(0x1864BD30)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1864C0D0)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1864C200)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_VALIDATEADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x1864BD80)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1864C500)
#define SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1864BD70)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_AdjustmentRule_TypeDefinitionIndex = 341;

	class TimeZoneInfo_AdjustmentRule : public ::System::Object
	{
	public:
		::System::DateTime m_dateStart; // 0x10
		::System::TimeSpan m_baseUtcOffsetDelta; // 0x18
		::System::TimeZoneInfo_TransitionTime m_daylightTransitionStart; // 0x20
		::System::TimeZoneInfo_TransitionTime m_daylightTransitionEnd; // 0x38
		::System::DateTime m_dateEnd; // 0x50
		::System::TimeSpan m_daylightDelta; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::DateTime get_DateStart()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DATESTART_OFFSET))(this);
		}

		::System::DateTime get_DateEnd()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DATEEND_OFFSET))(this);
		}

		::System::TimeSpan get_DaylightDelta()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DAYLIGHTDELTA_OFFSET))(this);
		}

		::System::TimeZoneInfo_TransitionTime get_DaylightTransitionStart()
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONSTART_OFFSET))(this);
		}

		::System::TimeZoneInfo_TransitionTime get_DaylightTransitionEnd()
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GET_DAYLIGHTTRANSITIONEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::TimeZoneInfo_AdjustmentRule* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(::System::DateTime a1, ::System::DateTime a2, ::System::TimeSpan a3, ::System::TimeZoneInfo_TransitionTime a4, ::System::TimeZoneInfo_TransitionTime a5)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule_1(::System::DateTime a1, ::System::DateTime a2, ::System::TimeSpan a3, ::System::TimeZoneInfo_TransitionTime a4, ::System::TimeZoneInfo_TransitionTime a5, ::System::TimeSpan a6)
		{
			return ((::System::TimeZoneInfo_AdjustmentRule*(*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_CREATEADJUSTMENTRULE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ValidateAdjustmentRule(::System::DateTime a1, ::System::DateTime a2, ::System::TimeSpan a3, ::System::TimeZoneInfo_TransitionTime a4, ::System::TimeZoneInfo_TransitionTime a5)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_VALIDATEADJUSTMENTRULE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ADJUSTMENTRULE_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
