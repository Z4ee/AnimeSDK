#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAMININCLUSIVEFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9751D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaMinInclusiveFacet_TypeDefinitionIndex = 2152;

	class XmlSchemaMinInclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAMININCLUSIVEFACET__CTOR_OFFSET))(this);
		}
	};
}
