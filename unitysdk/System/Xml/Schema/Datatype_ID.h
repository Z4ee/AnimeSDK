#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_NCName.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BADAD80)
#define SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BADAD70)
#define SYSTEM_XML_SCHEMA_DATATYPE_ID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD74E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_ID_TypeDefinitionIndex = 2129;

	class Datatype_ID : public ::System::Xml::Schema::Datatype_NCName
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ID__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TOKENIZEDTYPE_OFFSET))(this);
		}
	};
}
