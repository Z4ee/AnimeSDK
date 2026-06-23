#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATETIME_OFFSET UNITYSDK_OFFSET(0x1C1677E0)
#define SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATE_OFFSET UNITYSDK_OFFSET(0x1C1679F0)
#define SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDTIME_OFFSET UNITYSDK_OFFSET(0x1C167B80)
#define SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_1_OFFSET UNITYSDK_OFFSET(0x1C16A4C0)
#define SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_OFFSET UNITYSDK_OFFSET(0x1C169BF0)
#define SYSTEM_XML_BINXMLDATETIME_GETKATMAIDATETICKS_OFFSET UNITYSDK_OFFSET(0x1C168C50)
#define SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMETICKS_OFFSET UNITYSDK_OFFSET(0x1C168DE0)
#define SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMEZONETICKS_OFFSET UNITYSDK_OFFSET(0x1C1693F0)
#define SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x1C168790)
#define SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C168510)
#define SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x1C1689B0)
#define SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1688D0)
#define SYSTEM_XML_BINXMLDATETIME_WRITE2DIG_OFFSET UNITYSDK_OFFSET(0x1C165F80)
#define SYSTEM_XML_BINXMLDATETIME_WRITE3DEC_OFFSET UNITYSDK_OFFSET(0x1C166320)
#define SYSTEM_XML_BINXMLDATETIME_WRITE4DIGNEG_OFFSET UNITYSDK_OFFSET(0x1C166080)
#define SYSTEM_XML_BINXMLDATETIME_WRITEDATE_OFFSET UNITYSDK_OFFSET(0x1C166500)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIMEFULLPRECISION_OFFSET UNITYSDK_OFFSET(0x1C166DE0)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_1_OFFSET UNITYSDK_OFFSET(0x1C1674D0)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_OFFSET UNITYSDK_OFFSET(0x1C167380)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIME_OFFSET UNITYSDK_OFFSET(0x1C166810)
#define SYSTEM_XML_BINXMLDATETIME_XSDDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C167CB0)
#define SYSTEM_XML_BINXMLDATETIME_XSDDATETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C168050)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C169260)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1C16A0A0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C1692E0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1C16A250)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x1C168CF0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1697B0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETODATETIME_OFFSET UNITYSDK_OFFSET(0x1C168B70)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1694E0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C169460)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x1C16A550)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x1C1690F0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C169DD0)
#define SYSTEM_XML_BINXMLDATETIME_XSDTIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1682B0)
#define SYSTEM_XML_BINXMLDATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C16A7B0)
#define SYSTEM_XML_BINXMLDATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16A7A0)

namespace System::Xml
{
	inline static constexpr unsigned int BinXmlDateTime_TypeDefinitionIndex = 1669;

