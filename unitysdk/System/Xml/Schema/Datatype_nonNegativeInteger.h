#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_integer.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1E7F25B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E7F2610)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F2620)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E6EA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_nonNegativeInteger_TypeDefinitionIndex = 2140;

	class Datatype_nonNegativeInteger : public ::System::Xml::Schema::Datatype_integer
	{
	public:
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_nonNegativeInteger_TypeDefinitionIndex)->GetStaticField(0x19870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONNEGATIVEINTEGER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
