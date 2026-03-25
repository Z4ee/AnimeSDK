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

#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKLEXICALFACETS_OFFSET UNITYSDK_OFFSET(0x1858D120)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKPATTERNFACETS_OFFSET UNITYSDK_OFFSET(0x1858D200)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_10_OFFSET UNITYSDK_OFFSET(0x1858D490)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_11_OFFSET UNITYSDK_OFFSET(0x1858D4A0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET UNITYSDK_OFFSET(0x1858D400)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET UNITYSDK_OFFSET(0x1858D410)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET UNITYSDK_OFFSET(0x1858D420)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET UNITYSDK_OFFSET(0x1858D430)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_5_OFFSET UNITYSDK_OFFSET(0x1858D440)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_6_OFFSET UNITYSDK_OFFSET(0x1858D450)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_7_OFFSET UNITYSDK_OFFSET(0x1858D460)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_8_OFFSET UNITYSDK_OFFSET(0x1858D470)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_9_OFFSET UNITYSDK_OFFSET(0x1858D480)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1858D3F0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKWHITESPACEFACETS_OFFSET UNITYSDK_OFFSET(0x1858D150)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x1858D4B0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_POWER_OFFSET UNITYSDK_OFFSET(0x1858D4C0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18577660)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int FacetsChecker_TypeDefinitionIndex = 2143;

	class FacetsChecker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER__CTOR_OFFSET))(this);
		}

		::System::Exception* CheckLexicalFacets(::System::String*& parseString, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*&, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKLEXICALFACETS_OFFSET))(this, parseString, datatype);
		}

		::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_1(::System::Decimal value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Decimal, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_1_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_2(::System::Int64 value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int64, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_2_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_3(::System::Int32 value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_3_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_4(::System::Int16 value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Int16, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_4_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_5(::System::DateTime value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::DateTime, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_5_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_6(::System::Double value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Double, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_6_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_7(::System::Single value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Single, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_7_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_8(::System::String* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_8_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_9(::Il2CppArray<::System::Byte>* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_9_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_10(::System::TimeSpan value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::TimeSpan, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_10_OFFSET))(this, value, datatype);
		}

		::System::Exception* CheckValueFacets_11(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_11_OFFSET))(this, value, datatype);
		}

		::System::Void CheckWhitespaceFacets(::System::String*& s, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKWHITESPACEFACETS_OFFSET))(this, s, datatype);
		}

		::System::Exception* CheckPatternFacets(::System::Xml::Schema::RestrictionFacets* restriction, ::System::String* value)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::Schema::RestrictionFacets*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKPATTERNFACETS_OFFSET))(this, restriction, value);
		}

		::System::Boolean MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_MATCHENUMERATION_OFFSET))(this, value, enumeration, datatype);
		}

		static ::System::Decimal Power(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Decimal(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_POWER_OFFSET))(x, y);
		}
	};
}
