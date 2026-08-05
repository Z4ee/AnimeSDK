#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0xA94820)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA94810)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_EQUALS_OFFSET UNITYSDK_OFFSET(0xA94840)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA94850)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1F1B0FD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x7D8680)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA94500)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1F1B0710)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1F1B0660)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1F1AFCD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1F1B00B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F1B0510)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1F1B02F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1F1B05F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1F1A5DA0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1F1A5D00)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1F1A5C50)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F1A5CF0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1F1B0580)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1F1B01D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1F1AFF10)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1F1AFDF0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1F1AFC50)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SAMESIGNLONG_OFFSET UNITYSDK_OFFSET(0x1F1AFDE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0xA948C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0xA948D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLBYTE_OFFSET UNITYSDK_OFFSET(0xA945C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0xA94790)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0xA94630)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT16_OFFSET UNITYSDK_OFFSET(0xA946B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT32_OFFSET UNITYSDK_OFFSET(0xA94720)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA94560)
#define SYSTEM_DATA_SQLTYPES_SQLINT64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1B1050)
#define SYSTEM_DATA_SQLTYPES_SQLINT64__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA830D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B6E0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlInt64_TypeDefinitionIndex = 39383;

	struct alignas(8) SqlInt64
	{
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x9100);
		}
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x9110);
		}
		static ::System::Int64* StaticGet_s_lLowIntMask()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x9120);
		}
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x9128);
		}
		static ::System::Int64* StaticGet_s_lHighIntMask()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x9138);
		}
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x9140);
		}
		::System::Boolean m_fNotNull; // 0x10
		::System::Int64 m_value; // 0x18

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GET_ISNULL_OFFSET))(this);
		}

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GET_VALUE_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlInt64 op_Implicit(::System::Int64 x)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlInt64 op_UnaryNegation(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlInt64 op_Addition(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt64 op_Subtraction(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt64 op_Multiply(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt64 op_Division(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_DIVISION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt64 op_Modulus(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MODULUS_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlInt64 op_Implicit_1(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_1_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlInt64 op_Implicit_2(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_2_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlInt64 op_Implicit_3(::System::Data::SqlTypes::SqlInt32 x)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_3_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlInt64 op_Explicit(::System::Data::SqlTypes::SqlDecimal x)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EXPLICIT_OFFSET))(x);
		}
		*/

		static ::System::Boolean SameSignLong(::System::Int64 x, ::System::Int64 y)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SAMESIGNLONG_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlByte ToSqlByte()
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLBYTE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlInt16 ToSqlInt16()
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT16_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlInt32 ToSqlInt32()
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT32_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDecimal ToSqlDecimal()
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDECIMAL_OFFSET))(this);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlInt64 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
