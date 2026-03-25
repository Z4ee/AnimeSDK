#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaGroupBase.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACHOICE_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x185ADF00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaChoice_TypeDefinitionIndex = 2176;

	class XmlSchemaChoice : public ::System::Xml::Schema::XmlSchemaGroupBase
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x38

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACHOICE_GET_ITEMS_OFFSET))(this);
		}
	};
}
