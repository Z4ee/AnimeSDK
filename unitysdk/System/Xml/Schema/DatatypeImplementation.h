#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatype.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatypeVariety.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class DatatypeImplementation_SchemaDatatypeMap; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class RestrictionFacets; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET UNITYSDK_OFFSET(0x18582B70)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET UNITYSDK_OFFSET(0x185812A0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x18582830)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x1857F3F0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x185822C0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET UNITYSDK_OFFSET(0x185820D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x18582030)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET UNITYSDK_OFFSET(0x18582630)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x18582AD0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x18581F70)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x18582950)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x18582840)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0x18582940)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x185828E0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x18582930)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET UNITYSDK_OFFSET(0x18581FD0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x185828A0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x185828F0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x18582920)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x18582810)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x18582960)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x185821C0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18578580)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18582BD0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_TypeDefinitionIndex = 2077;

	class DatatypeImplementation : public ::System::Xml::Schema::XmlSchemaDatatype
	{
	public:
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_long()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7690);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_listFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7698);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnyType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76A0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_language()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76A8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_durationFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76B0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>** StaticGet_enumToTypeCode()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_hexBinary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76C0);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_untypedAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76C8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76D0);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_yearMonthDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76D8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedInt()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76E0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnySimpleType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76E8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_binaryFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76F0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedByte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x76F8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedShort()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7700);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_double()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7708);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonPositiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7710);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_int()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7718);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_date()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7720);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XdrTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7728);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_string()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7730);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyURI()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7738);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_unionFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7740);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_year()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7748);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_monthDay()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7750);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dayTimeDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7758);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QNameXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7760);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_untypedAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7768);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREF()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7770);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_doubleXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7778);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_decimal()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7780);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anyAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7788);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XsdTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7790);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_token()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7798);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonthDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77A0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77A8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKENS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77B0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_char()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_time()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77C0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_boolean()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77C8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKEN()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77D0);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_miscFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77D8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NCName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77E0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77E8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_short()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77F0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonth()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x77F8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedLong()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7800);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ID()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7808);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedStringV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7810);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_qnameFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7818);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_base64Binary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7820);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_day()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7828);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anySimpleType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7830);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_fixed()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7838);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_byte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7840);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_month()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7848);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7850);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_stringFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7858);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_integer()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonNegativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7868);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_dateTimeFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7870);
		}
		static ::System::Collections::Hashtable** StaticGet_builtinTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7878);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITIES()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7880);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric2FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7888);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7890);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_floatXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7898);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENUMERATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78A0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NOTATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78A8);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypesXsd()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78B0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_tokenV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREFS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78C0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_Name()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78C8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_float()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78D0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedString()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78D8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_negativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78E0);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_dayTimeDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78E8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_uuid()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78F0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anySimpleType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x78F8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITY()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7900);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7908);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_positiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7910);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTime()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7918);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7920);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_duration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x7928);
		}
		::System::Xml::Schema::XmlSchemaType* parentSchemaType; // 0x10
		::System::Xml::Schema::XmlValueConverter* valueConverter; // 0x18
		::System::Xml::Schema::DatatypeImplementation* baseType; // 0x20
		::System::Xml::Schema::RestrictionFacets* restriction; // 0x28
		::System::Xml::Schema::XmlSchemaDatatypeVariety variety; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* get_AnySimpleType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* get_UntypedAtomicType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET))();
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET))(token);
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromTypeName(::System::String* name)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET))(name);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaDatatype* dataType)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET))(qname, dataType);
		}

		static ::System::Void FinishBuiltinType(::System::Xml::Schema::XmlSchemaSimpleType* derivedType, ::System::Xml::Schema::XmlSchemaSimpleType* baseType)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET))(derivedType, baseType);
		}

		static ::System::Void CreateBuiltinTypes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET))(typeCode);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Int32 minSize, ::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET))(this, minSize, schemaType);
		}

		::System::Boolean IsEqual(::System::Object* o1, ::System::Object* o2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET))(this, o1, o2);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatypeVariety(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::RestrictionFacets* get_Restriction()
		{
			return ((::System::Xml::Schema::RestrictionFacets*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET))(this, s, nameTable, nsmgr);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET))(this);
		}

		::System::Int32 Compare(::Il2CppArray<::System::Byte>* value1, ::Il2CppArray<::System::Byte>* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET))(this, value1, value2);
		}
	};
}
