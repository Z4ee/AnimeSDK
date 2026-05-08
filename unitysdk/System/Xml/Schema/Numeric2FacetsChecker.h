#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1B994F50)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1B995310)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1B994EE0)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1B995240)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1B995320)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B995450)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Numeric2FacetsChecker_TypeDefinitionIndex = 2057;

	class Numeric2FacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_1(::System::Double value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Double, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_2(::System::Single value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Single, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, value, datatype);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}

		::System::Boolean MatchEnumeration_1(::System::Double value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, value, enumeration, valueConverter);
		}
	};
}
