#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1858C3A0)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1858C330)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1858C800)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1858CA00)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1857E770)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DateTimeFacetsChecker_TypeDefinitionIndex = 2147;

	class DateTimeFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_1(::System::DateTime value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::DateTime, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, value, datatype);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}

		::System::Boolean MatchEnumeration_1(::System::DateTime value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, value, enumeration, datatype);
		}
	};
}
