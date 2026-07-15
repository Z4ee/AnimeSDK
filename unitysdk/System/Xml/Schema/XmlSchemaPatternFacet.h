#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAPATTERNFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x19677180)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaPatternFacet_TypeDefinitionIndex = 2192;

	class XmlSchemaPatternFacet : public ::System::Xml::Schema::XmlSchemaFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPATTERNFACET__CTOR_OFFSET))(this);
		}
	};
}