	class BinXmlDateTime : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_KatmaiTimeScaleMultiplicator()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BinXmlDateTime_TypeDefinitionIndex)->GetStaticField(0x1E80);
		}
		static ::System::Int32* StaticGet_SQLTicksPerSecond()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinXmlDateTime_TypeDefinitionIndex)->GetStaticField(0xE80);
		}
		static ::System::Int32* StaticGet_SQLTicksPerHour()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinXmlDateTime_TypeDefinitionIndex)->GetStaticField(0xE84);
		}
		static ::System::Int32* StaticGet_SQLTicksPerDay()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinXmlDateTime_TypeDefinitionIndex)->GetStaticField(0xE88);
		}
		static ::System::Int32* StaticGet_SQLTicksPerMinute()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BinXmlDateTime_TypeDefinitionIndex)->GetStaticField(0xE8C);
		}
		static ::System::Double* StaticGet_SQLTicksPerMillisecond()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(BinXmlDateTime_TypeDefinitionIndex)->GetStaticField(0xE90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME__CCTOR_OFFSET))();
		}

		static ::System::Void Write2Dig(::System::Text::StringBuilder* sb, ::System::Int32 val)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITE2DIG_OFFSET))(sb, val);
		}

		static ::System::Void Write4DigNeg(::System::Text::StringBuilder* sb, ::System::Int32 val)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITE4DIGNEG_OFFSET))(sb, val);
		}

		static ::System::Void Write3Dec(::System::Text::StringBuilder* sb, ::System::Int32 val)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITE3DEC_OFFSET))(sb, val);
		}

		static ::System::Void WriteDate(::System::Text::StringBuilder* sb, ::System::Int32 yr, ::System::Int32 mnth, ::System::Int32 day)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITEDATE_OFFSET))(sb, yr, mnth, day);
		}

		static ::System::Void WriteTime(::System::Text::StringBuilder* sb, ::System::Int32 hr, ::System::Int32 min, ::System::Int32 sec, ::System::Int32 ms)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIME_OFFSET))(sb, hr, min, sec, ms);
		}

		static ::System::Void WriteTimeFullPrecision(::System::Text::StringBuilder* sb, ::System::Int32 hr, ::System::Int32 min, ::System::Int32 sec, ::System::Int32 fraction)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIMEFULLPRECISION_OFFSET))(sb, hr, min, sec, fraction);
		}

		static ::System::Void WriteTimeZone(::System::Text::StringBuilder* sb, ::System::TimeSpan zone)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_OFFSET))(sb, zone);
		}

		static ::System::Void WriteTimeZone_1(::System::Text::StringBuilder* sb, ::System::Boolean negTimeZone, ::System::Int32 hr, ::System::Int32 min)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_1_OFFSET))(sb, negTimeZone, hr, min);
		}

		static ::System::Void BreakDownXsdDateTime(::System::Int64 val, ::System::Int32& yr, ::System::Int32& mnth, ::System::Int32& day, ::System::Int32& hr, ::System::Int32& min, ::System::Int32& sec, ::System::Int32& ms)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATETIME_OFFSET))(val, yr, mnth, day, hr, min, sec, ms);
		}

		static ::System::Void BreakDownXsdDate(::System::Int64 val, ::System::Int32& yr, ::System::Int32& mnth, ::System::Int32& day, ::System::Boolean& negTimeZone, ::System::Int32& hr, ::System::Int32& min)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Boolean&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATE_OFFSET))(val, yr, mnth, day, negTimeZone, hr, min);
		}

		static ::System::Void BreakDownXsdTime(::System::Int64 val, ::System::Int32& hr, ::System::Int32& min, ::System::Int32& sec, ::System::Int32& ms)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDTIME_OFFSET))(val, hr, min, sec, ms);
		}

		static ::System::String* XsdDateTimeToString(::System::Int64 val)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDDATETIMETOSTRING_OFFSET))(val);
		}

		static ::System::String* XsdDateToString(::System::Int64 val)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDDATETOSTRING_OFFSET))(val);
		}

		static ::System::String* XsdTimeToString(::System::Int64 val)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDTIMETOSTRING_OFFSET))(val);
		}

		static ::System::String* SqlDateTimeToString(::System::Int32 dateticks, ::System::UInt32 timeticks)
		{
			return ((::System::String*(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETOSTRING_OFFSET))(dateticks, timeticks);
		}

		static ::System::DateTime SqlDateTimeToDateTime(::System::Int32 dateticks, ::System::UInt32 timeticks)
		{
			return ((::System::DateTime(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETODATETIME_OFFSET))(dateticks, timeticks);
		}

		static ::System::String* SqlSmallDateTimeToString(::System::Int16 dateticks, ::System::UInt16 timeticks)
		{
			return ((::System::String*(*)(::System::Int16, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETOSTRING_OFFSET))(dateticks, timeticks);
		}

		static ::System::DateTime SqlSmallDateTimeToDateTime(::System::Int16 dateticks, ::System::UInt16 timeticks)
		{
			return ((::System::DateTime(*)(::System::Int16, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETODATETIME_OFFSET))(dateticks, timeticks);
		}

		static ::System::DateTime XsdKatmaiDateToDateTime(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::DateTime(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETODATETIME_OFFSET))(data, offset);
		}

		static ::System::DateTime XsdKatmaiDateTimeToDateTime(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::DateTime(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETODATETIME_OFFSET))(data, offset);
		}

		static ::System::DateTime XsdKatmaiTimeToDateTime(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::DateTime(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETODATETIME_OFFSET))(data, offset);
		}

		static ::System::DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::DateTimeOffset(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTODATETIMEOFFSET_OFFSET))(data, offset);
		}

		static ::System::DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::DateTimeOffset(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTODATETIMEOFFSET_OFFSET))(data, offset);
		}

		static ::System::DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::DateTimeOffset(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTODATETIMEOFFSET_OFFSET))(data, offset);
		}

		static ::System::String* XsdKatmaiDateToString(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETOSTRING_OFFSET))(data, offset);
		}

		static ::System::String* XsdKatmaiDateTimeToString(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETOSTRING_OFFSET))(data, offset);
		}

		static ::System::String* XsdKatmaiTimeToString(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETOSTRING_OFFSET))(data, offset);
		}

		static ::System::String* XsdKatmaiDateOffsetToString(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTOSTRING_OFFSET))(data, offset);
		}

		static ::System::String* XsdKatmaiDateTimeOffsetToString(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTOSTRING_OFFSET))(data, offset);
		}

		static ::System::String* XsdKatmaiTimeOffsetToString(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTOSTRING_OFFSET))(data, offset);
		}

		static ::System::Int64 GetKatmaiDateTicks(::Il2CppArray<::System::Byte>* data, ::System::Int32& pos)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETKATMAIDATETICKS_OFFSET))(data, pos);
		}

		static ::System::Int64 GetKatmaiTimeTicks(::Il2CppArray<::System::Byte>* data, ::System::Int32& pos)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMETICKS_OFFSET))(data, pos);
		}

		static ::System::Int64 GetKatmaiTimeZoneTicks(::Il2CppArray<::System::Byte>* data, ::System::Int32 pos)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMEZONETICKS_OFFSET))(data, pos);
		}

		static ::System::Int32 GetFractions(::System::DateTime dt)
		{
			return ((::System::Int32(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_OFFSET))(dt);
		}

		static ::System::Int32 GetFractions_1(::System::DateTimeOffset dt)
		{
			return ((::System::Int32(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_1_OFFSET))(dt);
		}
	};
}
