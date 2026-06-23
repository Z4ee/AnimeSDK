#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA29A90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaXPath_TypeDefinitionIndex = 2162;

	class XmlSchemaXPath : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* xpath; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH__CTOR_OFFSET))(this);
		}
	};
}
