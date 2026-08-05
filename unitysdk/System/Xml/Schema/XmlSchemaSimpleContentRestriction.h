#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContent.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x1ECAA1C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAA260)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleContentRestriction_TypeDefinitionIndex = 2187;

	class XmlSchemaSimpleContentRestriction : public ::System::Xml::Schema::XmlSchemaContent
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* facets; // 0x50
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x58
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x60
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x68
		::System::Xml::Schema::XmlSchemaSimpleType* baseType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION__CTOR_OFFSET))(this);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_BASETYPENAME_OFFSET))(this, value);
		}
	};
}
