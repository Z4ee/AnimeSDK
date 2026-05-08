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

#define SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x98DB40)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x98DB30)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x98DB60)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98DB70)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1B809260)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x74E200)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98D770)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1B808A50)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B8089A0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B807D70)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B808240)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B808850)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1B808750)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1B808930)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B807BB0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B808390)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1B808490)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1B808590)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1B808690)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B807B80)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B8088C0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B8080F0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B807F30)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B807C90)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x304470)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x98DB90)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x98DBA0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x98D7F0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x98D810)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0x98DA00)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x98D980)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98D900)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8092E0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x98D6C0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x98D6D0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x98D740)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x98D750)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_OFFSET UNITYSDK_OFFSET(0x985CC0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlMoney_TypeDefinitionIndex = 37106;

	struct alignas(8) SqlMoney
	{
		static ::System::Int64* StaticGet_s_lTickBase()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8AE0);
		}
		static ::System::Int32* StaticGet_s_iMoneyScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8AE8);
		}
		static ::System::Int64* StaticGet_s_minLong()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8AF0);
		}
		static ::System::Data::SqlTypes::SqlMoney* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlMoney*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8AF8);
		}
		static ::System::Data::SqlTypes::SqlMoney* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlMoney*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8B08);
		}
		static ::System::Data::SqlTypes::SqlMoney* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlMoney*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8B18);
		}
		static ::System::Int64* StaticGet_s_maxLong()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8B28);
		}
		static ::System::Data::SqlTypes::SqlMoney* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlMoney*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8B30);
		}
		static ::System::Double* StaticGet_s_dTickBase()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlMoney_TypeDefinitionIndex)->GetStaticField(0x8B40);
		}
		::System::Boolean _fNotNull; // 0x10
		::System::Int64 _value; // 0x18

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Int64 value, ::System::Int32 ignored)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_1_OFFSET))(this, value, ignored);
		}

		::System::Void _ctor_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_3_OFFSET))(this, value);
		}

		/*
		::System::Void _ctor_4(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY__CTOR_4_OFFSET))(this, value);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_ISNULL_OFFSET))(this);
		}

		/*
		::System::Decimal get_Value()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_VALUE_OFFSET))(this);
		}
		*/

		/*
		::System::Decimal ToDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TODECIMAL_OFFSET))(this);
		}
		*/

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TODOUBLE_OFFSET))(this);
		}

		/*
		static ::System::Data::SqlTypes::SqlMoney op_Implicit(::System::Decimal x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET))(x);
		}
		*/

		static ::System::Data::SqlTypes::SqlMoney op_Implicit_1(::System::Int64 x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_1_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlMoney op_UnaryNegation(::System::Data::SqlTypes::SqlMoney x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlMoney op_Addition(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlMoney op_Subtraction(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlMoney op_Multiply(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlMoney op_Division(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_DIVISION_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlMoney op_Implicit_2(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_2_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlMoney op_Implicit_3(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_3_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlMoney op_Implicit_4(::System::Data::SqlTypes::SqlInt32 x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_4_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlMoney op_Implicit_5(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_5_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlMoney op_Explicit(::System::Data::SqlTypes::SqlDecimal x)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EXPLICIT_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlMoney, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDecimal ToSqlDecimal()
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDECIMAL_OFFSET))(this);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlMoney value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
