#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E820190)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaGroupBase_TypeDefinitionIndex = 2201;

	class XmlSchemaGroupBase : public ::System::Xml::Schema::XmlSchemaParticle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE__CTOR_OFFSET))(this);
		}
	};
}
