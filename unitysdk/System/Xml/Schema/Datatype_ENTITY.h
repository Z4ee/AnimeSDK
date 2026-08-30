#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_NCName.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E7E9F90)
#define SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E7E9F80)
#define SYSTEM_XML_SCHEMA_DATATYPE_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E60A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_ENTITY_TypeDefinitionIndex = 2131;

	class Datatype_ENTITY : public ::System::Xml::Schema::Datatype_NCName
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENTITY__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TOKENIZEDTYPE_OFFSET))(this);
		}
	};
}
