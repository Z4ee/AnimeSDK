#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAMINEXCLUSIVEFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFD040)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaMinExclusiveFacet_TypeDefinitionIndex = 2151;

	class XmlSchemaMinExclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAMINEXCLUSIVEFACET__CTOR_OFFSET))(this);
		}
	};
}
