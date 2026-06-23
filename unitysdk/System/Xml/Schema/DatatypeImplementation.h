#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatype.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatypeVariety.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Exception; }
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
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D2CDF00)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET UNITYSDK_OFFSET(0x1D2CB060)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1D2CD5C0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_1_OFFSET UNITYSDK_OFFSET(0x1D2CABD0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x1D2CD100)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1D2CCF90)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYUNION_OFFSET UNITYSDK_OFFSET(0x1D2CD110)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x1D2CC160)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET UNITYSDK_OFFSET(0x1D2CBF60)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXDRNAME_OFFSET UNITYSDK_OFFSET(0x1D2CBE70)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPEXSD_OFFSET UNITYSDK_OFFSET(0x1D2CBDD0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1D2CBD30)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETNORMALIZEDSTRINGTYPEV1COMPAT_OFFSET UNITYSDK_OFFSET(0x1D2CC900)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETPRIMITIVETYPECODE_OFFSET UNITYSDK_OFFSET(0x1D2CCD60)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET UNITYSDK_OFFSET(0x1D2CC7A0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1D2CC840)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTOKENTYPEV1COMPAT_OFFSET UNITYSDK_OFFSET(0x1D2CCB30)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1D2CD880)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1D2CD700)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1D2CD5D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASLEXICALFACETS_OFFSET UNITYSDK_OFFSET(0x1D2CD4B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x1D2CD6E0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0x1D2CD6D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1D2CD670)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D2CD6C0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1D2CD630)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D2CD680)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x1D2CD6B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISCOMPARABLE_OFFSET UNITYSDK_OFFSET(0x1D2CD4F0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x1D2CD270)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1D2CD4D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D2CD940)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D2CD710)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x1D2CC050)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D2CDAB0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_VERIFYSCHEMAVALID_OFFSET UNITYSDK_OFFSET(0x1D2CD260)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C4810)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CDF60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_TypeDefinitionIndex = 1986;

	class DatatypeImplementation : public ::System::Xml::Schema::XmlSchemaDatatype
	{
	public:
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1590);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ID()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1598);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonthDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15A0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_time()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15A8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_qnameFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15B0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKEN()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_positiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15C0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_month()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15C8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENUMERATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15D0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedShort()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15D8);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15E0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_float()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15E8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedInt()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15F0);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_durationFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x15F8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_year()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1600);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyURI()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1608);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_duration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1610);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_dayTimeDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1618);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_fixed()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1620);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_Name()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1628);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_binaryFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1630);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREFS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1638);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1640);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_boolean()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1648);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_miscFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1650);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_stringFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1658);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_language()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1660);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_byte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1668);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_dateTimeFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1670);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_uuid()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1678);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_monthDay()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1680);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedLong()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1688);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dayTimeDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1690);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_day()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1698);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_normalizedStringTypeV1Compat()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16A0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_negativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16A8);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XdrTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16B0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedString()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16C0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16C8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_unionFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16D0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anySimpleType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16D8);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_untypedAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16E0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITY()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16E8);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anySimpleType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16F0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QNameXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x16F8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>** StaticGet_enumToTypeCode()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1700);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_char()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1708);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonth()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1710);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anyAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1718);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1720);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric2FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1728);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NOTATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1730);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTime()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1738);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_short()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1740);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_doubleXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1748);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_string()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1750);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonNegativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1758);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonPositiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1760);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedStringV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1768);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NCName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1770);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_base64Binary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1778);
		}
		static ::System::Collections::Hashtable** StaticGet_builtinTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1780);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_listFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1788);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_hexBinary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1790);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_long()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1798);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypesXsd()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17A0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_integer()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17A8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_double()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17B0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnySimpleType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17B8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17C0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_tokenV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17C8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_decimal()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17D0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKENS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17D8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedByte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17E0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_date()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17E8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_token()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17F0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnyType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x17F8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_untypedAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1800);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITIES()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1808);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XsdTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1810);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_tokenTypeV1Compat()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1818);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREF()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1820);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_floatXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1828);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_yearMonthDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1830);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_int()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x1838);
		}
		::System::Xml::Schema::XmlSchemaType* parentSchemaType; // 0x10
		::System::Xml::Schema::XmlValueConverter* valueConverter; // 0x18
		::System::Xml::Schema::RestrictionFacets* restriction; // 0x20
		::System::Xml::Schema::DatatypeImplementation* baseType; // 0x28
		::System::Xml::Schema::XmlSchemaDatatypeVariety variety; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET))(token);
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedTypeXsd(::System::Xml::XmlTokenizedType token)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPEXSD_OFFSET))(token);
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromXdrName(::System::String* name)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXDRNAME_OFFSET))(name);
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

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromXsdType(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMXSDTYPE_OFFSET))(qname);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetNormalizedStringTypeV1Compat()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETNORMALIZEDSTRINGTYPEV1COMPAT_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetTokenTypeV1Compat()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTOKENTYPEV1COMPAT_OFFSET))();
		}

		static ::System::Xml::Schema::XmlTypeCode GetPrimitiveTypeCode(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETPRIMITIVETYPECODE_OFFSET))(typeCode);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByRestriction(::System::Xml::Schema::XmlSchemaObjectCollection* facets, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYRESTRICTION_OFFSET))(this, facets, nameTable, schemaType);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET))(this, schemaType);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList_1(::System::Int32 minSize, ::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_1_OFFSET))(this, minSize, schemaType);
		}

		static ::System::Xml::Schema::DatatypeImplementation* DeriveByUnion(::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* types, ::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>*, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYUNION_OFFSET))(types, schemaType);
		}

		::System::Void VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* notations, ::System::Xml::Schema::XmlSchemaObject* caller)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_VERIFYSCHEMAVALID_OFFSET))(this, notations, caller);
		}

		::System::Boolean IsDerivedFrom(::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISDERIVEDFROM_OFFSET))(this, datatype);
		}

		::System::Boolean IsEqual(::System::Object* o1, ::System::Object* o2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET))(this, o1, o2);
		}

		::System::Boolean IsComparable(::System::Xml::Schema::XmlSchemaDatatype* dtype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISCOMPARABLE_OFFSET))(this, dtype);
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

		::System::Boolean get_HasLexicalFacets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASLEXICALFACETS_OFFSET))(this);
		}

		::System::Boolean get_HasValueFacets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASVALUEFACETS_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET))(this, s, nameTable, nsmgr);
		}

		::System::Object* ParseValue_1(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Boolean createAtomicValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_1_OFFSET))(this, s, nameTable, nsmgr, createAtomicValue);
		}

		::System::Exception* TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* namespaceResolver, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_TRYPARSEVALUE_OFFSET))(this, value, nameTable, namespaceResolver, typedValue);
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
