#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAMAXEXCLUSIVEFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A46BEF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaMaxExclusiveFacet_TypeDefinitionIndex = 2153;

	class XmlSchemaMaxExclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAMAXEXCLUSIVEFACET__CTOR_OFFSET))(this);
		}
	};
}
