#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define UNILABS_TIME_UTIMESPAN_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1C49C610)
#define UNILABS_TIME_UTIMESPAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C49C5F0)
#define UNILABS_TIME_UTIMESPAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C49C670)
#define UNILABS_TIME_UTIMESPAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C49C650)
#define UNILABS_TIME_UTIMESPAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C49C710)
#define UNILABS_TIME_UTIMESPAN_GET_TIMESPAN_OFFSET UNITYSDK_OFFSET(0x1C49C2E0)
#define UNILABS_TIME_UTIMESPAN_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C49C720)
#define UNILABS_TIME_UTIMESPAN_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C49C830)
#define UNILABS_TIME_UTIMESPAN_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1C49C910)
#define UNILABS_TIME_UTIMESPAN_ONSERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1C49C8A0)
#define UNILABS_TIME_UTIMESPAN_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1C49C5B0)
#define UNILABS_TIME_UTIMESPAN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C49C590)
#define UNILABS_TIME_UTIMESPAN_SET_TIMESPAN_OFFSET UNITYSDK_OFFSET(0x1C49C2F0)
#define UNILABS_TIME_UTIMESPAN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C49C310)
#define UNILABS_TIME_UTIMESPAN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C49C320)
#define UNILABS_TIME_UTIMESPAN__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C49C330)
#define UNILABS_TIME_UTIMESPAN__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C49C3E0)
#define UNILABS_TIME_UTIMESPAN__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C49C4B0)
#define UNILABS_TIME_UTIMESPAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49C300)

namespace UniLabs::Time
{
	inline static constexpr unsigned int UTimeSpan_TypeDefinitionIndex = 85828;

	class UTimeSpan : public ::System::Object
	{
	public:
		::System::TimeSpan _TimeSpan_k__BackingField; // 0x10
		::System::String* _TimeSpan; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::TimeSpan timeSpan)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN__CTOR_1_OFFSET))(this, timeSpan);
		}

		::System::Void _ctor_2(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN__CTOR_2_OFFSET))(this, ticks);
		}

		::System::Void _ctor_3(::System::Int32 hours, ::System::Int32 minutes, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN__CTOR_3_OFFSET))(this, hours, minutes, seconds);
		}

		::System::Void _ctor_4(::System::Int32 days, ::System::Int32 hours, ::System::Int32 minutes, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN__CTOR_4_OFFSET))(this, days, hours, minutes, seconds);
		}

		::System::Void _ctor_5(::System::Int32 days, ::System::Int32 hours, ::System::Int32 minutes, ::System::Int32 seconds, ::System::Int32 milliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN__CTOR_5_OFFSET))(this, days, hours, minutes, seconds, milliseconds);
		}

		::System::TimeSpan get_TimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_GET_TIMESPAN_OFFSET))(this);
		}

		::System::Void set_TimeSpan(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_SET_TIMESPAN_OFFSET))(this, value);
		}

		static ::System::TimeSpan op_Implicit(::UniLabs::Time::UTimeSpan* uTimeSpan)
		{
			return ((::System::TimeSpan(*)(::UniLabs::Time::UTimeSpan*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_OP_IMPLICIT_OFFSET))(uTimeSpan);
		}

		static ::UniLabs::Time::UTimeSpan* op_Implicit_1(::System::TimeSpan timeSpan)
		{
			return ((::UniLabs::Time::UTimeSpan*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_OP_IMPLICIT_1_OFFSET))(timeSpan);
		}

		::System::Int32 CompareTo(::System::TimeSpan other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_1(::UniLabs::Time::UTimeSpan* other)
		{
			return ((::System::Int32(*)(::PVOID, ::UniLabs::Time::UTimeSpan*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_COMPARETO_1_OFFSET))(this, other);
		}

		::System::Boolean Equals(::UniLabs::Time::UTimeSpan* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UniLabs::Time::UTimeSpan*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_GETHASHCODE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_ONSERIALIZINGMETHOD_OFFSET))(this, context);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPAN_ONDESERIALIZEDMETHOD_OFFSET))(this, context);
		}
	};
}
