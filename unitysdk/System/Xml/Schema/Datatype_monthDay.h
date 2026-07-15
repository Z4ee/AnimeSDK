#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_dateTimeBase.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x19FA5D00)
#define SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9A340)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_monthDay_TypeDefinitionIndex = 2107;

	class Datatype_monthDay : public ::System::Xml::Schema::Datatype_dateTimeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY_GET_TYPECODE_OFFSET))(this);
		}
	};
}
