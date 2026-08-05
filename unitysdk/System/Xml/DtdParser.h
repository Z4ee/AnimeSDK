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

#define SYSTEM_XML_DTDPARSER_ADDUNDECLAREDNOTATION_OFFSET UNITYSDK_OFFSET(0x1E7F4F90)
#define SYSTEM_XML_DTDPARSER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E7EF590)
#define SYSTEM_XML_DTDPARSER_EATPUBLICKEYWORD_OFFSET UNITYSDK_OFFSET(0x1E7F94E0)
#define SYSTEM_XML_DTDPARSER_EATSYSTEMKEYWORD_OFFSET UNITYSDK_OFFSET(0x1E7F95F0)
#define SYSTEM_XML_DTDPARSER_GETNAMEQUALIFIED_OFFSET UNITYSDK_OFFSET(0x1E7F1690)
#define SYSTEM_XML_DTDPARSER_GETNAMESTRING_OFFSET UNITYSDK_OFFSET(0x1E7F4F70)
#define SYSTEM_XML_DTDPARSER_GETNMTOKENSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F5260)
#define SYSTEM_XML_DTDPARSER_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x1E7F0C80)
#define SYSTEM_XML_DTDPARSER_GETVALUEWITHSTRIPPEDSPACES_OFFSET UNITYSDK_OFFSET(0x1E7F5280)
#define SYSTEM_XML_DTDPARSER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1E7F52E0)
#define SYSTEM_XML_DTDPARSER_GET_BASEURISTR_OFFSET UNITYSDK_OFFSET(0x1E7F0B60)
#define SYSTEM_XML_DTDPARSER_GET_IGNOREENTITYREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E7F0890)
#define SYSTEM_XML_DTDPARSER_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x1E7F4080)
#define SYSTEM_XML_DTDPARSER_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x1E7F40B0)
#define SYSTEM_XML_DTDPARSER_GET_PARSINGINTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1E7F0880)
#define SYSTEM_XML_DTDPARSER_GET_PARSINGTOPLEVELMARKUP_OFFSET UNITYSDK_OFFSET(0x1E7F08E0)
#define SYSTEM_XML_DTDPARSER_GET_SAVEINTERNALSUBSETVALUE_OFFSET UNITYSDK_OFFSET(0x1E7F08A0)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYEND_OFFSET UNITYSDK_OFFSET(0x1E7F9220)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1E7FAE80)
#define SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E7F5F30)
#define SYSTEM_XML_DTDPARSER_INITIALIZEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1E7EF840)
#define SYSTEM_XML_DTDPARSER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7EF650)
#define SYSTEM_XML_DTDPARSER_ISATTRIBUTEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E7F4DC0)
#define SYSTEM_XML_DTDPARSER_LOADPARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1E7F0C30)
#define SYSTEM_XML_DTDPARSER_ONUNEXPECTEDERROR_OFFSET UNITYSDK_OFFSET(0x1E7F1640)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTDECL_OFFSET UNITYSDK_OFFSET(0x1E7F2320)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E7F4B70)
#define SYSTEM_XML_DTDPARSER_PARSEATTLISTTYPE_OFFSET UNITYSDK_OFFSET(0x1E7F41F0)
#define SYSTEM_XML_DTDPARSER_PARSECOMMENT_OFFSET UNITYSDK_OFFSET(0x1E7F3930)
#define SYSTEM_XML_DTDPARSER_PARSECONDSECTION_OFFSET UNITYSDK_OFFSET(0x1E7F3C20)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1E7F2C30)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTMIXEDCONTENT_OFFSET UNITYSDK_OFFSET(0x1E7F5330)
#define SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_OFFSET UNITYSDK_OFFSET(0x1E7F56B0)
#define SYSTEM_XML_DTDPARSER_PARSEENTITYDECL_OFFSET UNITYSDK_OFFSET(0x1E7F3160)
#define SYSTEM_XML_DTDPARSER_PARSEEXTERNALID_OFFSET UNITYSDK_OFFSET(0x1E7F1810)
#define SYSTEM_XML_DTDPARSER_PARSEEXTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1E7F1F00)
#define SYSTEM_XML_DTDPARSER_PARSEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1E7F0900)
#define SYSTEM_XML_DTDPARSER_PARSEHOWMANY_OFFSET UNITYSDK_OFFSET(0x1E7F59C0)
#define SYSTEM_XML_DTDPARSER_PARSEINDOCUMENTDTD_OFFSET UNITYSDK_OFFSET(0x1E7F0990)
#define SYSTEM_XML_DTDPARSER_PARSEINTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1E7F1EF0)
#define SYSTEM_XML_DTDPARSER_PARSENOTATIONDECL_OFFSET UNITYSDK_OFFSET(0x1E7F36B0)
#define SYSTEM_XML_DTDPARSER_PARSEPI_OFFSET UNITYSDK_OFFSET(0x1E7F3AF0)
#define SYSTEM_XML_DTDPARSER_PARSESUBSET_OFFSET UNITYSDK_OFFSET(0x1E7F2020)
#define SYSTEM_XML_DTDPARSER_PARSEUNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x1E7F5F70)
#define SYSTEM_XML_DTDPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1E7F0030)
#define SYSTEM_XML_DTDPARSER_READDATAINNAME_OFFSET UNITYSDK_OFFSET(0x1E7FAA10)
#define SYSTEM_XML_DTDPARSER_READDATA_OFFSET UNITYSDK_OFFSET(0x1E7F91A0)
#define SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1E7F3FF0)
#define SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1E7F1EE0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST1_OFFSET UNITYSDK_OFFSET(0x1E7F7380)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST2_OFFSET UNITYSDK_OFFSET(0x1E7F7440)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST3_OFFSET UNITYSDK_OFFSET(0x1E7F7B90)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST4_OFFSET UNITYSDK_OFFSET(0x1E7F7C30)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST5_OFFSET UNITYSDK_OFFSET(0x1E7F7CF0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST6_OFFSET UNITYSDK_OFFSET(0x1E7F7DB0)
#define SYSTEM_XML_DTDPARSER_SCANATTLIST7_OFFSET UNITYSDK_OFFSET(0x1E7F81F0)
#define SYSTEM_XML_DTDPARSER_SCANCLOSINGTAG_OFFSET UNITYSDK_OFFSET(0x1E7F9110)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION1_OFFSET UNITYSDK_OFFSET(0x1E7F8840)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION2_OFFSET UNITYSDK_OFFSET(0x1E7F8BF0)
#define SYSTEM_XML_DTDPARSER_SCANCONDSECTION3_OFFSET UNITYSDK_OFFSET(0x1E7F8C80)
#define SYSTEM_XML_DTDPARSER_SCANDOCTYPE1_OFFSET UNITYSDK_OFFSET(0x1E7F68C0)
#define SYSTEM_XML_DTDPARSER_SCANDOCTYPE2_OFFSET UNITYSDK_OFFSET(0x1E7F6A00)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT1_OFFSET UNITYSDK_OFFSET(0x1E7F6AA0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT2_OFFSET UNITYSDK_OFFSET(0x1E7F6DD0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT3_OFFSET UNITYSDK_OFFSET(0x1E7F7000)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT4_OFFSET UNITYSDK_OFFSET(0x1E7F70A0)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT5_OFFSET UNITYSDK_OFFSET(0x1E7F7170)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT6_OFFSET UNITYSDK_OFFSET(0x1E7F7250)
#define SYSTEM_XML_DTDPARSER_SCANELEMENT7_OFFSET UNITYSDK_OFFSET(0x1E7F7310)
#define SYSTEM_XML_DTDPARSER_SCANENTITY1_OFFSET UNITYSDK_OFFSET(0x1E7F8530)
#define SYSTEM_XML_DTDPARSER_SCANENTITY2_OFFSET UNITYSDK_OFFSET(0x1E7F85B0)
#define SYSTEM_XML_DTDPARSER_SCANENTITY3_OFFSET UNITYSDK_OFFSET(0x1E7F86E0)
#define SYSTEM_XML_DTDPARSER_SCANENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1E7FA2E0)
#define SYSTEM_XML_DTDPARSER_SCANLITERAL_OFFSET UNITYSDK_OFFSET(0x1E7F9700)
#define SYSTEM_XML_DTDPARSER_SCANNAMEEXPECTED_OFFSET UNITYSDK_OFFSET(0x1E7F6060)
#define SYSTEM_XML_DTDPARSER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x1E7F9330)
#define SYSTEM_XML_DTDPARSER_SCANNMTOKENEXPECTED_OFFSET UNITYSDK_OFFSET(0x1E7F60C0)
#define SYSTEM_XML_DTDPARSER_SCANNMTOKEN_OFFSET UNITYSDK_OFFSET(0x1E7F9350)
#define SYSTEM_XML_DTDPARSER_SCANNOTATION1_OFFSET UNITYSDK_OFFSET(0x1E7F8290)
#define SYSTEM_XML_DTDPARSER_SCANPUBLICID1_OFFSET UNITYSDK_OFFSET(0x1E7F8420)
#define SYSTEM_XML_DTDPARSER_SCANPUBLICID2_OFFSET UNITYSDK_OFFSET(0x1E7F84C0)
#define SYSTEM_XML_DTDPARSER_SCANQNAMEEXPECTED_OFFSET UNITYSDK_OFFSET(0x1E7F6090)
#define SYSTEM_XML_DTDPARSER_SCANQNAME_1_OFFSET UNITYSDK_OFFSET(0x1E7FA760)
#define SYSTEM_XML_DTDPARSER_SCANQNAME_OFFSET UNITYSDK_OFFSET(0x1E7F9340)
#define SYSTEM_XML_DTDPARSER_SCANSUBSETCONTENT_OFFSET UNITYSDK_OFFSET(0x1E7F60F0)
#define SYSTEM_XML_DTDPARSER_SCANSYSTEMID_OFFSET UNITYSDK_OFFSET(0x1E7F8380)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1E7F4DD0)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1E7F0BE0)
#define SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1E7F3E50)
#define SYSTEM_XML_DTDPARSER_STRIPSPACES_OFFSET UNITYSDK_OFFSET(0x1E7FAA60)
#define SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x1E7F0840)
#define SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEINTERNALDTD_OFFSET UNITYSDK_OFFSET(0x1E7F0000)
#define SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_1_OFFSET UNITYSDK_OFFSET(0x1E7F5E90)
#define SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_OFFSET UNITYSDK_OFFSET(0x1E7EFFB0)
#define SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1E7F5BA0)
#define SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x1E7F4070)
#define SYSTEM_XML_DTDPARSER_THROW_1_OFFSET UNITYSDK_OFFSET(0x1E7F5A90)
#define SYSTEM_XML_DTDPARSER_THROW_2_OFFSET UNITYSDK_OFFSET(0x1E7F5CE0)
#define SYSTEM_XML_DTDPARSER_THROW_3_OFFSET UNITYSDK_OFFSET(0x1E7F4110)
#define SYSTEM_XML_DTDPARSER_THROW_OFFSET UNITYSDK_OFFSET(0x1E7F3C00)
#define SYSTEM_XML_DTDPARSER_VERIFYENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E7FA410)
#define SYSTEM_XML_DTDPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EF500)

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_TypeDefinitionIndex = 1800;

	class DtdParser : public ::System::Object
	{
	public:
		::System::Xml::IDtdParserAdapterWithValidation* readerAdapterWithValidation; // 0x10
		::System::String* externalDtdBaseUri; // 0x18
		::System::String* publicId; // 0x20
		::System::Xml::XmlNameTable* nameTable; // 0x28
		::System::String* documentBaseUri; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::DtdParser_UndeclaredNotation*>* undeclaredNotations; // 0x38
		::System::Text::StringBuilder* internalSubsetValueSb; // 0x40
		::Il2CppArray<::System::Char>* chars; // 0x48
		::System::Text::StringBuilder* stringBuilder; // 0x50
		::System::Xml::IDtdParserAdapter* readerAdapter; // 0x58
		::Il2CppArray<::System::Int32>* condSectionEntityIds; // 0x60
		::System::String* systemId; // 0x68
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x70
		::System::Xml::XmlCharType xmlCharType; // 0x78
		::System::Xml::DtdParser_ScanningFunction savedScanningFunction; // 0x80
		::System::Int32 condSectionDepth; // 0x84
		::System::Int32 charsUsed; // 0x88
		::System::Int32 currentEntityId; // 0x8C
		::System::Int32 curPos; // 0x90
		::System::Boolean validate; // 0x94
		::System::Char literalQuoteChar; // 0x96
		::System::Xml::LineInfo literalLineInfo; // 0x98
		::System::Int32 tokenStartPos; // 0xA0
		::System::Xml::DtdParser_ScanningFunction nextScaningFunction; // 0xA4
		::System::Boolean freeFloatingDtd; // 0xA8
		::System::Boolean supportNamespaces; // 0xA9
		::System::Boolean hasFreeFloatingInternalSubset; // 0xAA
		::System::Boolean normalize; // 0xAB
		::System::Xml::DtdParser_ScanningFunction scanningFunction; // 0xAC
		::System::Boolean v1Compat; // 0xB0
		::System::Boolean whitespaceSeen; // 0xB1
		::System::Int32 colonPos; // 0xB4
		::System::Int32 externalEntitiesDepth; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER__CTOR_OFFSET))(this);
		}

		static ::System::Xml::IDtdParser* Create()
		{
			return ((::System::Xml::IDtdParser*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_CREATE_OFFSET))();
		}

		::System::Void Initialize(::System::Xml::IDtdParserAdapter* readerAdapter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_INITIALIZE_OFFSET))(this, readerAdapter);
		}

		::System::Void InitializeFreeFloatingDtd(::System::String* baseUri, ::System::String* docTypeName, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset, ::System::Xml::IDtdParserAdapter* adapter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_INITIALIZEFREEFLOATINGDTD_OFFSET))(this, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
		}

		::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseInternalDtd(::System::Xml::IDtdParserAdapter* adapter, ::System::Boolean saveInternalSubset)
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID, ::System::Xml::IDtdParserAdapter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEINTERNALDTD_OFFSET))(this, adapter, saveInternalSubset);
		}

		::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseFreeFloatingDtd(::System::String* baseUri, ::System::String* docTypeName, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset, ::System::Xml::IDtdParserAdapter* adapter)
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SYSTEM_XML_IDTDPARSER_PARSEFREEFLOATINGDTD_OFFSET))(this, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
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

		::System::Void Parse(::System::Boolean saveInternalSubset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSE_OFFSET))(this, saveInternalSubset);
		}

		::System::Void ParseInDocumentDtd(::System::Boolean saveInternalSubset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEINDOCUMENTDTD_OFFSET))(this, saveInternalSubset);
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

		::System::Void ParseAttlistType(::System::Xml::Schema::SchemaAttDef* attrDef, ::System::Xml::Schema::SchemaElementDecl* elementDecl, ::System::Boolean ignoreErrors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaElementDecl*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEATTLISTTYPE_OFFSET))(this, attrDef, elementDecl, ignoreErrors);
		}

		::System::Void ParseAttlistDefault(::System::Xml::Schema::SchemaAttDef* attrDef, ::System::Boolean ignoreErrors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEATTLISTDEFAULT_OFFSET))(this, attrDef, ignoreErrors);
		}

		::System::Void ParseElementDecl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTDECL_OFFSET))(this);
		}

		::System::Void ParseElementOnlyContent(::System::Xml::Schema::ParticleContentValidator* pcv, ::System::Int32 startParenEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_OFFSET))(this, pcv, startParenEntityId);
		}

		::System::Void ParseHowMany(::System::Xml::Schema::ParticleContentValidator* pcv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEHOWMANY_OFFSET))(this, pcv);
		}

		::System::Void ParseElementMixedContent(::System::Xml::Schema::ParticleContentValidator* pcv, ::System::Int32 startParenEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTMIXEDCONTENT_OFFSET))(this, pcv, startParenEntityId);
		}

		::System::Void ParseEntityDecl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEENTITYDECL_OFFSET))(this);
		}

		::System::Void ParseNotationDecl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSENOTATIONDECL_OFFSET))(this);
		}

		::System::Void AddUndeclaredNotation(::System::String* notationName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_ADDUNDECLAREDNOTATION_OFFSET))(this, notationName);
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

		::System::Void ParseExternalId(::System::Xml::DtdParser_Token idTokenType, ::System::Xml::DtdParser_Token declType, ::System::String*& publicId, ::System::String*& systemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::DtdParser_Token, ::System::Xml::DtdParser_Token, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEEXTERNALID_OFFSET))(this, idTokenType, declType, publicId, systemId);
		}

		::System::Xml::DtdParser_Token GetToken(::System::Boolean needWhiteSpace)
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETTOKEN_OFFSET))(this, needWhiteSpace);
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

		::System::Xml::DtdParser_Token ScanLiteral(::System::Xml::DtdParser_LiteralType literalType)
		{
			return ((::System::Xml::DtdParser_Token(*)(::PVOID, ::System::Xml::DtdParser_LiteralType))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANLITERAL_OFFSET))(this, literalType);
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

		::System::Void ScanQName_1(::System::Boolean isQName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SCANQNAME_1_OFFSET))(this, isQName);
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

		::System::Xml::XmlQualifiedName* GetNameQualified(::System::Boolean canHavePrefix)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_GETNAMEQUALIFIED_OFFSET))(this, canHavePrefix);
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

		::System::Void SaveParsingBuffer_1(::System::Int32 internalSubsetValueEndPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SAVEPARSINGBUFFER_1_OFFSET))(this, internalSubsetValueEndPos);
		}

		::System::Boolean HandleEntityReference(::System::Boolean paramEntity, ::System::Boolean inLiteral, ::System::Boolean inAttribute)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_OFFSET))(this, paramEntity, inLiteral, inAttribute);
		}

		::System::Boolean HandleEntityReference_1(::System::Xml::XmlQualifiedName* entityName, ::System::Boolean paramEntity, ::System::Boolean inLiteral, ::System::Boolean inAttribute)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_HANDLEENTITYREFERENCE_1_OFFSET))(this, entityName, paramEntity, inLiteral, inAttribute);
		}

		::System::Boolean HandleEntityEnd(::System::Boolean inLiteral)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_HANDLEENTITYEND_OFFSET))(this, inLiteral);
		}

		::System::Xml::Schema::SchemaEntity* VerifyEntityReference(::System::Xml::XmlQualifiedName* entityName, ::System::Boolean paramEntity, ::System::Boolean mustBeDeclared, ::System::Boolean inAttribute)
		{
			return ((::System::Xml::Schema::SchemaEntity*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_VERIFYENTITYREFERENCE_OFFSET))(this, entityName, paramEntity, mustBeDeclared, inAttribute);
		}

		::System::Void SendValidationEvent(::System::Int32 pos, ::System::Xml::Schema::XmlSeverityType severity, ::System::String* code, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSeverityType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_OFFSET))(this, pos, severity, code, arg);
		}

		::System::Void SendValidationEvent_1(::System::Xml::Schema::XmlSeverityType severity, ::System::String* code, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSeverityType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_1_OFFSET))(this, severity, code, arg);
		}

		::System::Void SendValidationEvent_2(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSeverityType, ::System::Xml::Schema::XmlSchemaException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_SENDVALIDATIONEVENT_2_OFFSET))(this, severity, e);
		}

		::System::Boolean IsAttributeValueType(::System::Xml::DtdParser_Token token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::DtdParser_Token))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_ISATTRIBUTEVALUETYPE_OFFSET))(this, token);
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

		::System::Void Throw(::System::Int32 curPos, ::System::String* res)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_OFFSET))(this, curPos, res);
		}

		::System::Void Throw_1(::System::Int32 curPos, ::System::String* res, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_1_OFFSET))(this, curPos, res, arg);
		}

		::System::Void Throw_2(::System::Int32 curPos, ::System::String* res, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_2_OFFSET))(this, curPos, res, args);
		}

		::System::Void Throw_3(::System::String* res, ::System::String* arg, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROW_3_OFFSET))(this, res, arg, lineNo, linePos);
		}

		::System::Void ThrowInvalidChar(::System::Int32 pos, ::System::String* data, ::System::Int32 invCharPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_OFFSET))(this, pos, data, invCharPos);
		}

		::System::Void ThrowInvalidChar_1(::Il2CppArray<::System::Char>* data, ::System::Int32 length, ::System::Int32 invCharPos)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWINVALIDCHAR_1_OFFSET))(this, data, length, invCharPos);
		}

		::System::Void ThrowUnexpectedToken(::System::Int32 pos, ::System::String* expectedToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_OFFSET))(this, pos, expectedToken);
		}

		::System::Void ThrowUnexpectedToken_1(::System::Int32 pos, ::System::String* expectedToken1, ::System::String* expectedToken2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_THROWUNEXPECTEDTOKEN_1_OFFSET))(this, pos, expectedToken1, expectedToken2);
		}

		::System::String* ParseUnexpectedToken(::System::Int32 startPos)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEUNEXPECTEDTOKEN_OFFSET))(this, startPos);
		}

		static ::System::String* StripSpaces(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_STRIPSPACES_OFFSET))(value);
		}
	};
}
