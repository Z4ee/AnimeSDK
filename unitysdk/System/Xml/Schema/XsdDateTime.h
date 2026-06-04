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

#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3834090)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET UNITYSDK_OFFSET(0x386C470)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x38341E0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x3831180)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET UNITYSDK_OFFSET(0x386C460)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x38342B0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x38342F0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3834420)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x38344A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET UNITYSDK_OFFSET(0x3831170)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET UNITYSDK_OFFSET(0x84E50)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET UNITYSDK_OFFSET(0x386C2A0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x386C780)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AE4F5C0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AE4E470)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET UNITYSDK_OFFSET(0x386C750)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET UNITYSDK_OFFSET(0x386C760)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET UNITYSDK_OFFSET(0x386C770)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x386C810)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x386C740)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1AE65A40)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE670D0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x386C140)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x386C400)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x386C410)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x386C440)
#define SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x386C130)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_TypeDefinitionIndex = 2223;

	struct alignas(8) XsdDateTime
	{
		static ::Il2CppArray<::System::Xml::Schema::XmlTypeCode>** StaticGet_typeCodes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlTypeCode>**)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x16120);
		}
		static ::System::Int32* StaticGet_Lz_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F00);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F04);
		}
		static ::System::Int32* StaticGet_Lz___dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F08);
		}
		static ::System::Int32* StaticGet_LzHH_mm()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F0C);
		}
		static ::System::Int32* StaticGet_LzHH_mm_ss()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F10);
		}
		static ::System::Int32* StaticGet_Lz__mm_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F14);
		}
		static ::System::Int32* StaticGet_Lzyyyy_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F18);
		}
		static ::System::Int32* StaticGet_LzHH_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F1C);
		}
		static ::System::Int32* StaticGet_Lz__mm_dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F20);
		}
		static ::System::Int32* StaticGet_Lz___()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F24);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F28);
		}
		static ::System::Int32* StaticGet_Lz__()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F2C);
		}
		static ::System::Int32* StaticGet_Lz__mm__()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F30);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F34);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_ddT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F38);
		}
		static ::System::Int32* StaticGet_Lzyyyy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F3C);
		}
		static ::System::Int32* StaticGet_LzHH_mm_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F40);
		}
		static ::System::Int32* StaticGet_Lz_zz_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F44);
		}
		static ::System::Int32* StaticGet_Lz_zz_zz()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F48);
		}
		static ::System::Int32* StaticGet_Lz_zz()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F4C);
		}
		static ::System::Int32* StaticGet_LzHH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F50);
		}
		static ::System::Int32* StaticGet_Lz__mm()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XsdDateTime_TypeDefinitionIndex)->GetStaticField(0x7F54);
		}
		::System::DateTime dt; // 0x10
		::System::UInt32 extra; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_1(::System::Xml::Schema::XsdDateTime_Parser a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdDateTime_Parser))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_1_OFFSET))(this, a1);
		}
		*/

		::System::Void _ctor_2(::System::DateTime a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_2_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_3(::System::DateTimeOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_3_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void _ctor_4(::System::DateTimeOffset a1, ::System::Xml::Schema::XsdDateTimeFlags a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CTOR_4_OFFSET))(this, a1, a2);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME__CCTOR_OFFSET))();
		}

		/*
		::System::Void InitiateXsdDateTime(::System::Xml::Schema::XsdDateTime_Parser a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdDateTime_Parser))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean TryParse(::System::String* a1, ::System::Xml::Schema::XsdDateTimeFlags a2, ::System::Xml::Schema::XsdDateTime& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Xml::Schema::XsdDateTimeFlags, ::System::Xml::Schema::XsdDateTime&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET))(a1, a2, a3);
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

		static ::System::DateTime op_Implicit(::System::Xml::Schema::XsdDateTime a1)
		{
			return ((::System::DateTime(*)(::System::Xml::Schema::XsdDateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		static ::System::DateTimeOffset op_Implicit_1(::System::Xml::Schema::XsdDateTime a1)
		{
			return ((::System::DateTimeOffset(*)(::System::Xml::Schema::XsdDateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET))(this);
		}

		::System::Void PrintDate(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET))(this, a1);
		}

		::System::Void PrintTime(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET))(this, a1);
		}

		::System::Void PrintZone(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET))(this, a1);
		}

		::System::Void IntToCharArray(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ShortToCharArray(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET))(this, a1, a2, a3);
		}
	};
}
