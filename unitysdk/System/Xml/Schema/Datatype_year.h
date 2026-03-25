#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_dateTimeBase.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_YEAR_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1858C120)
#define SYSTEM_XML_SCHEMA_DATATYPE_YEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18580C20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_year_TypeDefinitionIndex = 2101;

	class Datatype_year : public ::System::Xml::Schema::Datatype_dateTimeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEAR__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEAR_GET_TYPECODE_OFFSET))(this);
		}
	};
}
