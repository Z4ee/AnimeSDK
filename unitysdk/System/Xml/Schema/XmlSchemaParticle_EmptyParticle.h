#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_EMPTYPARTICLE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1EA2F700)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_EMPTYPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F710)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaParticle_EmptyParticle_TypeDefinitionIndex = 2181;

	class XmlSchemaParticle_EmptyParticle : public ::System::Xml::Schema::XmlSchemaParticle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_EMPTYPARTICLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_EMPTYPARTICLE_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
