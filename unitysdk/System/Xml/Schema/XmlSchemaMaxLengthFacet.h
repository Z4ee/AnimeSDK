#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaNumericFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAMAXLENGTHFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6A460)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaMaxLengthFacet_TypeDefinitionIndex = 2147;

	class XmlSchemaMaxLengthFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAMAXLENGTHFACET__CTOR_OFFSET))(this);
		}
	};
}
