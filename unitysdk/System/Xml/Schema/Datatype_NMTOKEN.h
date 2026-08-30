#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_token.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BADC640)
#define SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BADC630)
#define SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7BC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_NMTOKEN_TypeDefinitionIndex = 2126;

	class Datatype_NMTOKEN : public ::System::Xml::Schema::Datatype_token
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TOKENIZEDTYPE_OFFSET))(this);
		}
	};
}
