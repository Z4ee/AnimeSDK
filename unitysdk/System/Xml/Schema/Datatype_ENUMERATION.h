#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_NMTOKEN.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x18582C80)
#define SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1857F600)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_ENUMERATION_TypeDefinitionIndex = 2137;

	class Datatype_ENUMERATION : public ::System::Xml::Schema::Datatype_NMTOKEN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION__CTOR_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION_GET_TOKENIZEDTYPE_OFFSET))(this);
		}
	};
}
