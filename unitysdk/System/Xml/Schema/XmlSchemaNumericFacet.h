#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaFacet.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMANUMERICFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA29A80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaNumericFacet_TypeDefinitionIndex = 2144;

	class XmlSchemaNumericFacet : public ::System::Xml::Schema::XmlSchemaFacet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANUMERICFACET__CTOR_OFFSET))(this);
		}
	};
}
