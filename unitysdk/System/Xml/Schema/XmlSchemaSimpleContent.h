#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentModel.h"

namespace System::Xml::Schema { class XmlSchemaContent; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1F14EEF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F14EF00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleContent_TypeDefinitionIndex = 2185;

	class XmlSchemaSimpleContent : public ::System::Xml::Schema::XmlSchemaContentModel
	{
	public:
		::System::Xml::Schema::XmlSchemaContent* content; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaContent* get_Content()
		{
			return ((::System::Xml::Schema::XmlSchemaContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_GET_CONTENT_OFFSET))(this);
		}
	};
}
