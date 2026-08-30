#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_nonNegativeInteger.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1BAE35A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BAE3600)
#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAE3610)
#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7DC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_positiveInteger_TypeDefinitionIndex = 2145;

	class Datatype_positiveInteger : public ::System::Xml::Schema::Datatype_nonNegativeInteger
	{
	public:
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_positiveInteger_TypeDefinitionIndex)->GetStaticField(0x1C600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
