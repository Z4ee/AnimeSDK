#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_dateTimeBase.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DATETIMETIMEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F993C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_dateTimeTimeZone_TypeDefinitionIndex = 2099;

	class Datatype_dateTimeTimeZone : public ::System::Xml::Schema::Datatype_dateTimeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATETIMETIMEZONE__CTOR_OFFSET))(this);
		}
	};
}
