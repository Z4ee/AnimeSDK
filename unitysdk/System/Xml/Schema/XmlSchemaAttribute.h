#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaUse.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_CLONE_OFFSET UNITYSDK_OFFSET(0x1C16F9C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1C16F970)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C16F9A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1C16F990)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C16F9B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x1C16F830)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_SCHEMATYPENAME_OFFSET UNITYSDK_OFFSET(0x1C16F8D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16FB20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAttribute_TypeDefinitionIndex = 2120;

	class XmlSchemaAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* defaultValue; // 0x50
		::System::Xml::XmlQualifiedName* typeName; // 0x58
		::System::String* name; // 0x60
		::System::Xml::XmlQualifiedName* qualifiedName; // 0x68
		::System::String* fixedValue; // 0x70
		::System::Xml::Schema::SchemaAttDef* attDef; // 0x78
		::System::Xml::XmlQualifiedName* refName; // 0x80
		::System::Xml::Schema::XmlSchemaSimpleType* type; // 0x88
		::System::Xml::Schema::XmlSchemaSimpleType* attributeType; // 0x90
		::System::Xml::Schema::XmlSchemaUse use; // 0x98
		::System::Xml::Schema::XmlSchemaForm form; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_REFNAME_OFFSET))(this, value);
		}

		::System::Void set_SchemaTypeName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_SCHEMATYPENAME_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Datatype()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SETQUALIFIEDNAME_OFFSET))(this, value);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_CLONE_OFFSET))(this);
		}
	};
}
