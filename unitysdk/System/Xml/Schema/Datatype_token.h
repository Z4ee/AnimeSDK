#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_normalizedString.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x19FA6980)
#define SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x19FA6970)
#define SYSTEM_XML_SCHEMA_DATATYPE_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9ADC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_token_TypeDefinitionIndex = 2116;

	class Datatype_token : public ::System::Xml::Schema::Datatype_normalizedString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKEN__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}
	};
}
