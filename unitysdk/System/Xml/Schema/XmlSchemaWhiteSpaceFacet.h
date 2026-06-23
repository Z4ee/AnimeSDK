#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAWHITESPACEFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC48140)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaWhiteSpaceFacet_TypeDefinitionIndex = 2156;

	class XmlSchemaWhiteSpaceFacet : public ::System::Xml::Schema::XmlSchemaFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAWHITESPACEFACET__CTOR_OFFSET))(this);
		}
	};
}
