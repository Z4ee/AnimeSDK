#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaNumericFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMALENGTHFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4739D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaLengthFacet_TypeDefinitionIndex = 2145;

	class XmlSchemaLengthFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMALENGTHFACET__CTOR_OFFSET))(this);
		}
	};
}
