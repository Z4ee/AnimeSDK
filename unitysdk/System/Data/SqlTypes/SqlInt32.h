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

#define SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x9B7780)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9B7770)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B7790)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B77A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1BE4D0B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x74E200)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B7510)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BE4C820)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BE4C760)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BE4BFC0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BE4C2D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BE4C610)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BE4C520)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BE4C6F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BE4C400)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1BE4C490)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BE4BEE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BE4C680)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BE4C1C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BE4C0C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1BE4BF50)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SAMESIGNINT_OFFSET UNITYSDK_OFFSET(0x1BE4C0B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x304470)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x9B7810)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x9B7820)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x9B75D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0x9B7650)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B7570)
#define SYSTEM_DATA_SQLTYPES_SQLINT32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE4D130)
#define SYSTEM_DATA_SQLTYPES_SQLINT32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9B7500)
#define SYSTEM_DATA_SQLTYPES_SQLINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x92C180)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlInt32_TypeDefinitionIndex = 37104;

	struct alignas(4) SqlInt32
	{
		static ::System::Int64* StaticGet_s_iIntMin()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt32_TypeDefinitionIndex)->GetStaticField(0x8BD0);
		}
		static ::System::Data::SqlTypes::SqlInt32* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlInt32_TypeDefinitionIndex)->GetStaticField(0x8BD8);
		}
		static ::System::Data::SqlTypes::SqlInt32* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlInt32_TypeDefinitionIndex)->GetStaticField(0x8BE0);
		}
		static ::System::Int64* StaticGet_s_lBitNotIntMax()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlInt32_TypeDefinitionIndex)->GetStaticField(0x8BE8);
		}
		static ::System::Data::SqlTypes::SqlInt32* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlInt32_TypeDefinitionIndex)->GetStaticField(0x8BF0);
		}
		static ::System::Data::SqlTypes::SqlInt32* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlInt32_TypeDefinitionIndex)->GetStaticField(0x8BF8);
		}
		::System::Boolean m_fNotNull; // 0x10
		::System::Int32 m_value; // 0x14

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GET_ISNULL_OFFSET))(this);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GET_VALUE_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlInt32 op_Implicit(::System::Int32 x)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlInt32 op_UnaryNegation(::System::Data::SqlTypes::SqlInt32 x)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlInt32 op_Addition(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt32 op_Subtraction(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt32 op_Multiply(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt32 op_Division(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_DIVISION_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlInt32 op_Implicit_1(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_1_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlInt32 op_Implicit_2(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_2_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlInt32 op_Explicit(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EXPLICIT_OFFSET))(x);
		}
		*/

		static ::System::Boolean SameSignInt(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SAMESIGNINT_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlInt64 ToSqlInt64()
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLINT64_OFFSET))(this);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlInt32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
