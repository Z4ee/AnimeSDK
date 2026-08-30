#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_string.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1E7F27C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E7F27B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E6EC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_normalizedString_TypeDefinitionIndex = 2121;

	class Datatype_normalizedString : public ::System::Xml::Schema::Datatype_string
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}
	};
}
