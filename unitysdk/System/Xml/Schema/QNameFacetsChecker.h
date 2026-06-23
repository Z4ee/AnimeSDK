#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1DE42B10)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1DE429C0)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1DE42D20)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1DE42ED0)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE431B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int QNameFacetsChecker_TypeDefinitionIndex = 2060;

	class QNameFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_1(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, value, datatype);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}

		::System::Boolean MatchEnumeration_1(::System::Xml::XmlQualifiedName* value, ::System::Collections::ArrayList* enumeration)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, value, enumeration);
		}
	};
}
