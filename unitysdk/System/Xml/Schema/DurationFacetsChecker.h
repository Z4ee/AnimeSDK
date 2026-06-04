#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1AE3B480)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1AE3B370)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1AE3B7B0)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1AE3B8C0)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2D2F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DurationFacetsChecker_TypeDefinitionIndex = 2147;

	class DurationFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_1(::System::TimeSpan a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::TimeSpan, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MatchEnumeration(::System::Object* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchEnumeration_1(::System::TimeSpan a1, ::System::Collections::ArrayList* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, a1, a2);
		}
	};
}
