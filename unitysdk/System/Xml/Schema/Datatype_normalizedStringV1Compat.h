#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_string.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1858A190)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18580E20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_normalizedStringV1Compat_TypeDefinitionIndex = 2110;

	class Datatype_normalizedStringV1Compat : public ::System::Xml::Schema::Datatype_string
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_TYPECODE_OFFSET))(this);
		}
	};
}
