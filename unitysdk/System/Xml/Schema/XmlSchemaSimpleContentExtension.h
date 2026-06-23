#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContent.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x1D0D8590)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D8630)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleContentExtension_TypeDefinitionIndex = 2186;

	class XmlSchemaSimpleContentExtension : public ::System::Xml::Schema::XmlSchemaContent
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x50
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x58
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION__CTOR_OFFSET))(this);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SET_BASETYPENAME_OFFSET))(this, value);
		}
	};
}
