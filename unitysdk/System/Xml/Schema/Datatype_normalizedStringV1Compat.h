#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_string.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1DE40B70)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1DE40B60)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE40B80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_normalizedStringV1Compat_TypeDefinitionIndex = 2019;

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

		::System::Boolean get_HasValueFacets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_HASVALUEFACETS_OFFSET))(this);
		}
	};
}
