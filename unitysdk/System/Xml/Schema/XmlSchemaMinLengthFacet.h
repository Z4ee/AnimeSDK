#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaNumericFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAMINLENGTHFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E377030)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaMinLengthFacet_TypeDefinitionIndex = 2146;

	class XmlSchemaMinLengthFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAMINLENGTHFACET__CTOR_OFFSET))(this);
		}
	};
}
