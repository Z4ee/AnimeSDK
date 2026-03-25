#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/Schema/XsdDateTimeFlags.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_DateTimeTypeCode.h"
#include "unitysdk/System/Xml/Schema/XsdDateTime_XsdDateTimeKind.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x20D2580)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET UNITYSDK_OFFSET(0x20FE870)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x20D26D0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x20CF6A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET UNITYSDK_OFFSET(0x20FE860)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x20D27A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x20D27E0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x20D27F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x20D2870)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET UNITYSDK_OFFSET(0x20CF690)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET UNITYSDK_OFFSET(0x14E6C20)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET UNITYSDK_OFFSET(0x20FE6A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x20FEA90)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x185A0EF0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x185A00A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET UNITYSDK_OFFSET(0x20FEA60)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET UNITYSDK_OFFSET(0x20FEA70)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET UNITYSDK_OFFSET(0x20FEA80)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x20FEB20)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20FEA50)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x185B67F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x185B7BD0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20FE540)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x20FE800)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x20FE810)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x20FE840)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x20FE530)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_TypeDefinitionIndex = 2222;

	struct alignas(8) XsdDateTime
	{
		static ::Il2CppArray<::System::Xml::Schema::XmlTypeCode>** StaticGet_typeCodes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlTypeCode>**)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x8580);
		}
		static ::System::Int32* StaticGet_Lz___()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4410);
		}
		static ::System::Int32* StaticGet_Lzyyyy_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4414);
		}
		static ::System::Int32* StaticGet_LzHH_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4418);
		}
		static ::System::Int32* StaticGet_Lz_zz_zz()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x441C);
		}
		static ::System::Int32* StaticGet_Lz__mm_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4420);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4424);
		}
		static ::System::Int32* StaticGet_Lz__mm_dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4428);
		}
		static ::System::Int32* StaticGet_Lz___dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x442C);
		}
		static ::System::Int32* StaticGet_Lzyyyy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4430);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4434);
		}
		static ::System::Int32* StaticGet_LzHH_mm_ss()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4438);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x443C);
		}
		static ::System::Int32* StaticGet_Lz_zz()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4440);
		}
		static ::System::Int32* StaticGet_Lz_zz_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4444);
		}
		static ::System::Int32* StaticGet_Lz__mm__()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4448);
		}
		static ::System::Int32* StaticGet_LzHH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x444C);
		}
		static ::System::Int32* StaticGet_LzHH_mm_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4450);
		}
		static ::System::Int32* StaticGet_Lz__()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4454);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_ddT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4458);
		}
		static ::System::Int32* StaticGet_Lz_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x445C);
		}
		static ::System::Int32* StaticGet_LzHH_mm()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4460);
		}
		static ::System::Int32* StaticGet_Lz__mm()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x4464);
		}
		::System::DateTime dt; // 0x10
		::System::UInt32 extra; // 0x18

		::System::Void _ctor(::System::String* text, ::System::Xml::Schema::XsdDateTimeFlags kinds)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_OFFSET))(this, text, kinds);
		}

		/*
		::System::Void _ctor_1(::System::Xml::Schema::XsdDateTime_Parser parser)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdDateTime_Parser))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_1_OFFSET))(this, parser);
		}
		*/

		::System::Void _ctor_2(::System::DateTime dateTime, ::System::Xml::Schema::XsdDateTimeFlags kinds)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_2_OFFSET))(this, dateTime, kinds);
		}

		/*
		::System::Void _ctor_3(::System::DateTimeOffset dateTimeOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_3_OFFSET))(this, dateTimeOffset);
		}
		*/

		/*
		::System::Void _ctor_4(::System::DateTimeOffset dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags kinds)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_4_OFFSET))(this, dateTimeOffset, kinds);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CCTOR_OFFSET))();
		}

		/*
		::System::Void InitiateXsdDateTime(::System::Xml::Schema::XsdDateTime_Parser parser)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdDateTime_Parser))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET))(this, parser);
		}
		*/

		static ::System::Boolean TryParse(::System::String* text, ::System::Xml::Schema::XsdDateTimeFlags kinds, ::System::Xml::Schema::XsdDateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Xml::Schema::XsdDateTimeFlags, ::System::Xml::Schema::XsdDateTime&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET))(text, kinds, result);
		}

		::System::Xml::Schema::XsdDateTime_DateTimeTypeCode get_InternalTypeCode()
		{
			return ((::System::Xml::Schema::XsdDateTime_DateTimeTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::XsdDateTime_XsdDateTimeKind get_InternalKind()
		{
			return ((::System::Xml::Schema::XsdDateTime_XsdDateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET))(this);
		}

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET))(this);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET))(this);
		}

		::System::Int32 get_Fraction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET))(this);
		}

		::System::Int32 get_ZoneHour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET))(this);
		}

		::System::Int32 get_ZoneMinute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET))(this);
		}

		static ::System::DateTime op_Implicit(::System::Xml::Schema::XsdDateTime xdt)
		{
			return ((::System::DateTime(*)(::System::Xml::Schema::XsdDateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET))(xdt);
		}

		/*
		static ::System::DateTimeOffset op_Implicit_1(::System::Xml::Schema::XsdDateTime xdt)
		{
			return ((::System::DateTimeOffset(*)(::System::Xml::Schema::XsdDateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_1_OFFSET))(xdt);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET))(this);
		}

		::System::Void PrintDate(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET))(this, sb);
		}

		::System::Void PrintTime(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET))(this, sb);
		}

		::System::Void PrintZone(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET))(this, sb);
		}

		::System::Void IntToCharArray(::Il2CppArray<::System::Char>* text, ::System::Int32 start, ::System::Int32 value, ::System::Int32 digits)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET))(this, text, start, value, digits);
		}

		::System::Void ShortToCharArray(::Il2CppArray<::System::Char>* text, ::System::Int32 start, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET))(this, text, start, value);
		}
	};
}
