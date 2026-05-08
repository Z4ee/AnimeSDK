#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1B994A10)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1B994900)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1B994D40)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1B994E50)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B994ED0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DurationFacetsChecker_TypeDefinitionIndex = 2058;

	class DurationFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_1(::System::TimeSpan value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::TimeSpan, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, value, datatype);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}

		::System::Boolean MatchEnumeration_1(::System::TimeSpan value, ::System::Collections::ArrayList* enumeration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, value, enumeration);
		}
	};
}
