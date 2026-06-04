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

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AE31620)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET UNITYSDK_OFFSET(0x1AE2FE80)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1AE312C0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x1AE2DF60)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x1AE30D80)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET UNITYSDK_OFFSET(0x1AE30BA0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1AE30B10)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET UNITYSDK_OFFSET(0x1AE310D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1AE31580)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1AE30A50)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1AE313E0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1AE312D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0x1AE313D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1AE31370)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1AE313C0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET UNITYSDK_OFFSET(0x1AE30AB0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1AE31330)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AE31380)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x1AE313B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1AE312A0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1AE313F0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x1AE30C80)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE28100)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE31680)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_TypeDefinitionIndex = 2078;

	class DatatypeImplementation : public ::System::Xml::Schema::XmlSchemaDatatype
	{
	public:
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_doubleXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14180);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_float()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14188);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_duration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14190);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonNegativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14198);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_date()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141A0);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_miscFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141A8);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_untypedAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141B0);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anyAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTime()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141C0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_year()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141C8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_positiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141D0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_hexBinary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141D8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_tokenV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141E0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>** StaticGet_enumToTypeCode()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141E8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_token()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141F0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NOTATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x141F8);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14200);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_binaryFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14208);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_monthDay()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14210);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_unionFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14218);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedByte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14220);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric2FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14228);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anySimpleType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14230);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_language()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14238);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_qnameFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14240);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedShort()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14248);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_uuid()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14250);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_day()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14258);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_floatXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14260);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ID()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14268);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_yearMonthDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14270);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENUMERATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14278);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_double()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14280);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedInt()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14288);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_time()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14290);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QNameXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14298);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XdrTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142A0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyURI()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142A8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREF()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142B0);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XsdTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKENS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142C0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonth()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142C8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_dateTimeFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142D0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_byte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142D8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142E0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_int()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142E8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_untypedAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142F0);
		}
		static ::System::Collections::Hashtable** StaticGet_builtinTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x142F8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedStringV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14300);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITY()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14308);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_listFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14310);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14318);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_negativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14320);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonPositiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14328);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_char()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14330);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREFS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14338);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_dayTimeDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14340);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14348);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_short()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14350);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14358);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_fixed()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14360);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnySimpleType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14368);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dayTimeDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14370);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedLong()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14378);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_integer()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14380);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnyType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14388);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_durationFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14390);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NCName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14398);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143A0);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypesXsd()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143A8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_Name()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143B0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_string()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_month()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143C0);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anySimpleType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143C8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_boolean()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143D0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_base64Binary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143D8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedString()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143E0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143E8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_stringFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143F0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_long()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x143F8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_decimal()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14400);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonthDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14408);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKEN()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14410);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITIES()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x14418);
		}
		::System::Xml::Schema::RestrictionFacets* restriction; // 0x10
		::System::Xml::Schema::DatatypeImplementation* baseType; // 0x18
		::System::Xml::Schema::XmlSchemaType* parentSchemaType; // 0x20
		::System::Xml::Schema::XmlValueConverter* valueConverter; // 0x28
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

		static ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType a1)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET))(a1);
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromTypeName(::System::String* a1)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET))(a1);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(::System::Xml::XmlQualifiedName* a1, ::System::Xml::Schema::XmlSchemaDatatype* a2)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void FinishBuiltinType(::System::Xml::Schema::XmlSchemaSimpleType* a1, ::System::Xml::Schema::XmlSchemaSimpleType* a2)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void CreateBuiltinTypes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(::System::Xml::Schema::XmlTypeCode a1)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET))(a1);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Int32 a1, ::System::Xml::Schema::XmlSchemaType* a2)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEqual(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET))(this, a1, a2);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET))(this, a1);
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

		::System::Object* ParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET))(this);
		}

		::System::Int32 Compare(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
