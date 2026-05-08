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

#define SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x99DF40)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_OFFSET UNITYSDK_OFFSET(0x99DF30)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_EQUALS_OFFSET UNITYSDK_OFFSET(0x99DF60)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99DF70)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1BA06490)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x74E200)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x99DC20)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BA05BD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BA05B20)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BA05190)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BA05570)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA059D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA057B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BA05AB0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B9FAD40)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B9FACA0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1B9FABF0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B9FAC90)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BA05A40)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1BA05690)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BA053D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BA052B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1BA05110)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SAMESIGNLONG_OFFSET UNITYSDK_OFFSET(0x1BA052A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x304470)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x99DFE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x99DFF0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLBYTE_OFFSET UNITYSDK_OFFSET(0x99DCE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0x99DEB0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x99DD50)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT16_OFFSET UNITYSDK_OFFSET(0x99DDD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT32_OFFSET UNITYSDK_OFFSET(0x99DE40)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99DC80)
#define SYSTEM_DATA_SQLTYPES_SQLINT64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA06510)
#define SYSTEM_DATA_SQLTYPES_SQLINT64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x98D6C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x985CC0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlInt64_TypeDefinitionIndex = 37105;

	struct alignas(8) SqlInt64
	{
		static ::System::Int64* StaticGet_s_lHighIntMask()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x8B50);
		}
		static ::System::Int64* StaticGet_s_lLowIntMask()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x8B58);
		}
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x8B60);
		}
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x8B70);
		}
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x8B80);
		}
		static ::System::Data::SqlTypes::SqlInt64* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt64_TypeDefinitionIndex)->GetStaticField(0x8B90);
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
