#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/Schema/XsdDateTimeFlags.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_DateTimeTypeCode.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_XsdDateTimeKind.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE2DIG_OFFSET UNITYSDK_OFFSET(0x3BA3120)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE4DIG_OFFSET UNITYSDK_OFFSET(0x3BA3110)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSECHAR_OFFSET UNITYSDK_OFFSET(0x3BA31E0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEDATE_OFFSET UNITYSDK_OFFSET(0x3BA3060)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x3BA30B0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x3BA3070)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x3BA30F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x3BA3100)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x3BA3050)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_TEST_OFFSET UNITYSDK_OFFSET(0x1E8284F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E829270)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_Parser_TypeDefinitionIndex = 2237;

	struct alignas(8) XsdDateTime_Parser
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_Power10()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_Parser_TypeDefinitionIndex)->GetStaticField(0x1C380);
		}
		::System::Xml::Schema::XsdDateTime_DateTimeTypeCode typeCode; // 0x10
		::System::Int32 year; // 0x14
		::System::Int32 month; // 0x18
		::System::Int32 day; // 0x1C
		::System::Int32 hour; // 0x20
		::System::Int32 minute; // 0x24
		::System::Int32 second; // 0x28
		::System::Int32 fraction; // 0x2C
		::System::Xml::Schema::XsdDateTime_XsdDateTimeKind kind; // 0x30
		::System::Int32 zoneHour; // 0x34
		::System::Int32 zoneMinute; // 0x38
		::System::String* text; // 0x40
		::System::Int32 length; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER__CCTOR_OFFSET))();
		}

		::System::Boolean Parse(::System::String* a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ParseDate(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEDATE_OFFSET))(this, a1);
		}

		::System::Boolean ParseTimeAndZoneAndWhitespace(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET))(this, a1);
		}

		::System::Boolean ParseTimeAndWhitespace(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDWHITESPACE_OFFSET))(this, a1);
		}

		::System::Boolean ParseTime(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIME_OFFSET))(this, a1);
		}

		::System::Boolean ParseZoneAndWhitespace(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEZONEANDWHITESPACE_OFFSET))(this, a1);
		}

		::System::Boolean Parse4Dig(::System::Int32 a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE4DIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean Parse2Dig(::System::Int32 a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE2DIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean ParseChar(::System::Int32 a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSECHAR_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Test(::System::Xml::Schema::XsdDateTimeFlags a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::XsdDateTimeFlags, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_TEST_OFFSET))(a1, a2);
		}
	};
}
