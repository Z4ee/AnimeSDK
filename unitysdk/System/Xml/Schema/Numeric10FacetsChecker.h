#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKTOTALANDFRACTIONDIGITS_OFFSET UNITYSDK_OFFSET(0x1F24FFF0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1F24F510)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1F250570)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET UNITYSDK_OFFSET(0x1F250610)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET UNITYSDK_OFFSET(0x1F2506A0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1F24F490)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_1_OFFSET UNITYSDK_OFFSET(0x1F24FE70)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1F250740)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2507F0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F24DDC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Numeric10FacetsChecker_TypeDefinitionIndex = 2055;

	class Numeric10FacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_signs()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Numeric10FacetsChecker_TypeDefinitionIndex)->GetStaticField(0x22A0);
		}
		::System::Decimal maxValue; // 0x10
		::System::Decimal minValue; // 0x20

		::System::Void _ctor(::System::Decimal minVal, ::System::Decimal maxVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CTOR_OFFSET))(this, minVal, maxVal);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER__CCTOR_OFFSET))();
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_1(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Decimal, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_2(::System::Int64 value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int64, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_3(::System::Int32 value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_4(::System::Int16 value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int16, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET))(this, value, datatype);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}

		::System::Boolean MatchEnumeration_1(::System::Decimal value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_1_OFFSET))(this, value, enumeration, valueConverter);
		}

		::System::Exception* CheckTotalAndFractionDigits(::System::Decimal value, ::System::Int32 totalDigits, ::System::Int32 fractionDigits, ::System::Boolean checkTotal, ::System::Boolean checkFraction)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Decimal, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKTOTALANDFRACTIONDIGITS_OFFSET))(this, value, totalDigits, fractionDigits, checkTotal, checkFraction);
		}
	};
}
