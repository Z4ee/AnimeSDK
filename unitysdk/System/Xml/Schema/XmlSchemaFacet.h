#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_ISFIXED_OFFSET UNITYSDK_OFFSET(0x1F2543C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F254450)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaFacet_TypeDefinitionIndex = 2143;

	class XmlSchemaFacet : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* value; // 0x50
		::System::Boolean isFixed; // 0x58
		::System::Xml::Schema::FacetType facetType; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET__CTOR_OFFSET))(this);
		}

		::System::Void set_IsFixed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_ISFIXED_OFFSET))(this, value);
		}
	};
}
