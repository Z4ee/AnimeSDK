#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKTOTALANDFRACTIONDIGITS_OFFSET UNITYSDK_OFFSET(0x1BAE1260)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1BAE96A0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1BAEA400)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET UNITYSDK_OFFSET(0x1BAEA470)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET UNITYSDK_OFFSET(0x1BAEA4E0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1BAE9550)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1BAEA190)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1BAEA550)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAEA730)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADED20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Numeric10FacetsChecker_TypeDefinitionIndex = 2156;

	class Numeric10FacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_signs()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Numeric10FacetsChecker_TypeDefinitionIndex)->GetStaticField(0x1CD40);
		}
		::System::Decimal maxValue; // 0x10
		::System::Decimal minValue; // 0x20

		::System::Void _ctor(::System::Decimal a1, ::System::Decimal a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CCTOR_OFFSET))();
		}

		::System::Exception* CheckValueFacets(::System::Object* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_1(::System::Decimal a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Decimal, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_2(::System::Int64 a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int64, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_3(::System::Int32 a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET))(this, a1, a2);
		}

		::System::Exception* CheckValueFacets_4(::System::Int16 a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int16, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean MatchEnumeration(::System::Object* a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlSchemaDatatype* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MatchEnumeration_1(::System::Decimal a1, ::System::Collections::ArrayList* a2, ::System::Xml::Schema::XmlValueConverter* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Exception* CheckTotalAndFractionDigits(::System::Decimal a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Decimal, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKTOTALANDFRACTIONDIGITS_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
