#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentModel.h"

namespace System::Xml::Schema { class XmlSchemaContent; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1DC46CD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1DC46CC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC46CE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaComplexContent_TypeDefinitionIndex = 2128;

	class XmlSchemaComplexContent : public ::System::Xml::Schema::XmlSchemaContentModel
	{
	public:
		::System::Xml::Schema::XmlSchemaContent* content; // 0x50
		::System::Boolean hasMixedAttribute; // 0x58
		::System::Boolean isMixed; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT__CTOR_OFFSET))(this);
		}

		::System::Void set_IsMixed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_SET_ISMIXED_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaContent* get_Content()
		{
			return ((::System::Xml::Schema::XmlSchemaContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_CONTENT_OFFSET))(this);
		}
	};
}
