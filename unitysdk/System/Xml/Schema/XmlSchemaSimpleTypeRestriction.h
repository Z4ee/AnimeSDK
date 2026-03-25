#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaSimpleTypeContent.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x185B0CC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x185B0D60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeRestriction_TypeDefinitionIndex = 2202;

	class XmlSchemaSimpleTypeRestriction : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
	public:
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x10
		::System::Xml::Schema::XmlSchemaObjectCollection* facets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION__CTOR_OFFSET))(this);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPENAME_OFFSET))(this, value);
		}
	};
}
