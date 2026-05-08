#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaIdentityConstraint.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAUNIQUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACC600)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaUnique_TypeDefinitionIndex = 2164;

	class XmlSchemaUnique : public ::System::Xml::Schema::XmlSchemaIdentityConstraint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAUNIQUE__CTOR_OFFSET))(this);
		}
	};
}
