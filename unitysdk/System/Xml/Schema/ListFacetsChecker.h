#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1858D760)
#define SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1858DA60)
#define SYSTEM_XML_SCHEMA_LISTFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1857E790)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ListFacetsChecker_TypeDefinitionIndex = 2152;

	class ListFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LISTFACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}
	};
}
