#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0xA54EA0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA54E90)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA54ED0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMDATETIME_OFFSET UNITYSDK_OFFSET(0x1E0AF910)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1E0AFD50)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA54EE0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1E0B0CF0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_DAYTICKS_OFFSET UNITYSDK_OFFSET(0xA54CD0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x7D28C0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_TIMETICKS_OFFSET UNITYSDK_OFFSET(0xA54D30)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA54CC0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E0B04B0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E0B03E0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E0B0260)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E0B0360)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E0B0050)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E0B02E0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0xA54F10)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0xA54F20)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1E0AFBB0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA54D90)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1E0AFB20)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B0D70)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA54B90)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA54CB0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0xA54B80)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlDateTime_TypeDefinitionIndex = 38716;

	struct alignas(4) SqlDateTime
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_s_daysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x290F0);
		}
		static ::System::String** StaticGet_s_ISO8601_DateTimeFormat()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x290F8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_daysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x29100);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_dateTimeFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x29108);
		}
		static ::System::TimeSpan* StaticGet_s_maxTimeSpan()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9120);
		}
		static ::System::Int32* StaticGet_s_minDay()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9128);
		}
		static ::System::Int32* StaticGet_s_maxYear()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x912C);
		}
		static ::System::TimeSpan* StaticGet_s_minTimeSpan()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9130);
		}
		static ::System::Int32* StaticGet_s_maxTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9138);
		}
		static ::System::Int32* StaticGet_SQLTicksPerHour()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x913C);
		}
		static ::System::DateTime* StaticGet_s_minDateTime()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9140);
		}
		static ::System::Int64* StaticGet_s_ticksPerSecond()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9148);
		}
		static ::System::Data::SqlTypes::SqlDateTime* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlDateTime*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9150);
		}
		static ::System::Int32* StaticGet_s_SQLTicksPerDay()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x915C);
		}
		static ::System::Int32* StaticGet_s_dayBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9160);
		}
		static ::System::Int32* StaticGet_s_minTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9164);
		}
		static ::System::DateTime* StaticGet_s_maxDateTime()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9168);
		}
		static ::System::Data::SqlTypes::SqlDateTime* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlDateTime*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9170);
		}
		static ::System::Int32* StaticGet_SQLTicksPerSecond()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x917C);
		}
		static ::System::Int32* StaticGet_s_maxDay()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9180);
		}
		static ::System::Data::SqlTypes::SqlDateTime* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlDateTime*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9184);
		}
		static ::System::DateTime* StaticGet_s_SQLBaseDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9190);
		}
		static ::System::Int64* StaticGet_s_SQLBaseDateTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x9198);
		}
		static ::System::Int32* StaticGet_SQLTicksPerMinute()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x91A0);
		}
		static ::System::Int32* StaticGet_s_minYear()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x91A4);
		}
		static ::System::Double* StaticGet_s_SQLTicksPerMillisecond()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDateTime_TypeDefinitionIndex)->GetStaticField(0x91A8);
		}
		::System::Boolean m_fNotNull; // 0x10
		::System::Int32 m_day; // 0x14
		::System::Int32 m_time; // 0x18

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Int32 dayTicks, ::System::Int32 timeTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME__CTOR_2_OFFSET))(this, dayTicks, timeTicks);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_ISNULL_OFFSET))(this);
		}

		static ::System::TimeSpan ToTimeSpan(::System::Data::SqlTypes::SqlDateTime value)
		{
			return ((::System::TimeSpan(*)(::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOTIMESPAN_OFFSET))(value);
		}

		static ::System::DateTime ToDateTime(::System::Data::SqlTypes::SqlDateTime value)
		{
			return ((::System::DateTime(*)(::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_TODATETIME_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDateTime FromTimeSpan(::System::TimeSpan value)
		{
			return ((::System::Data::SqlTypes::SqlDateTime(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMTIMESPAN_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDateTime FromDateTime(::System::DateTime value)
		{
			return ((::System::Data::SqlTypes::SqlDateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMDATETIME_OFFSET))(value);
		}

		::System::DateTime get_Value()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_DayTicks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_DAYTICKS_OFFSET))(this);
		}

		::System::Int32 get_TimeTicks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_TIMETICKS_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlDateTime op_Implicit(::System::DateTime value)
		{
			return ((::System::Data::SqlTypes::SqlDateTime(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_IMPLICIT_OFFSET))(value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDateTime x, ::System::Data::SqlTypes::SqlDateTime y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDateTime, ::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlDateTime value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlDateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
