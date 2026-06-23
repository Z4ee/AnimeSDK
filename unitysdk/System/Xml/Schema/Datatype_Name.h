#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_token.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NAME_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1CFA4CA0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA4CB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_Name_TypeDefinitionIndex = 2024;

	class Datatype_Name : public ::System::Xml::Schema::Datatype_token
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NAME__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NAME_GET_TYPECODE_OFFSET))(this);
		}
	};
}
