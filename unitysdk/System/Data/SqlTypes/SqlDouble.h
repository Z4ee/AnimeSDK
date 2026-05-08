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

#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x985EB0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x985EA0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x985ED0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x985EE0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1B6302C0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x74E200)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x985D60)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1B6298C0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B6297F0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B6291D0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B629310)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B62FD70)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1B62FDE0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B62F3D0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B62F500)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1B62F6A0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1B62F7D0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1B62F910)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1B62FA40)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1B62FC10)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B629100)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B629720)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B6294A0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B6295E0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B62F2E0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x304470)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x985F50)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x985F60)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSQLSINGLE_OFFSET UNITYSDK_OFFSET(0x985E30)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x985DC0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B630340)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x985CD0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x985CC0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlDouble_TypeDefinitionIndex = 37101;

	struct alignas(8) SqlDouble
	{
		static ::System::Data::SqlTypes::SqlDouble* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlDouble*)Il2CppClass::FromTypeDefinitionIndex(SqlDouble_TypeDefinitionIndex)->GetStaticField(0x8C00);
		}
		static ::System::Data::SqlTypes::SqlDouble* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlDouble*)Il2CppClass::FromTypeDefinitionIndex(SqlDouble_TypeDefinitionIndex)->GetStaticField(0x8C10);
		}
		static ::System::Data::SqlTypes::SqlDouble* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlDouble*)Il2CppClass::FromTypeDefinitionIndex(SqlDouble_TypeDefinitionIndex)->GetStaticField(0x8C20);
		}
		static ::System::Data::SqlTypes::SqlDouble* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlDouble*)Il2CppClass::FromTypeDefinitionIndex(SqlDouble_TypeDefinitionIndex)->GetStaticField(0x8C30);
		}
		::System::Boolean m_fNotNull; // 0x10
		::System::Double m_value; // 0x18

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_ISNULL_OFFSET))(this);
		}

		::System::Double get_Value()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_VALUE_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlDouble op_Implicit(::System::Double x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlDouble op_UnaryNegation(::System::Data::SqlTypes::SqlDouble x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlDouble op_Addition(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlDouble op_Subtraction(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlDouble op_Multiply(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlDouble op_Division(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_DIVISION_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlDouble op_Implicit_1(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_1_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDouble op_Implicit_2(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_2_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDouble op_Implicit_3(::System::Data::SqlTypes::SqlInt32 x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_3_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDouble op_Implicit_4(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_4_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDouble op_Implicit_5(::System::Data::SqlTypes::SqlSingle x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlSingle))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_5_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDouble op_Implicit_6(::System::Data::SqlTypes::SqlMoney x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_6_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDouble op_Implicit_7(::System::Data::SqlTypes::SqlDecimal x)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_7_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlSingle ToSqlSingle()
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSQLSINGLE_OFFSET))(this);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlDouble value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlDouble))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
