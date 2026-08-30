#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/DtdParser_LiteralType.h"
#include "unitysdk/System/Xml/DtdParser_ScanningFunction.h"
#include "unitysdk/System/Xml/DtdParser_Token.h"
#include "unitysdk/System/Xml/LineInfo.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"
#include "unitysdk/System/Xml/XmlCharType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class DtdParser_UndeclaredNotation; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class IDtdParser; }
namespace System::Xml { class IDtdParserAdapter; }
namespace System::Xml { class IDtdParserAdapterWithValidation; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class ParticleContentValidator; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class SchemaEntity; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaException; }

#define SYSTEM_XML_DTDPARSER_ADDUNDECLAREDNOTATION_OFFSET UNITYSDK_OFFSET(0x1BAC2890)
#define SYSTEM_XML_DTDPARSER_CREATE_OFFSET UNITYSDK_OFFSET(0x1BABCD40)
#define SYSTEM_XML_DTDPARSER_EATPUBLICKEYWORD_OFFSET UNITYSDK_OFFSET(0x1BAC7A50)
#define SYSTEM_XML_DTDPARSER_EATSYSTEMKEYWORD_OFFSET UNITYSDK_OFFSET(0x1BAC7B10)
#define SYSTEM_XML_DTDPARSER_GETNAMEQUALIFIED_OFFSET UNITYSDK_OFFSET(0x1BABEEC0)
#define SYSTEM_XML_DTDPARSER_GETNAMESTRING_OFFSET UNITYSDK_OFFSET(0x1BAC2870)
#define SYSTEM_XML_DTDPARSER_GETNMTOKENSTRING_OFFSET UNITYSDK_OFFSET(0x1BAC2AB0)
#define SYSTEM_XML_DTDPARSER_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x1BABE2C0)
#define SYSTEM_XML_DTDPARSER_GETVALUEWITHSTRIPPEDSPACES_OFFSET UNITYSDK_OFFSET(0x1BAC2AD0)
#define SYSTEM_XML_DTDPARSER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1BAC2B30)
#define SYSTEM_XML_DTDPARSER_GET_BASEURISTR_OFFSET UNITYSDK_OFFSET(0x1BABE0B0)
#define SYSTEM_XML_DTDPARSER_GET_IGNOREENTITYREFERENCES_OFFSET UNITYSDK_OFFSET(0x1BABDDB0)
#define SYSTEM_XML_DTDPARSER_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x1BAC1960)
#define SYSTEM_XML_DTDPARSER_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x1BAC1990)
#define SYSTEM_XML_DTDPARSER_GET_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BABDE30)
#define SYSTEM_XML_DTDPARSER_GET_PARSINGINTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1BABDDA0)
#define SYSTEM_XML_DTDPARSER_GET_PARSINGTOPLEVELMARKUP_OFFSET UNITYSDK_OFFSET(0x1BABDE00)
#define SYSTEM_XML_DTDPARSER_GET_SAVEINTERNALSUBSETVALUE_OFFSET UNITYSDK_OFFSET(0x1BABDDC0)
#define SYSTEM_XML_DTDPARSER_GET_SUPPORTNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1BABDE20)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYEND_OFFSET UNITYSDK_OFFSET(0x1BAC77B0)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1BAC9400)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BAC4ED0)
#define SYSTEM_XML_DTDPARSER_INITIALIZEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1BABD020)
#define SYSTEM_XML_DTDPARSER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BABCE10)
#define SYSTEM_XML_DTDPARSER_ISATTRIBUTEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BAC2710)
#define SYSTEM_XML_DTDPARSER_LOADPARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1BABE270)
#define SYSTEM_XML_DTDPARSER_ONUNEXPECTEDERROR_OFFSET UNITYSDK_OFFSET(0x1BABEE70)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTDECL_OFFSET UNITYSDK_OFFSET(0x1BABFB40)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BAC2390)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTTYPE_OFFSET UNITYSDK_OFFSET(0x1BAC1AC0)
#define SYSTEM_XML_DTDPARSER_PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x1BAC1250)
#define SYSTEM_XML_DTDPARSER_PARSECONDSECTION_OFFSET UNITYSDK_OFFSET(0x1BAC1540)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1BAC04B0)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTMIXEDCONTENT_OFFSET UNITYSDK_OFFSET(0x1BAC30A0)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_OFFSET UNITYSDK_OFFSET(0x1BAC3DB0)
#define SYSTEM_XML_DTDPARSER_PARSEENTITYDECL_OFFSET UNITYSDK_OFFSET(0x1BAC0AA0)
#define SYSTEM_XML_DTDPARSER_PARSEEXTERNALID_OFFSET UNITYSDK_OFFSET(0x1BABF060)
#define SYSTEM_XML_DTDPARSER_PARSEEXTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1BABF6E0)
#define SYSTEM_XML_DTDPARSER_PARSEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1BABDE40)
#define SYSTEM_XML_DTDPARSER_PARSEHOWMANY_OFFSET UNITYSDK_OFFSET(0x1BAC41C0)
#define SYSTEM_XML_DTDPARSER_PARSEINDOCUMENTDTD_OFFSET UNITYSDK_OFFSET(0x1BABDED0)
#define SYSTEM_XML_DTDPARSER_PARSEINTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1BABF6D0)
#define SYSTEM_XML_DTDPARSER_PARSENOTATIONDECL_OFFSET UNITYSDK_OFFSET(0x1BAC0FD0)
#define SYSTEM_XML_DTDPARSER_PARSEPI_OFFSET UNITYSDK_OFFSET(0x1BAC1410)
#define SYSTEM_XML_DTDPARSER_PARSESUBSET_OFFSET UNITYSDK_OFFSET(0x1BABF7E0)
#define SYSTEM_XML_DTDPARSER_PARSEUNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x1BAC4F10)
#define SYSTEM_XML_DTDPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1BABD550)
#define SYSTEM_XML_DTDPARSER_READDATAINNAME_OFFSET UNITYSDK_OFFSET(0x1BAC8EF0)
#define SYSTEM_XML_DTDPARSER_READDATA_OFFSET UNITYSDK_OFFSET(0x1BAC7730)
#define SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1BAC18D0)
#define SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1BABF6C0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST1_OFFSET UNITYSDK_OFFSET(0x1BAC5FD0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST2_OFFSET UNITYSDK_OFFSET(0x1BAC6090)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST3_OFFSET UNITYSDK_OFFSET(0x1BAC65D0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST4_OFFSET UNITYSDK_OFFSET(0x1BAC6640)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST5_OFFSET UNITYSDK_OFFSET(0x1BAC66D0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST6_OFFSET UNITYSDK_OFFSET(0x1BAC6760)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST7_OFFSET UNITYSDK_OFFSET(0x1BAC6A40)
#define SYSTEM_XML_DTDPARSER_SCANCLOSINGTAG_OFFSET UNITYSDK_OFFSET(0x1BAC76D0)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION1_OFFSET UNITYSDK_OFFSET(0x1BAC6F90)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION2_OFFSET UNITYSDK_OFFSET(0x1BAC7230)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION3_OFFSET UNITYSDK_OFFSET(0x1BAC7290)
#define SYSTEM_XML_DTDPARSER_SCANDOCTYPE1_OFFSET UNITYSDK_OFFSET(0x1BAC5660)
#define SYSTEM_XML_DTDPARSER_SCANDOCTYPE2_OFFSET UNITYSDK_OFFSET(0x1BAC57A0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT1_OFFSET UNITYSDK_OFFSET(0x1BAC5840)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT2_OFFSET UNITYSDK_OFFSET(0x1BAC5B00)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT3_OFFSET UNITYSDK_OFFSET(0x1BAC5CB0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT4_OFFSET UNITYSDK_OFFSET(0x1BAC5D40)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT5_OFFSET UNITYSDK_OFFSET(0x1BAC5E00)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT6_OFFSET UNITYSDK_OFFSET(0x1BAC5EE0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT7_OFFSET UNITYSDK_OFFSET(0x1BAC5F70)
#define SYSTEM_XML_DTDPARSER_SCANENTITY1_OFFSET UNITYSDK_OFFSET(0x1BAC6CF0)
#define SYSTEM_XML_DTDPARSER_SCANENTITY2_OFFSET UNITYSDK_OFFSET(0x1BAC6D60)
#define SYSTEM_XML_DTDPARSER_SCANENTITY3_OFFSET UNITYSDK_OFFSET(0x1BAC6E90)
#define SYSTEM_XML_DTDPARSER_SCANENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1BAC8840)
#define SYSTEM_XML_DTDPARSER_SCANLITERAL_OFFSET UNITYSDK_OFFSET(0x1BAC7BD0)
#define SYSTEM_XML_DTDPARSER_SCANNAMEEXPECTED_OFFSET UNITYSDK_OFFSET(0x1BAC4FC0)
#define SYSTEM_XML_DTDPARSER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x1BAC78C0)
#define SYSTEM_XML_DTDPARSER_SCANNMTOKENEXPECTED_OFFSET UNITYSDK_OFFSET(0x1BAC5020)
#define SYSTEM_XML_DTDPARSER_SCANNMTOKEN_OFFSET UNITYSDK_OFFSET(0x1BAC78E0)
#define SYSTEM_XML_DTDPARSER_SCANNOTATION1_OFFSET UNITYSDK_OFFSET(0x1BAC6AB0)
#define SYSTEM_XML_DTDPARSER_SCANPUBLICID1_OFFSET UNITYSDK_OFFSET(0x1BAC6C20)
#define SYSTEM_XML_DTDPARSER_SCANPUBLICID2_OFFSET UNITYSDK_OFFSET(0x1BAC6C90)
#define SYSTEM_XML_DTDPARSER_SCANQNAMEEXPECTED_OFFSET UNITYSDK_OFFSET(0x1BAC4FF0)
#define SYSTEM_XML_DTDPARSER_SCANQNAME_1_OFFSET UNITYSDK_OFFSET(0x1BAC8CA0)
#define SYSTEM_XML_DTDPARSER_SCANQNAME_OFFSET UNITYSDK_OFFSET(0x1BAC78D0)
#define SYSTEM_XML_DTDPARSER_SCANSUBSETCONTENT_OFFSET UNITYSDK_OFFSET(0x1BAC5050)
#define SYSTEM_XML_DTDPARSER_SCANSYSTEMID_OFFSET UNITYSDK_OFFSET(0x1BAC6BA0)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1BAC2720)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1BABE120)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1BAC1780)
#define SYSTEM_XML_DTDPARSER_STRIPSPACES_OFFSET UNITYSDK_OFFSET(0x1BAC9160)
#define SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1BABDD60)
#define SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEINTERNALDTD_OFFSET UNITYSDK_OFFSET(0x1BABD520)
#define SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_1_OFFSET UNITYSDK_OFFSET(0x1BAC4E40)
#define SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_OFFSET UNITYSDK_OFFSET(0x1BABD480)
#define SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1BAC4BB0)
#define SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x1BAC1950)
#define SYSTEM_XML_DTDPARSER_THROW_1_OFFSET UNITYSDK_OFFSET(0x1BAC4A80)
#define SYSTEM_XML_DTDPARSER_THROW_2_OFFSET UNITYSDK_OFFSET(0x1BAC4CA0)
#define SYSTEM_XML_DTDPARSER_THROW_3_OFFSET UNITYSDK_OFFSET(0x1BAC19D0)
#define SYSTEM_XML_DTDPARSER_THROW_OFFSET UNITYSDK_OFFSET(0x1BAC1520)
#define SYSTEM_XML_DTDPARSER_VERIFYENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BAC8970)
#define SYSTEM_XML_DTDPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BABCC90)

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_TypeDefinitionIndex = 1931;

	class DtdParser : public ::System::Object
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x18
		::System::String* externalDtdBaseUri; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::DtdParser_UndeclaredNotation*>* undeclaredNotations; // 0x28
		::Il2CppArray<::System::Int32>* condSectionEntityIds; // 0x30
		::System::String* documentBaseUri; // 0x38
		::System::String* publicId; // 0x40
		::System::Xml::XmlCharType xmlCharType; // 0x48
		::System::Xml::IDtdParserAdapter* readerAdapter; // 0x50
		::System::Text::StringBuilder* stringBuilder; // 0x58
		::System::String* systemId; // 0x60
		::Il2CppArray<::System::Char>* chars; // 0x68
		::System::Text::StringBuilder* internalSubsetValueSb; // 0x70
		::System::Xml::IDtdParserAdapterWithValidation* readerAdapterWithValidation; // 0x78
		::System::Int32 colonPos; // 0x80
		::System::Boolean normalize; // 0x84
		::System::Boolean freeFloatingDtd; // 0x85
		::System::Boolean supportNamespaces; // 0x86
		::System::Char literalQuoteChar; // 0x88
		::System::Boolean whitespaceSeen; // 0x8A
		::System::Boolean hasFreeFloatingInternalSubset; // 0x8B
		::System::Int32 curPos; // 0x8C
		::System::Xml::DtdParser_ScanningFunction savedScanningFunction; // 0x90
		::System::Xml::DtdParser_ScanningFunction scanningFunction; // 0x94
		::System::Int32 condSectionDepth; // 0x98
		::System::Boolean v1Compat; // 0x9C
		::System::Boolean validate; // 0x9D
		::System::Xml::LineInfo literalLineInfo; // 0xA0
		::System::Int32 currentEntityId; // 0xA8
		::System::Int32 tokenStartPos; // 0xAC
		::System::Int32 externalEntitiesDepth; // 0xB0
		::System::Int32 charsUsed; // 0xB4
		::System::Xml::DtdParser_ScanningFunction nextScaningFunction; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER__CTOR_OFFSET))(this);
		}

		static ::System::Xml::IDtdParser* Create()
		{
			return ((::System::Xml::IDtdParser*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_CREATE_OFFSET))();
		}

		::System::Void Initialize(::System::Xml::IDtdParserAdapter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void InitializeFreeFloatingDtd(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Xml::IDtdParserAdapter* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_INITIALIZEFREEFLOATINGDTD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseInternalDtd(::System::Xml::IDtdParserAdapter* a1, ::System::Boolean a2)
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID, ::System::Xml::IDtdParserAdapter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEINTERNALDTD_OFFSET))(this, a1, a2);
		}

		::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseFreeFloatingDtd(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Xml::IDtdParserAdapter* a6)
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEFREEFLOATINGDTD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean get_ParsingInternalSubset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_PARSINGINTERNALSUBSET_OFFSET))(this);
		}

		::System::Boolean get_IgnoreEntityReferences()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_IGNOREENTITYREFERENCES_OFFSET))(this);
		}

		::System::Boolean get_SaveInternalSubsetValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_SAVEINTERNALSUBSETVALUE_OFFSET))(this);
		}

		::System::Boolean get_ParsingTopLevelMarkup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_PARSINGTOPLEVELMARKUP_OFFSET))(this);
		}

		::System::Boolean get_SupportNamespaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_SUPPORTNAMESPACES_OFFSET))(this);
		}

		::System::Boolean get_Normalize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_NORMALIZE_OFFSET))(this);
		}

		::System::Void Parse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSE_OFFSET))(this, a1);
		}

		::System::Void ParseInDocumentDtd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEINDOCUMENTDTD_OFFSET))(this, a1);
		}

		::System::Void ParseFreeFloatingDtd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEFREEFLOATINGDTD_OFFSET))(this);
		}

		::System::Void ParseInternalSubset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEINTERNALSUBSET_OFFSET))(this);
		}

		::System::Void ParseExternalSubset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEEXTERNALSUBSET_OFFSET))(this);
		}

		::System::Void ParseSubset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSESUBSET_OFFSET))(this);
		}

		::System::Void ParseAttlistDecl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEATTLISTDECL_OFFSET))(this);
		}

		::System::Void ParseAttlistType(::System::Xml::Schema::SchemaAttDef* a1, ::System::Xml::Schema::SchemaElementDecl* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaElementDecl*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEATTLISTTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ParseAttlistDefault(::System::Xml::Schema::SchemaAttDef* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEATTLISTDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::Void ParseElementDecl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTDECL_OFFSET))(this);
		}

		::System::Void ParseElementOnlyContent(::System::Xml::Schema::ParticleContentValidator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_OFFSET))(this, a1, a2);
		}

		::System::Void ParseHowMany(::System::Xml::Schema::ParticleContentValidator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEHOWMANY_OFFSET))(this, a1);
		}

		::System::Void ParseElementMixedContent(::System::Xml::Schema::ParticleContentValidator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTMIXEDCONTENT_OFFSET))(this, a1, a2);
		}

		::System::Void ParseEntityDecl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEENTITYDECL_OFFSET))(this);
		}

		::System::Void ParseNotationDecl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSENOTATIONDECL_OFFSET))(this);
		}

		::System::Void AddUndeclaredNotation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_ADDUNDECLAREDNOTATION_OFFSET))(this, a1);
		}

		::System::Void ParseComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSECOMMENT_OFFSET))(this);
		}

		::System::Void ParsePI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEPI_OFFSET))(this);
		}

		::System::Void ParseCondSection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSECONDSECTION_OFFSET))(this);
		}

		::System::Void ParseExternalId(::System::Xml::DtdParser_Token a1, ::System::Xml::DtdParser_Token a2, ::System::String*& a3, ::System::String*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::DtdParser_Token, ::System::Xml::DtdParser_Token, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEEXTERNALID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Xml::DtdParser_Token GetToken(::System::Boolean a1)
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETTOKEN_OFFSET))(this, a1);
		}

		::System::Xml::DtdParser_Token ScanSubsetContent()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANSUBSETCONTENT_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanNameExpected()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANNAMEEXPECTED_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanQNameExpected()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANQNAMEEXPECTED_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanNmtokenExpected()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANNMTOKENEXPECTED_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanDoctype1()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANDOCTYPE1_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanDoctype2()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANDOCTYPE2_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanClosingTag()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANCLOSINGTAG_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanElement1()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANELEMENT1_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanElement2()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANELEMENT2_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanElement3()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANELEMENT3_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanElement4()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANELEMENT4_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanElement5()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANELEMENT5_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanElement6()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANELEMENT6_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanElement7()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANELEMENT7_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanAttlist1()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANATTLIST1_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanAttlist2()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANATTLIST2_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanAttlist3()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANATTLIST3_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanAttlist4()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANATTLIST4_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanAttlist5()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANATTLIST5_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanAttlist6()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANATTLIST6_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanAttlist7()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANATTLIST7_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanLiteral(::System::Xml::DtdParser_LiteralType a1)
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID, ::System::Xml::DtdParser_LiteralType))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANLITERAL_OFFSET))(this, a1);
		}

		::System::Xml::XmlQualifiedName* ScanEntityName()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANENTITYNAME_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanNotation1()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANNOTATION1_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanSystemId()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANSYSTEMID_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanEntity1()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANENTITY1_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanEntity2()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANENTITY2_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanEntity3()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANENTITY3_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanPublicId1()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANPUBLICID1_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanPublicId2()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANPUBLICID2_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanCondSection1()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANCONDSECTION1_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanCondSection2()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANCONDSECTION2_OFFSET))(this);
		}

		::System::Xml::DtdParser_Token ScanCondSection3()
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANCONDSECTION3_OFFSET))(this);
		}

		::System::Void ScanName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANNAME_OFFSET))(this);
		}

		::System::Void ScanQName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANQNAME_OFFSET))(this);
		}

		::System::Void ScanQName_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANQNAME_1_OFFSET))(this, a1);
		}

		::System::Boolean ReadDataInName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_READDATAINNAME_OFFSET))(this);
		}

		::System::Void ScanNmtoken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANNMTOKEN_OFFSET))(this);
		}

		::System::Boolean EatPublicKeyword()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_EATPUBLICKEYWORD_OFFSET))(this);
		}

		::System::Boolean EatSystemKeyword()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_EATSYSTEMKEYWORD_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* GetNameQualified(::System::Boolean a1)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETNAMEQUALIFIED_OFFSET))(this, a1);
		}

		::System::String* GetNameString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETNAMESTRING_OFFSET))(this);
		}

		::System::String* GetNmtokenString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETNMTOKENSTRING_OFFSET))(this);
		}

		::System::String* GetValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETVALUE_OFFSET))(this);
		}

		::System::String* GetValueWithStrippedSpaces()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETVALUEWITHSTRIPPEDSPACES_OFFSET))(this);
		}

		::System::Int32 ReadData()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_READDATA_OFFSET))(this);
		}

		::System::Void LoadParsingBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_LOADPARSINGBUFFER_OFFSET))(this);
		}

		::System::Void SaveParsingBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_OFFSET))(this);
		}

		::System::Void SaveParsingBuffer_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_1_OFFSET))(this, a1);
		}

		::System::Boolean HandleEntityReference(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HandleEntityReference_1(::System::Xml::XmlQualifiedName* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HandleEntityEnd(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_HANDLEENTITYEND_OFFSET))(this, a1);
		}

		::System::Xml::Schema::SchemaEntity* VerifyEntityReference(::System::Xml::XmlQualifiedName* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Xml::Schema::SchemaEntity*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_VERIFYENTITYREFERENCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SendValidationEvent(::System::Int32 a1, ::System::Xml::Schema::XmlSeverityType a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSeverityType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SendValidationEvent_1(::System::Xml::Schema::XmlSeverityType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSeverityType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendValidationEvent_2(::System::Xml::Schema::XmlSeverityType a1, ::System::Xml::Schema::XmlSchemaException* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSeverityType, ::System::Xml::Schema::XmlSchemaException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAttributeValueType(::System::Xml::DtdParser_Token a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::DtdParser_Token))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_ISATTRIBUTEVALUETYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_LineNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_LINENO_OFFSET))(this);
		}

		::System::Int32 get_LinePos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_LINEPOS_OFFSET))(this);
		}

		::System::String* get_BaseUriStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GET_BASEURISTR_OFFSET))(this);
		}

		::System::Void OnUnexpectedError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_ONUNEXPECTEDERROR_OFFSET))(this);
		}

		::System::Void Throw(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_OFFSET))(this, a1, a2);
		}

		::System::Void Throw_1(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Throw_2(::System::Int32 a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Throw_3(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ThrowInvalidChar(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ThrowInvalidChar_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ThrowUnexpectedToken(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void ThrowUnexpectedToken_1(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ParseUnexpectedToken(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEUNEXPECTEDTOKEN_OFFSET))(this, a1);
		}

		static ::System::String* StripSpaces(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_STRIPSPACES_OFFSET))(a1);
		}
	};
}
