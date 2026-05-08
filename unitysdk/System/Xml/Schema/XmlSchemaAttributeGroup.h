#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1B593310)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTEUSES_OFFSET UNITYSDK_OFFSET(0x1B593290)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B5932F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B593300)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B593490)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAttributeGroup_TypeDefinitionIndex = 2122;

	class XmlSchemaAttributeGroup : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Xml::Schema::XmlSchemaAttributeGroup* redefined; // 0x50
		::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard; // 0x58
		::System::Xml::Schema::XmlSchemaObjectTable* attributeUses; // 0x60
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x68
		::System::String* name; // 0x70
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x78
		::System::Xml::XmlQualifiedName* qname; // 0x80
		::System::Int32 selfReferenceCount; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTEUSES_OFFSET))(this);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_CLONE_OFFSET))(this);
		}
	};
}
