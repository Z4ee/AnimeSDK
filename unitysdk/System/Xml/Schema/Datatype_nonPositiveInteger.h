#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_integer.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1BAE3470)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BAE34D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAE34E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7C70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_nonPositiveInteger_TypeDefinitionIndex = 2134;

	class Datatype_nonPositiveInteger : public ::System::Xml::Schema::Datatype_integer
	{
	public:
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_nonPositiveInteger_TypeDefinitionIndex)->GetStaticField(0x1C5D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
