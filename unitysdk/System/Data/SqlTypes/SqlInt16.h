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

#define SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0xA292D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA292C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0xA292E0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA292F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1D9FDB70)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x7D28C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA29060)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1D9FD2E0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1D9FD220)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1D9FCBD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1D9FCE50)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D9FD0D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1D9FCFE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1D9FD1B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D9FCF50)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D9FCAF0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1D9FD140)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D9FCD50)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1D9FCC90)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1D9FCB60)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x332AB0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0xA29360)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0xA29370)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0xA29120)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0xA291A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA290C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9FDBF0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA29050)
#define SYSTEM_DATA_SQLTYPES_SQLINT16__CTOR_OFFSET UNITYSDK_OFFSET(0xA29040)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlInt16_TypeDefinitionIndex = 38720;

	struct alignas(2) SqlInt16
	{
		static ::System::Data::SqlTypes::SqlInt16* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlInt16*)Il2CppClass::FromTypeDefinitionIndex(SqlInt16_TypeDefinitionIndex)->GetStaticField(0x9070);
		}
		static ::System::Data::SqlTypes::SqlInt16* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlInt16*)Il2CppClass::FromTypeDefinitionIndex(SqlInt16_TypeDefinitionIndex)->GetStaticField(0x9074);
		}
		static ::System::Data::SqlTypes::SqlInt16* StaticGet_Zero()
		{
			return (::System::Data::SqlTypes::SqlInt16*)Il2CppClass::FromTypeDefinitionIndex(SqlInt16_TypeDefinitionIndex)->GetStaticField(0x9078);
		}
		static ::System::Data::SqlTypes::SqlInt16* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlInt16*)Il2CppClass::FromTypeDefinitionIndex(SqlInt16_TypeDefinitionIndex)->GetStaticField(0x907C);
		}
		static ::System::Int32* StaticGet_s_MASKI2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlInt16_TypeDefinitionIndex)->GetStaticField(0x9080);
		}
		::System::Boolean m_fNotNull; // 0x10
		::System::Int16 m_value; // 0x12

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GET_ISNULL_OFFSET))(this);
		}

		::System::Int16 get_Value()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GET_VALUE_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlInt16 op_Implicit(::System::Int16 x)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_OFFSET))(x);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::SqlInt16 op_UnaryNegation(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_UNARYNEGATION_OFFSET))(x);
		}

		static ::System::Data::SqlTypes::SqlInt16 op_Addition(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_ADDITION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt16 op_Subtraction(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_SUBTRACTION_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt16 op_Multiply(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_MULTIPLY_OFFSET))(x, y);
		}

		static ::System::Data::SqlTypes::SqlInt16 op_Division(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_DIVISION_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlInt16 op_Implicit_1(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_1_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlInt16 op_Explicit(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EXPLICIT_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlInt64 ToSqlInt64()
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLINT64_OFFSET))(this);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlInt16 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
