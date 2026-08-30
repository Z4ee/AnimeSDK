#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1BAEA8B0)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1BAEAF40)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1BAEA780)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1BAEAD70)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1BAEAF50)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD6270)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Numeric2FacetsChecker_TypeDefinitionIndex = 2157;

	class Numeric2FacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_1(::System::Double a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Double, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_2(::System::Single a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Single, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean MatchEnumeration(::System::Object* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchEnumeration_1(::System::Double a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlValueConverter* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
