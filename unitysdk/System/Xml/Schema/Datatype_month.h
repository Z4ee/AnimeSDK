#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_dateTimeBase.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_MONTH_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1B96DF00)
#define SYSTEM_XML_SCHEMA_DATATYPE_MONTH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B96DF10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_month_TypeDefinitionIndex = 2014;

	class Datatype_month : public ::System::Xml::Schema::Datatype_dateTimeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTH__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTH_GET_TYPECODE_OFFSET))(this);
		}
	};
}
