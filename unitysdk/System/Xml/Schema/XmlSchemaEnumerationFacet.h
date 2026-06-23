#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAENUMERATIONFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CD8D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaEnumerationFacet_TypeDefinitionIndex = 2149;

	class XmlSchemaEnumerationFacet : public ::System::Xml::Schema::XmlSchemaFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAENUMERATIONFACET__CTOR_OFFSET))(this);
		}
	};
}
