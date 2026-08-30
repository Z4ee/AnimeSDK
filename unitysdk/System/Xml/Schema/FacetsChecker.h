#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class RestrictionFacets; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKLEXICALFACETS_OFFSET UNITYSDK_OFFSET(0x1E7F6250)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKPATTERNFACETS_OFFSET UNITYSDK_OFFSET(0x1E7F6460)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_10_OFFSET UNITYSDK_OFFSET(0x1E7F6790)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_11_OFFSET UNITYSDK_OFFSET(0x1E7F67A0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1E7F6700)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1E7F6710)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET UNITYSDK_OFFSET(0x1E7F6720)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET UNITYSDK_OFFSET(0x1E7F6730)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_5_OFFSET UNITYSDK_OFFSET(0x1E7F6740)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_6_OFFSET UNITYSDK_OFFSET(0x1E7F6750)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_7_OFFSET UNITYSDK_OFFSET(0x1E7F6760)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_8_OFFSET UNITYSDK_OFFSET(0x1E7F6770)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_9_OFFSET UNITYSDK_OFFSET(0x1E7F6780)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1E7F66F0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKWHITESPACEFACETS_OFFSET UNITYSDK_OFFSET(0x1E7F6280)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1E7F67B0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_POWER_OFFSET UNITYSDK_OFFSET(0x1E7F67C0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DF1F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int FacetsChecker_TypeDefinitionIndex = 2155;

	class FacetsChecker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckLexicalFacets(::System::String*& a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*&, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKLEXICALFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets(::System::Object* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_1(::System::Decimal a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Decimal, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_2(::System::Int64 a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int64, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_3(::System::Int32 a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_4(::System::Int16 a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int16, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_5(::System::DateTime a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::DateTime, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_5_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_6(::System::Double a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Double, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_6_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_7(::System::Single a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Single, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_7_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_8(::System::String* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_8_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_9(::Il2CppArray<::System::Byte>* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_9_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_10(::System::TimeSpan a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::TimeSpan, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_10_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_11(::System::Xml::XmlQualifiedName* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_11_OFFSET))(this, a1, a2);
		}

		::System::Void CheckWhitespaceFacets(::System::String*& a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKWHITESPACEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckPatternFacets(::System::Xml::Schema::RestrictionFacets* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::Schema::RestrictionFacets*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKPATTERNFACETS_OFFSET))(this, a1, a2);
		}

		::System::Boolean MatchEnumeration(::System::Object* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_MATCHENUMERATION_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Decimal Power(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Decimal(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_POWER_OFFSET))(a1, a2);
		}
	};
}
