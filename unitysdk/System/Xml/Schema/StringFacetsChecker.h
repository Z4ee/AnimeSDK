#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Text::RegularExpressions { class Regex; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKBUILTINFACETS_OFFSET UNITYSDK_OFFSET(0x1AE440F0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1AE440E0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1AE43DF0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1AE43D60)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_GET_LANGUAGEPATTERN_OFFSET UNITYSDK_OFFSET(0x1AE43CA0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1AE444C0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1AE447D0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE44840)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int StringFacetsChecker_TypeDefinitionIndex = 2149;

	class StringFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_languagePattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StringFacetsChecker_TypeDefinitionIndex)->GetStaticField(0x15560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::Regex* get_LanguagePattern()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_GET_LANGUAGEPATTERN_OFFSET))();
		}

		::System::Exception* CheckValueFacets(::System::Object* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_1(::System::String* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_2(::System::String* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2, ::System::Boolean a3)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchEnumeration(::System::Object* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchEnumeration_1(::System::String* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Exception* CheckBuiltInFacets(::System::String* a1, ::System::Xml::Schema::XmlTypeCode a2, ::System::Boolean a3)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlTypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKBUILTINFACETS_OFFSET))(this, a1, a2, a3);
		}
	};
}
