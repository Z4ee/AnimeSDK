#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_dateTimeBase.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DATE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1AB0A5C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0A5D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_date_TypeDefinitionIndex = 2009;

	class Datatype_date : public ::System::Xml::Schema::Datatype_dateTimeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATE_GET_TYPECODE_OFFSET))(this);
		}
	};
}
