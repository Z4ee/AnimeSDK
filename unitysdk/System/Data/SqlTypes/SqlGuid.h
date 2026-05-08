#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/EComparison.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x92C130)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x92C120)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AC6B330)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x92C140)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92C150)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1AC6BDD0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x396A90)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x92C020)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC6B5A0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AC6B6C0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AC6B290)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AC6B630)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x304470)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x92C160)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x92C170)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92C0A0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC6BE50)
#define SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x92BFF0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_OFFSET UNITYSDK_OFFSET(0x383610)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlGuid_TypeDefinitionIndex = 37102;

	struct alignas(8) SqlGuid
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_s_rgiGuidOrder()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SqlGuid_TypeDefinitionIndex)->GetStaticField(0x27470);
		}
		static ::System::Data::SqlTypes::SqlGuid* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlGuid*)Il2CppClass::FromTypeDefinitionIndex(SqlGuid_TypeDefinitionIndex)->GetStaticField(0x27478);
		}
		static ::System::Int32* StaticGet_s_sizeOfGuid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlGuid_TypeDefinitionIndex)->GetStaticField(0x8CF0);
		}
		::Il2CppArray<::System::Byte>* m_value; // 0x10

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_OFFSET))(this, fNull);
		}

		/*
		::System::Void _ctor_1(::System::Guid g)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID__CTOR_1_OFFSET))(this, g);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GET_ISNULL_OFFSET))(this);
		}

		/*
		::System::Guid get_Value()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GET_VALUE_OFFSET))(this);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlGuid op_Implicit(::System::Guid x)
		{
			return ((::System::Data::SqlTypes::SqlGuid(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_IMPLICIT_OFFSET))(x);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_TOSTRING_OFFSET))(this);
		}

		static ::System::Data::SqlTypes::EComparison Compare(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::EComparison(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARE_OFFSET))(x, y);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlGuid, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlGuid value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlGuid))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_1_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
