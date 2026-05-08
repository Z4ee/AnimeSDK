#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaIdentityConstraint.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCAC50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaKey_TypeDefinitionIndex = 2165;

	class XmlSchemaKey : public ::System::Xml::Schema::XmlSchemaIdentityConstraint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAKEY__CTOR_OFFSET))(this);
		}
	};
}
