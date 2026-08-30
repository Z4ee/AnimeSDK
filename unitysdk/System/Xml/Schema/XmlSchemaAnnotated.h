#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81DC60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnnotated_TypeDefinitionIndex = 2184;

	class XmlSchemaAnnotated : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED__CTOR_OFFSET))(this);
		}
	};
}
