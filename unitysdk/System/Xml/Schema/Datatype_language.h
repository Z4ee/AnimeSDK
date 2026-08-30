#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_token.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_LANGUAGE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BAE2D00)
#define SYSTEM_XML_SCHEMA_DATATYPE_LANGUAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7770)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_language_TypeDefinitionIndex = 2125;

	class Datatype_language : public ::System::Xml::Schema::Datatype_token
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LANGUAGE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LANGUAGE_GET_TYPECODE_OFFSET))(this);
		}
	};
}
