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

#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKBUILTINFACETS_OFFSET UNITYSDK_OFFSET(0x1DCEA220)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1DCEA210)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1DCEA050)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1DCE9FE0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_GET_LANGUAGEPATTERN_OFFSET UNITYSDK_OFFSET(0x1DCE9EE0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1DCEA580)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1DCEA850)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEA8C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int StringFacetsChecker_TypeDefinitionIndex = 2059;

	class StringFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_languagePattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(StringFacetsChecker_TypeDefinitionIndex)->GetStaticField(0x1DF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::Regex* get_LanguagePattern()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_GET_LANGUAGEPATTERN_OFFSET))();
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_1(::System::String* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_2(::System::String* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype, ::System::Boolean verifyUri)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, value, datatype, verifyUri);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}

		::System::Boolean MatchEnumeration_1(::System::String* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, value, enumeration, datatype);
		}

		::System::Exception* CheckBuiltInFacets(::System::String* s, ::System::Xml::Schema::XmlTypeCode typeCode, ::System::Boolean verifyUri)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlTypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKBUILTINFACETS_OFFSET))(this, s, typeCode, verifyUri);
		}
	};
}
