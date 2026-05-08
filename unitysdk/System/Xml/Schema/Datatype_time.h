#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_dateTimeBase.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_TIME_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1B9946F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_TIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B994700)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_time_TypeDefinitionIndex = 2008;

	class Datatype_time : public ::System::Xml::Schema::Datatype_dateTimeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TIME__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TIME_GET_TYPECODE_OFFSET))(this);
		}
	};
}
