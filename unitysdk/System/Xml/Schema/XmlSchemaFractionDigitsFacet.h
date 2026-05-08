#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaNumericFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAFRACTIONDIGITSFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE8E4A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaFractionDigitsFacet_TypeDefinitionIndex = 2156;

	class XmlSchemaFractionDigitsFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFRACTIONDIGITSFACET__CTOR_OFFSET))(this);
		}
	};
}
