#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaType.h"

namespace System::Xml::Schema { class XmlSchemaSimpleTypeContent; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x185B0BF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x185B0C00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x185B0B70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleType_TypeDefinitionIndex = 2199;

	class XmlSchemaSimpleType : public ::System::Xml::Schema::XmlSchemaType
	{
	public:
		::System::Xml::Schema::XmlSchemaSimpleTypeContent* content; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaSimpleTypeContent* get_Content()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleTypeContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleTypeContent*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_SET_CONTENT_OFFSET))(this, value);
		}
	};
}
