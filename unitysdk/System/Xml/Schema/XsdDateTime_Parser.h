#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/Schema/XsdDateTimeFlags.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_DateTimeTypeCode.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_XsdDateTimeKind.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE2DIG_OFFSET UNITYSDK_OFFSET(0x22D1940)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE4DIG_OFFSET UNITYSDK_OFFSET(0x22D1930)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSECHAR_OFFSET UNITYSDK_OFFSET(0x22D1A00)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEDATE_OFFSET UNITYSDK_OFFSET(0x22D1880)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x22D18D0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x22D1890)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x22D1910)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x22D1920)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x22D1870)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_TEST_OFFSET UNITYSDK_OFFSET(0x19FF2C00)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF3970)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_Parser_TypeDefinitionIndex = 2226;

	struct alignas(8) XsdDateTime_Parser
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_Power10()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_Parser_TypeDefinitionIndex)->GetStaticField(0xDA20);
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

		::System::Boolean Parse(::System::String* text, ::System::Xml::Schema::XsdDateTimeFlags kinds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE_OFFSET))(this, text, kinds);
		}

		::System::Boolean ParseDate(::System::Int32 start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEDATE_OFFSET))(this, start);
		}

		::System::Boolean ParseTimeAndZoneAndWhitespace(::System::Int32 start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET))(this, start);
		}

		::System::Boolean ParseTimeAndWhitespace(::System::Int32 start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIMEANDWHITESPACE_OFFSET))(this, start);
		}

		::System::Boolean ParseTime(::System::Int32& start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSETIME_OFFSET))(this, start);
		}

		::System::Boolean ParseZoneAndWhitespace(::System::Int32 start)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSEZONEANDWHITESPACE_OFFSET))(this, start);
		}

		::System::Boolean Parse4Dig(::System::Int32 start, ::System::Int32& num)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE4DIG_OFFSET))(this, start, num);
		}

		::System::Boolean Parse2Dig(::System::Int32 start, ::System::Int32& num)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSE2DIG_OFFSET))(this, start, num);
		}

		::System::Boolean ParseChar(::System::Int32 start, ::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_PARSECHAR_OFFSET))(this, start, ch);
		}

		static ::System::Boolean Test(::System::Xml::Schema::XsdDateTimeFlags left, ::System::Xml::Schema::XsdDateTimeFlags right)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::XsdDateTimeFlags, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PARSER_TEST_OFFSET))(left, right);
		}
	};
}
