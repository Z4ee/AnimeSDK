#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1AE3ABC0)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1AE3AB50)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1AE3B020)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1AE3B220)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2D2E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DateTimeFacetsChecker_TypeDefinitionIndex = 2148;

	class DateTimeFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_1(::System::DateTime a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::DateTime, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MatchEnumeration(::System::Object* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchEnumeration_1(::System::DateTime a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
