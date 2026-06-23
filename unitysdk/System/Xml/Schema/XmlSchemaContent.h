#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD22050)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaContent_TypeDefinitionIndex = 2132;

	class XmlSchemaContent : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACONTENT__CTOR_OFFSET))(this);
		}
	};
}
