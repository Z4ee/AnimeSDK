#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaSimpleTypeContent.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1AE8E4B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x1AE82950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE82830)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeRestriction_TypeDefinitionIndex = 2192;

	class XmlSchemaSimpleTypeRestriction : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* facets; // 0x50
		::System::Xml::Schema::XmlSchemaSimpleType* baseType; // 0x58
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION__CTOR_OFFSET))(this);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPENAME_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_CLONE_OFFSET))(this);
		}
	};
}
