#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_normalizedStringV1Compat.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_TOKENV1COMPAT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1AE391E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_TOKENV1COMPAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2FAA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_tokenV1Compat_TypeDefinitionIndex = 2113;

	class Datatype_tokenV1Compat : public ::System::Xml::Schema::Datatype_normalizedStringV1Compat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKENV1COMPAT__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKENV1COMPAT_GET_TYPECODE_OFFSET))(this);
		}
	};
}
