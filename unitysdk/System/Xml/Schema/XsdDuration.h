#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/Schema/XsdDuration_DurationType.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x9D30B0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_NANOSECONDS_OFFSET UNITYSDK_OFFSET(0x9D30C0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9D31D0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D31C0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_1_OFFSET UNITYSDK_OFFSET(0x9D3130)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9D30D0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSEDIGITS_OFFSET UNITYSDK_OFFSET(0x1D1888B0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1D171560)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D1888A0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_1_OFFSET UNITYSDK_OFFSET(0x9D31B0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9D31A0)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9D2D30)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9D2E10)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9D2FB0)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x9D3030)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2D20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDuration_TypeDefinitionIndex = 2232;

	struct alignas(4) XsdDuration
	{
		::System::Int32 years; // 0x10
		::System::Int32 months; // 0x14
		::System::Int32 days; // 0x18
		::System::Int32 hours; // 0x1C
		::System::Int32 minutes; // 0x20
		::System::Int32 seconds; // 0x24
		::System::UInt32 nanoseconds; // 0x28

		::System::Void _ctor(::System::Boolean isNegative, ::System::Int32 years, ::System::Int32 months, ::System::Int32 days, ::System::Int32 hours, ::System::Int32 minutes, ::System::Int32 seconds, ::System::Int32 nanoseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_OFFSET))(this, isNegative, years, months, days, hours, minutes, seconds, nanoseconds);
		}

		/*
		::System::Void _ctor_1(::System::TimeSpan timeSpan)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_1_OFFSET))(this, timeSpan);
		}
		*/

		/*
		::System::Void _ctor_2(::System::TimeSpan timeSpan, ::System::Xml::Schema::XsdDuration_DurationType durationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_2_OFFSET))(this, timeSpan, durationType);
		}
		*/

		::System::Void _ctor_3(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_3_OFFSET))(this, s);
		}

		::System::Void _ctor_4(::System::String* s, ::System::Xml::Schema::XsdDuration_DurationType durationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_4_OFFSET))(this, s, durationType);
		}

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Int32 get_Nanoseconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_NANOSECONDS_OFFSET))(this);
		}

		/*
		::System::TimeSpan ToTimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET))(this);
		}
		*/

		/*
		::System::TimeSpan ToTimeSpan_1(::System::Xml::Schema::XsdDuration_DurationType durationType)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_1_OFFSET))(this, durationType);
		}
		*/

		/*
		::System::Exception* TryToTimeSpan(::System::TimeSpan& result)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET))(this, result);
		}
		*/

		/*
		::System::Exception* TryToTimeSpan_1(::System::Xml::Schema::XsdDuration_DurationType durationType, ::System::TimeSpan& result)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::Schema::XsdDuration_DurationType, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_1_OFFSET))(this, durationType, result);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Xml::Schema::XsdDuration_DurationType durationType)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_1_OFFSET))(this, durationType);
		}

		static ::System::Exception* TryParse(::System::String* s, ::System::Xml::Schema::XsdDuration& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XsdDuration&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET))(s, result);
		}

		static ::System::Exception* TryParse_1(::System::String* s, ::System::Xml::Schema::XsdDuration_DurationType durationType, ::System::Xml::Schema::XsdDuration& result)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XsdDuration_DurationType, ::System::Xml::Schema::XsdDuration&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_1_OFFSET))(s, durationType, result);
		}

		static ::System::String* TryParseDigits(::System::String* s, ::System::Int32& offset, ::System::Boolean eatDigits, ::System::Int32& result, ::System::Int32& numDigits)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSEDIGITS_OFFSET))(s, offset, eatDigits, result, numDigits);
		}
	};
}
