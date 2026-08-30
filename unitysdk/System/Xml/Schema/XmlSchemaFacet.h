#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_FACETTYPE_OFFSET UNITYSDK_OFFSET(0x1B07A810)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B07A800)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07A820)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaFacet_TypeDefinitionIndex = 2198;

	class XmlSchemaFacet : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* value; // 0x10
		::System::Xml::Schema::FacetType facetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET__CTOR_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void set_FacetType(::System::Xml::Schema::FacetType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::FacetType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_FACETTYPE_OFFSET))(this, a1);
		}
	};
}
