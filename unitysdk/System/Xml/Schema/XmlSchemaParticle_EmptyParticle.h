#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_EMPTYPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x185B04C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaParticle_EmptyParticle_TypeDefinitionIndex = 2196;

	class XmlSchemaParticle_EmptyParticle : public ::System::Xml::Schema::XmlSchemaParticle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAPARTICLE_EMPTYPARTICLE__CTOR_OFFSET))(this);
		}
	};
}
