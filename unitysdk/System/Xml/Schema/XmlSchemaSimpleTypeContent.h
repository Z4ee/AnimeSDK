#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPECONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5FE50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeContent_TypeDefinitionIndex = 2201;

	class XmlSchemaSimpleTypeContent : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPECONTENT__CTOR_OFFSET))(this);
		}
	};
}
