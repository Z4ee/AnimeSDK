#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1AE3BF90)
#define SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1AE3C290)
#define SYSTEM_XML_SCHEMA_LISTFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2D300)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ListFacetsChecker_TypeDefinitionIndex = 2153;

	class ListFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LISTFACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Boolean MatchEnumeration(::System::Object* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LISTFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, a1, a2, a3);
		}
	};
}
