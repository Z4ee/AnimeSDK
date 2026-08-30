#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/Schema/XsdDuration_DurationType.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_DAYS_OFFSET UNITYSDK_OFFSET(0x12370)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_HOURS_OFFSET UNITYSDK_OFFSET(0x784470)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x3B77130)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_MINUTES_OFFSET UNITYSDK_OFFSET(0x7845E0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_MONTHS_OFFSET UNITYSDK_OFFSET(0x784260)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_NANOSECONDS_OFFSET UNITYSDK_OFFSET(0x3B77140)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0xF080)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_YEARS_OFFSET UNITYSDK_OFFSET(0x19050)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3B771F0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B771E0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x3B77150)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSEDIGITS_OFFSET UNITYSDK_OFFSET(0x1B084AB0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1B083C90)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1B084AA0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_1_OFFSET UNITYSDK_OFFSET(0x3B771D0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x3B771C0)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B76E30)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B76F10)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B770B0)
#define SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B76E20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDuration_TypeDefinitionIndex = 2238;

	struct alignas(4) XsdDuration
	{
		::System::Int32 years; // 0x10
		::System::Int32 months; // 0x14
		::System::Int32 days; // 0x18
		::System::Int32 hours; // 0x1C
		::System::Int32 minutes; // 0x20
		::System::Int32 seconds; // 0x24
		::System::UInt32 nanoseconds; // 0x28

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		/*
		::System::Void _ctor_1(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void _ctor_2(::System::TimeSpan a1, ::System::Xml::Schema::XsdDuration_DurationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_2_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void _ctor_3(::System::String* a1, ::System::Xml::Schema::XsdDuration_DurationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Int32 get_Years()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_YEARS_OFFSET))(this);
		}

		::System::Int32 get_Months()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_MONTHS_OFFSET))(this);
		}

		::System::Int32 get_Days()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_DAYS_OFFSET))(this);
		}

		::System::Int32 get_Hours()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_HOURS_OFFSET))(this);
		}

		::System::Int32 get_Minutes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_MINUTES_OFFSET))(this);
		}

		::System::Int32 get_Seconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_SECONDS_OFFSET))(this);
		}

		::System::Int32 get_Nanoseconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_NANOSECONDS_OFFSET))(this);
		}

		/*
		::System::TimeSpan ToTimeSpan(::System::Xml::Schema::XsdDuration_DurationType a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Exception* TryToTimeSpan(::System::TimeSpan& a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Exception* TryToTimeSpan_1(::System::Xml::Schema::XsdDuration_DurationType a1, ::System::TimeSpan& a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::Schema::XsdDuration_DurationType, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_1_OFFSET))(this, a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Xml::Schema::XsdDuration_DurationType a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XsdDuration_DurationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::System::Exception* TryParse(::System::String* a1, ::System::Xml::Schema::XsdDuration& a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XsdDuration&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Exception* TryParse_1(::System::String* a1, ::System::Xml::Schema::XsdDuration_DurationType a2, ::System::Xml::Schema::XsdDuration& a3)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XsdDuration_DurationType, ::System::Xml::Schema::XsdDuration&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* TryParseDigits(::System::String* a1, ::System::Int32& a2, ::System::Boolean a3, ::System::Int32& a4, ::System::Int32& a5)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSEDIGITS_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
