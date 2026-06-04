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

#define SYSTEM_XML_DTDPARSER_ADDUNDECLAREDNOTATION_OFFSET UNITYSDK_OFFSET(0x1AE1B4E0)
#define SYSTEM_XML_DTDPARSER_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE15A30)
#define SYSTEM_XML_DTDPARSER_EATPUBLICKEYWORD_OFFSET UNITYSDK_OFFSET(0x1AE1FF40)
#define SYSTEM_XML_DTDPARSER_EATSYSTEMKEYWORD_OFFSET UNITYSDK_OFFSET(0x1AE20000)
#define SYSTEM_XML_DTDPARSER_GETNAMEQUALIFIED_OFFSET UNITYSDK_OFFSET(0x1AE17B60)
#define SYSTEM_XML_DTDPARSER_GETNAMESTRING_OFFSET UNITYSDK_OFFSET(0x1AE1B4C0)
#define SYSTEM_XML_DTDPARSER_GETNMTOKENSTRING_OFFSET UNITYSDK_OFFSET(0x1AE1B700)
#define SYSTEM_XML_DTDPARSER_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x1AE16FA0)
#define SYSTEM_XML_DTDPARSER_GETVALUEWITHSTRIPPEDSPACES_OFFSET UNITYSDK_OFFSET(0x1AE1B720)
#define SYSTEM_XML_DTDPARSER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1AE1B780)
#define SYSTEM_XML_DTDPARSER_GET_BASEURISTR_OFFSET UNITYSDK_OFFSET(0x1AE16D70)
#define SYSTEM_XML_DTDPARSER_GET_IGNOREENTITYREFERENCES_OFFSET UNITYSDK_OFFSET(0x1AE16AA0)
#define SYSTEM_XML_DTDPARSER_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x1AE1A4B0)
#define SYSTEM_XML_DTDPARSER_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x1AE1A4E0)
#define SYSTEM_XML_DTDPARSER_GET_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1AE16B20)
#define SYSTEM_XML_DTDPARSER_GET_PARSINGINTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1AE16A90)
#define SYSTEM_XML_DTDPARSER_GET_PARSINGTOPLEVELMARKUP_OFFSET UNITYSDK_OFFSET(0x1AE16AF0)
#define SYSTEM_XML_DTDPARSER_GET_SAVEINTERNALSUBSETVALUE_OFFSET UNITYSDK_OFFSET(0x1AE16AB0)
#define SYSTEM_XML_DTDPARSER_GET_SUPPORTNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1AE16B10)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYEND_OFFSET UNITYSDK_OFFSET(0x1AE1FCB0)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1AE218D0)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AE1D480)
#define SYSTEM_XML_DTDPARSER_INITIALIZEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1AE15D80)
#define SYSTEM_XML_DTDPARSER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AE15AF0)
#define SYSTEM_XML_DTDPARSER_ISATTRIBUTEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AE1B2F0)
#define SYSTEM_XML_DTDPARSER_LOADPARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE16F60)
#define SYSTEM_XML_DTDPARSER_ONUNEXPECTEDERROR_OFFSET UNITYSDK_OFFSET(0x1AE17B10)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTDECL_OFFSET UNITYSDK_OFFSET(0x1AE18810)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AE1B060)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE1A690)
#define SYSTEM_XML_DTDPARSER_PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x1AE19D60)
#define SYSTEM_XML_DTDPARSER_PARSECONDSECTION_OFFSET UNITYSDK_OFFSET(0x1AE1A030)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1AE19030)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTMIXEDCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE1BBB0)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE1C640)
#define SYSTEM_XML_DTDPARSER_PARSEENTITYDECL_OFFSET UNITYSDK_OFFSET(0x1AE19540)
#define SYSTEM_XML_DTDPARSER_PARSEEXTERNALID_OFFSET UNITYSDK_OFFSET(0x1AE17CE0)
#define SYSTEM_XML_DTDPARSER_PARSEEXTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1AE18360)
#define SYSTEM_XML_DTDPARSER_PARSEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1AE16B30)
#define SYSTEM_XML_DTDPARSER_PARSEHOWMANY_OFFSET UNITYSDK_OFFSET(0x1AE1CA50)
#define SYSTEM_XML_DTDPARSER_PARSEINDOCUMENTDTD_OFFSET UNITYSDK_OFFSET(0x1AE16BB0)
#define SYSTEM_XML_DTDPARSER_PARSEINTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1AE18350)
#define SYSTEM_XML_DTDPARSER_PARSENOTATIONDECL_OFFSET UNITYSDK_OFFSET(0x1AE19AE0)
#define SYSTEM_XML_DTDPARSER_PARSEPI_OFFSET UNITYSDK_OFFSET(0x1AE19F10)
#define SYSTEM_XML_DTDPARSER_PARSESUBSET_OFFSET UNITYSDK_OFFSET(0x1AE184C0)
#define SYSTEM_XML_DTDPARSER_PARSEUNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x1AE1D4C0)
#define SYSTEM_XML_DTDPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1AE16320)
#define SYSTEM_XML_DTDPARSER_READDATAINNAME_OFFSET UNITYSDK_OFFSET(0x1AE213C0)
#define SYSTEM_XML_DTDPARSER_READDATA_OFFSET UNITYSDK_OFFSET(0x1AE1FC40)
#define SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1AE1A420)
#define SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE18340)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST1_OFFSET UNITYSDK_OFFSET(0x1AE1E530)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST2_OFFSET UNITYSDK_OFFSET(0x1AE1E5F0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST3_OFFSET UNITYSDK_OFFSET(0x1AE1EB20)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST4_OFFSET UNITYSDK_OFFSET(0x1AE1EB80)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST5_OFFSET UNITYSDK_OFFSET(0x1AE1EC10)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST6_OFFSET UNITYSDK_OFFSET(0x1AE1ECA0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST7_OFFSET UNITYSDK_OFFSET(0x1AE1EF70)
#define SYSTEM_XML_DTDPARSER_SCANCLOSINGTAG_OFFSET UNITYSDK_OFFSET(0x1AE1FBE0)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION1_OFFSET UNITYSDK_OFFSET(0x1AE1F4B0)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION2_OFFSET UNITYSDK_OFFSET(0x1AE1F740)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION3_OFFSET UNITYSDK_OFFSET(0x1AE1F7A0)
#define SYSTEM_XML_DTDPARSER_SCANDOCTYPE1_OFFSET UNITYSDK_OFFSET(0x1AE1DBF0)
#define SYSTEM_XML_DTDPARSER_SCANDOCTYPE2_OFFSET UNITYSDK_OFFSET(0x1AE1DD20)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT1_OFFSET UNITYSDK_OFFSET(0x1AE1DDC0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT2_OFFSET UNITYSDK_OFFSET(0x1AE1E070)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT3_OFFSET UNITYSDK_OFFSET(0x1AE1E220)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT4_OFFSET UNITYSDK_OFFSET(0x1AE1E2B0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT5_OFFSET UNITYSDK_OFFSET(0x1AE1E370)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT6_OFFSET UNITYSDK_OFFSET(0x1AE1E440)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT7_OFFSET UNITYSDK_OFFSET(0x1AE1E4D0)
#define SYSTEM_XML_DTDPARSER_SCANENTITY1_OFFSET UNITYSDK_OFFSET(0x1AE1F210)
#define SYSTEM_XML_DTDPARSER_SCANENTITY2_OFFSET UNITYSDK_OFFSET(0x1AE1F280)
#define SYSTEM_XML_DTDPARSER_SCANENTITY3_OFFSET UNITYSDK_OFFSET(0x1AE1F3B0)
#define SYSTEM_XML_DTDPARSER_SCANENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1AE20D10)
#define SYSTEM_XML_DTDPARSER_SCANLITERAL_OFFSET UNITYSDK_OFFSET(0x1AE200C0)
#define SYSTEM_XML_DTDPARSER_SCANNAMEEXPECTED_OFFSET UNITYSDK_OFFSET(0x1AE1D570)
#define SYSTEM_XML_DTDPARSER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x1AE1FDB0)
#define SYSTEM_XML_DTDPARSER_SCANNMTOKENEXPECTED_OFFSET UNITYSDK_OFFSET(0x1AE1D5D0)
#define SYSTEM_XML_DTDPARSER_SCANNMTOKEN_OFFSET UNITYSDK_OFFSET(0x1AE1FDD0)
#define SYSTEM_XML_DTDPARSER_SCANNOTATION1_OFFSET UNITYSDK_OFFSET(0x1AE1EFE0)
#define SYSTEM_XML_DTDPARSER_SCANPUBLICID1_OFFSET UNITYSDK_OFFSET(0x1AE1F140)
#define SYSTEM_XML_DTDPARSER_SCANPUBLICID2_OFFSET UNITYSDK_OFFSET(0x1AE1F1B0)
#define SYSTEM_XML_DTDPARSER_SCANQNAMEEXPECTED_OFFSET UNITYSDK_OFFSET(0x1AE1D5A0)
#define SYSTEM_XML_DTDPARSER_SCANQNAME_1_OFFSET UNITYSDK_OFFSET(0x1AE21170)
#define SYSTEM_XML_DTDPARSER_SCANQNAME_OFFSET UNITYSDK_OFFSET(0x1AE1FDC0)
#define SYSTEM_XML_DTDPARSER_SCANSUBSETCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE1D600)
#define SYSTEM_XML_DTDPARSER_SCANSYSTEMID_OFFSET UNITYSDK_OFFSET(0x1AE1F0C0)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1AE1B300)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1AE16E60)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1AE1A260)
#define SYSTEM_XML_DTDPARSER_STRIPSPACES_OFFSET UNITYSDK_OFFSET(0x1AE21630)
#define SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1AE16A50)
#define SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEINTERNALDTD_OFFSET UNITYSDK_OFFSET(0x1AE162F0)
#define SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_1_OFFSET UNITYSDK_OFFSET(0x1AE1D3F0)
#define SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_OFFSET UNITYSDK_OFFSET(0x1AE16250)
#define SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1AE1D0F0)
#define SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x1AE1A4A0)
#define SYSTEM_XML_DTDPARSER_THROW_1_OFFSET UNITYSDK_OFFSET(0x1AE1CF30)
#define SYSTEM_XML_DTDPARSER_THROW_2_OFFSET UNITYSDK_OFFSET(0x1AE1D1E0)
#define SYSTEM_XML_DTDPARSER_THROW_3_OFFSET UNITYSDK_OFFSET(0x1AE1A520)
#define SYSTEM_XML_DTDPARSER_THROW_OFFSET UNITYSDK_OFFSET(0x1AE1A010)
#define SYSTEM_XML_DTDPARSER_VERIFYENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AE20E40)
#define SYSTEM_XML_DTDPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE15990)

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_TypeDefinitionIndex = 1920;

	class DtdParser : public ::System::Object
	{
	public:
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x10
		::System::String* systemId; // 0x18
		::System::Xml::XmlCharType xmlCharType; // 0x20
		::System::Text::StringBuilder* internalSubsetValueSb; // 0x28
		::System::Xml::IDtdParserAdapterWithValidation* readerAdapterWithValidation; // 0x30
		::Il2CppArray<::System::Int32>* condSectionEntityIds; // 0x38
		::System::String* publicId; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::DtdParser_UndeclaredNotation*>* undeclaredNotations; // 0x48
		::System::Xml::XmlNameTable* nameTable; // 0x50
		::System::String* documentBaseUri; // 0x58
		::System::Text::StringBuilder* stringBuilder; // 0x60
		::Il2CppArray<::System::Char>* chars; // 0x68
		::System::String* externalDtdBaseUri; // 0x70
		::System::Xml::IDtdParserAdapter* readerAdapter; // 0x78
		::System::Int32 tokenStartPos; // 0x80
		::System::Boolean hasFreeFloatingInternalSubset; // 0x84
		::System::Boolean freeFloatingDtd; // 0x85
		::System::Boolean supportNamespaces; // 0x86
		::System::Int32 curPos; // 0x88
		::System::Int32 charsUsed; // 0x8C
		::System::Xml::LineInfo literalLineInfo; // 0x90
		::System::Int32 condSectionDepth; // 0x98
		::System::Boolean v1Compat; // 0x9C
		::System::Boolean normalize; // 0x9D
		::System::Boolean whitespaceSeen; // 0x9E
		::System::Boolean validate; // 0x9F
		::System::Char literalQuoteChar; // 0xA0
		::System::Xml::DtdParser_ScanningFunction savedScanningFunction; // 0xA4
		::System::Xml::DtdParser_ScanningFunction nextScaningFunction; // 0xA8
		::System::Xml::DtdParser_ScanningFunction scanningFunction; // 0xAC
		::System::Int32 colonPos; // 0xB0
		::System::Int32 externalEntitiesDepth; // 0xB4
		::System::Int32 currentEntityId; // 0xB8

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
