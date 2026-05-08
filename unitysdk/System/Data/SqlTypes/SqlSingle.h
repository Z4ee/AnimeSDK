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

#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x92C410)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x92C400)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x92C420)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92C430)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1AC6DA80)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x74E200)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x92C2B0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AC6D2F0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AC6D230)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1AC6C2A0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1AC6C660)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC6D0B0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1AC6CF70)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AC6D1B0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AC6C7E0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1AC6C8E0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1AC6C9E0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1AC6CB10)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1AC6CC50)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1AC6CE20)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AC6C0C0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AC6D130)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1AC6C520)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AC6C3E0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1AC6C1B0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x304470)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x92C4B0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x92C4C0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x92C380)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92C310)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC6DB00)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x92C190)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x92C220)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x92C180)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlSingle_TypeDefinitionIndex = 37107;

	struct alignas(4) SqlSingle
	{
		static ::System::Data::SqlTypes::SqlSingle* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlSingle*)Il2CppClass::FromTypeDefinitionIndex(SqlSingle_TypeDefinitionIndex)->GetStaticField(0x8C40);
		}
		static ::System::Data::SqlTypes::SqlSingle* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlSingle*)Il2CppClass::FromTypeDefinitionIndex(SqlSingle_TypeDefinitionIndex)->GetStaticField(0x8C48);
		}
		static ::System::Data::SqlTypes::SqlSingle* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlSingle*)Il2CppClass::FromTypeDefinitionIndex(SqlSingle_TypeDefinitionIndex)->GetStaticField(0x8C50);
		}
		static ::System::Data::SqlTypes::SqlSingle* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlSingle*)Il2CppClass::FromTypeDefinitionIndex(SqlSingle_TypeDefinitionIndex)->GetStaticField(0x8C58);
		}
		::System::Boolean _fNotNull; // 0x10
		::System::Single _value; // 0x14

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE__CTOR_2_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_ISNULL_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_VALUE_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlSingle op_Implicit(::System::Single x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlSingle op_UnaryNegation(::System::Data::SqlTypes::SqlSingle x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlSingle op_Addition(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlSingle op_Subtraction(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlSingle op_Multiply(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlSingle op_Division(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_DIVISION_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlSingle op_Implicit_1(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_1_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlSingle op_Implicit_2(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_2_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlSingle op_Implicit_3(::System::Data::SqlTypes::SqlInt32 x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_3_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlSingle op_Implicit_4(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_4_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlSingle op_Implicit_5(::System::Data::SqlTypes::SqlMoney x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_5_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlSingle op_Implicit_6(::System::Data::SqlTypes::SqlDecimal x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_6_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlSingle op_Explicit(::System::Data::SqlTypes::SqlDouble x)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EXPLICIT_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlSingle, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlSingle value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
