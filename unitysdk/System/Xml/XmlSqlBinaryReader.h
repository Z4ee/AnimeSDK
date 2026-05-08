#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/BinXmlToken.h"
#include "unitysdk/System/Xml/DtdProcessing.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_AttrInfo.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_ElemInfo.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_QName.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_ScanState.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_SymbolTables.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }
namespace System::Xml { class SecureStringHasher; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlSqlBinaryReader_NamespaceDecl; }
namespace System::Xml { class XmlSqlBinaryReader_NestedBinXml; }

#define SYSTEM_XML_XMLSQLBINARYREADER_ADDINITNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A77C2B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A782B00)
#define SYSTEM_XML_XMLSQLBINARYREADER_ADDQNAME_OFFSET UNITYSDK_OFFSET(0x1A782D70)
#define SYSTEM_XML_XMLSQLBINARYREADER_CDATAVALUE_OFFSET UNITYSDK_OFFSET(0x1A77E140)
#define SYSTEM_XML_XMLSQLBINARYREADER_CHECKALLOWCONTENT_OFFSET UNITYSDK_OFFSET(0x1A7872B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_CHECKTEXTISWS_OFFSET UNITYSDK_OFFSET(0x1A787620)
#define SYSTEM_XML_XMLSQLBINARYREADER_CHECKTEXT_OFFSET UNITYSDK_OFFSET(0x1A7873D0)
#define SYSTEM_XML_XMLSQLBINARYREADER_CHECKVALUETOKENBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A788040)
#define SYSTEM_XML_XMLSQLBINARYREADER_CLEARATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A784240)
#define SYSTEM_XML_XMLSQLBINARYREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A781140)
#define SYSTEM_XML_XMLSQLBINARYREADER_FILLALLOWEOF_OFFSET UNITYSDK_OFFSET(0x1A783390)
#define SYSTEM_XML_XMLSQLBINARYREADER_FILL_OFFSET UNITYSDK_OFFSET(0x1A783260)
#define SYSTEM_XML_XMLSQLBINARYREADER_FILL__OFFSET UNITYSDK_OFFSET(0x1A7835F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_FINISHCDATA_OFFSET UNITYSDK_OFFSET(0x1A785B40)
#define SYSTEM_XML_XMLSQLBINARYREADER_FINISHENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A785C40)
#define SYSTEM_XML_XMLSQLBINARYREADER_GENERATEIMPLIEDXMLNSATTRS_OFFSET UNITYSDK_OFFSET(0x1A7846B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GENERATETOKENTYPEMAP_OFFSET UNITYSDK_OFFSET(0x1A77C3F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x1A77F8D0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1A780190)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1A7800E0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A77FCA0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A789630)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETINT16_OFFSET UNITYSDK_OFFSET(0x1A7886A0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETINT32_OFFSET UNITYSDK_OFFSET(0x1A788700)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETINT64_OFFSET UNITYSDK_OFFSET(0x1A7887B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETSINGLE_OFFSET UNITYSDK_OFFSET(0x1A789580)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETSTRINGALIGNED_OFFSET UNITYSDK_OFFSET(0x1A7840F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1A77DFF0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETUINT16_OFFSET UNITYSDK_OFFSET(0x1A788930)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETUINT32_OFFSET UNITYSDK_OFFSET(0x1A788990)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETUINT64_OFFSET UNITYSDK_OFFSET(0x1A788A40)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A781090)
#define SYSTEM_XML_XMLSQLBINARYREADER_GETXSDKATMAITOKENLENGTH_OFFSET UNITYSDK_OFFSET(0x1A787E70)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1A77FC50)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1A77FAD0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1A77FA20)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1A780BE0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A77FAE0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A77DE80)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1A77DE90)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1A7811D0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A77DE70)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A77DEA0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1A781330)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1A77DB70)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A77FC40)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A77DEB0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1A77FBA0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1A77FB00)
#define SYSTEM_XML_XMLSQLBINARYREADER_GROWATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A7841B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_GROWELEMENTS_OFFSET UNITYSDK_OFFSET(0x1A784120)
#define SYSTEM_XML_XMLSQLBINARYREADER_HASHCHECKFORDUPLICATEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A785620)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADCDATA_OFFSET UNITYSDK_OFFSET(0x1A7868B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADCOMMENT_OFFSET UNITYSDK_OFFSET(0x1A786870)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADDATA_OFFSET UNITYSDK_OFFSET(0x1A787120)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A7861B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADELEMENT_OFFSET UNITYSDK_OFFSET(0x1A785CA0)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A7860C0)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADENDNEST_OFFSET UNITYSDK_OFFSET(0x1A786A60)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADNEST_OFFSET UNITYSDK_OFFSET(0x1A786950)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADPI_OFFSET UNITYSDK_OFFSET(0x1A7867F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADXMLTEXT_OFFSET UNITYSDK_OFFSET(0x1A786AA0)
#define SYSTEM_XML_XMLSQLBINARYREADER_LOCATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1A7801F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_LOCATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A77FEB0)
#define SYSTEM_XML_XMLSQLBINARYREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A7811E0)
#define SYSTEM_XML_XMLSQLBINARYREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1A780750)
#define SYSTEM_XML_XMLSQLBINARYREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A780490)
#define SYSTEM_XML_XMLSQLBINARYREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1A780A80)
#define SYSTEM_XML_XMLSQLBINARYREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A780890)
#define SYSTEM_XML_XMLSQLBINARYREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A780980)
#define SYSTEM_XML_XMLSQLBINARYREADER_NAMEFLUSH_OFFSET UNITYSDK_OFFSET(0x1A7830E0)
#define SYSTEM_XML_XMLSQLBINARYREADER_NEXTTOKEN1_OFFSET UNITYSDK_OFFSET(0x1A783DB0)
#define SYSTEM_XML_XMLSQLBINARYREADER_NEXTTOKEN2_OFFSET UNITYSDK_OFFSET(0x1A783C60)
#define SYSTEM_XML_XMLSQLBINARYREADER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1A783EA0)
#define SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB32_1_OFFSET UNITYSDK_OFFSET(0x1A7839E0)
#define SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB32_OFFSET UNITYSDK_OFFSET(0x1A783230)
#define SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB32__OFFSET UNITYSDK_OFFSET(0x1A783920)
#define SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB64_OFFSET UNITYSDK_OFFSET(0x1A783B30)
#define SYSTEM_XML_XMLSQLBINARYREADER_PARSETEXT_OFFSET UNITYSDK_OFFSET(0x1A782CB0)
#define SYSTEM_XML_XMLSQLBINARYREADER_PEEKNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1A783F10)
#define SYSTEM_XML_XMLSQLBINARYREADER_PEEKTOKEN_OFFSET UNITYSDK_OFFSET(0x1A783B60)
#define SYSTEM_XML_XMLSQLBINARYREADER_POPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1A7845B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_POSITIONONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A780640)
#define SYSTEM_XML_XMLSQLBINARYREADER_PUSHNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A784260)
#define SYSTEM_XML_XMLSQLBINARYREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1A780BF0)
#define SYSTEM_XML_XMLSQLBINARYREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x1A783780)
#define SYSTEM_XML_XMLSQLBINARYREADER_READDOC_OFFSET UNITYSDK_OFFSET(0x1A781C60)
#define SYSTEM_XML_XMLSQLBINARYREADER_READINIT_OFFSET UNITYSDK_OFFSET(0x1A781630)
#define SYSTEM_XML_XMLSQLBINARYREADER_READNAMEREF_OFFSET UNITYSDK_OFFSET(0x1A783040)
#define SYSTEM_XML_XMLSQLBINARYREADER_READQNAMEREF_OFFSET UNITYSDK_OFFSET(0x1A7832F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_READTOKEN_OFFSET UNITYSDK_OFFSET(0x1A783BE0)
#define SYSTEM_XML_XMLSQLBINARYREADER_READUSHORT_OFFSET UNITYSDK_OFFSET(0x1A783830)
#define SYSTEM_XML_XMLSQLBINARYREADER_READ_OFFSET UNITYSDK_OFFSET(0x1A7813D0)
#define SYSTEM_XML_XMLSQLBINARYREADER_RESCANNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1A780E20)
#define SYSTEM_XML_XMLSQLBINARYREADER_RESCANOVERVALUE_OFFSET UNITYSDK_OFFSET(0x1A781080)
#define SYSTEM_XML_XMLSQLBINARYREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1A7812E0)
#define SYSTEM_XML_XMLSQLBINARYREADER_SCANATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A784890)
#define SYSTEM_XML_XMLSQLBINARYREADER_SCANOVERANYVALUE_OFFSET UNITYSDK_OFFSET(0x1A7876D0)
#define SYSTEM_XML_XMLSQLBINARYREADER_SCANOVERVALUE_OFFSET UNITYSDK_OFFSET(0x1A7850F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_SCANTEXT_OFFSET UNITYSDK_OFFSET(0x1A783F90)
#define SYSTEM_XML_XMLSQLBINARYREADER_SIMPLECHECKFORDUPLICATEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A785380)
#define SYSTEM_XML_XMLSQLBINARYREADER_SKIPEXTN_OFFSET UNITYSDK_OFFSET(0x1A783140)
#define SYSTEM_XML_XMLSQLBINARYREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1A7822A0)
#define SYSTEM_XML_XMLSQLBINARYREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1A782770)
#define SYSTEM_XML_XMLSQLBINARYREADER_THROWNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A7852B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_THROWUNEXPECTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x1A7829B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_THROWXMLEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A784F70)
#define SYSTEM_XML_XMLSQLBINARYREADER_THROWXMLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A783670)
#define SYSTEM_XML_XMLSQLBINARYREADER_UPDATEFROMTEXTREADER_1_OFFSET UNITYSDK_OFFSET(0x1A780590)
#define SYSTEM_XML_XMLSQLBINARYREADER_UPDATEFROMTEXTREADER_OFFSET UNITYSDK_OFFSET(0x1A787330)
#define SYSTEM_XML_XMLSQLBINARYREADER_VALUEASDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x1A7897B0)
#define SYSTEM_XML_XMLSQLBINARYREADER_VALUEASDECIMAL_OFFSET UNITYSDK_OFFSET(0x1A789030)
#define SYSTEM_XML_XMLSQLBINARYREADER_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A788BC0)
#define SYSTEM_XML_XMLSQLBINARYREADER_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x1A788170)
#define SYSTEM_XML_XMLSQLBINARYREADER_VALUEASSTRING_OFFSET UNITYSDK_OFFSET(0x1A77E670)
#define SYSTEM_XML_XMLSQLBINARYREADER_VALUEASULONG_OFFSET UNITYSDK_OFFSET(0x1A7894D0)
#define SYSTEM_XML_XMLSQLBINARYREADER_VERIFYVERSION_OFFSET UNITYSDK_OFFSET(0x1A782950)
#define SYSTEM_XML_XMLSQLBINARYREADER_XMLDECLVALUE_OFFSET UNITYSDK_OFFSET(0x1A77E370)
#define SYSTEM_XML_XMLSQLBINARYREADER_XSDKATMAITIMESCALETOVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1A7880B0)
#define SYSTEM_XML_XMLSQLBINARYREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A789BB0)
#define SYSTEM_XML_XMLSQLBINARYREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77BCD0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_TypeDefinitionIndex = 1671;

	class XmlSqlBinaryReader : public ::System::Xml::XmlReader
	{
	public:
		static ::System::Type** StaticGet_TypeOfObject()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlSqlBinaryReader_TypeDefinitionIndex)->GetStaticField(0x1FD0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_XsdKatmaiTimeScaleToValueLengthMap()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(XmlSqlBinaryReader_TypeDefinitionIndex)->GetStaticField(0x1FD8);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_TokenTypeMap()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(XmlSqlBinaryReader_TypeDefinitionIndex)->GetStaticField(0x1FE0);
		}
		static ::System::Type** StaticGet_TypeOfString()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XmlSqlBinaryReader_TypeDefinitionIndex)->GetStaticField(0x1FE8);
		}
		static ::Il2CppArray<::System::Xml::ReadState>** StaticGet_ScanState2ReadState()
		{
			return (::Il2CppArray<::System::Xml::ReadState>**)Il2CppClass::FromTypeDefinitionIndex(XmlSqlBinaryReader_TypeDefinitionIndex)->GetStaticField(0x1FF0);
		}
		::System::Xml::XmlReader* textXmlReader; // 0x10
		::System::Type* valueType; // 0x18
		::System::IO::Stream* inStrm; // 0x20
		::System::Xml::XmlSqlBinaryReader_NestedBinXml* prevNameInfo; // 0x28
		::System::Xml::XmlSqlBinaryReader_SymbolTables symbolTables; // 0x30
		::System::String* nsxmlns; // 0x50
		::System::Xml::XmlSqlBinaryReader_QName qnameElement; // 0x58
		::System::String* baseUri; // 0x70
		::System::Xml::XmlSqlBinaryReader_QName qnameOther; // 0x78
		::Il2CppArray<::System::Int32>* attrHashTbl; // 0x90
		::System::String* xml; // 0x98
		::System::Text::Encoding* unicode; // 0xA0
		::Il2CppArray<::System::Byte>* data; // 0xA8
		::System::Xml::SecureStringHasher* hasher; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>* namespaces; // 0xB8
		::System::Xml::XmlNameTable* xnt; // 0xC0
		::Il2CppArray<::System::Xml::XmlSqlBinaryReader_AttrInfo>* attributes; // 0xC8
		::System::String* stringValue; // 0xD0
		::System::Xml::XmlCharType xmlCharType; // 0xD8
		::Il2CppArray<::System::Xml::XmlSqlBinaryReader_ElemInfo>* elementStack; // 0xE0
		::System::String* xmlns; // 0xE8
		::System::Int32 docState; // 0xF0
		::System::Xml::BinXmlToken token; // 0xF4
		::System::Int32 tokDataPos; // 0xF8
		::System::Xml::XmlNodeType parentNodeType; // 0xFC
		::System::Int32 mark; // 0x100
		::System::Xml::XmlNodeType nodetype; // 0x104
		::System::Int64 offset; // 0x108
		::System::Boolean ignoreWhitespace; // 0x110
		::System::Boolean closeInput; // 0x111
		::System::Boolean ignoreComments; // 0x112
		::System::Boolean ignorePIs; // 0x113
		::System::Boolean isEmpty; // 0x114
		::System::Byte version; // 0x115
		::System::Boolean xntFromSettings; // 0x116
		::System::Boolean checkCharacters; // 0x117
		::System::Xml::DtdProcessing dtdProcessing; // 0x118
		::System::Int32 end; // 0x11C
		::System::Int32 attrCount; // 0x120
		::System::Int32 attrIndex; // 0x124
		::System::Int32 tokLen; // 0x128
		::System::Boolean sniffed; // 0x12C
		::System::Boolean xmlspacePreserve; // 0x12D
		::System::Boolean hasTypedValue; // 0x12E
		::System::Boolean eof; // 0x12F
		::System::Int32 posAfterAttrs; // 0x130
		::System::Xml::XmlSqlBinaryReader_ScanState state; // 0x134
		::System::Int32 elemDepth; // 0x138
		::System::Int32 pos; // 0x13C

		::System::Void _ctor(::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* data, ::System::Int32 len, ::System::String* baseUri, ::System::Boolean closeInput, ::System::Xml::XmlReaderSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Xml::XmlReaderSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER__CTOR_OFFSET))(this, stream, data, len, baseUri, closeInput, settings);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER__CCTOR_OFFSET))();
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name, ::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTE_OFFSET))(this, name, ns);
		}

		::System::String* GetAttribute_1(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTE_1_OFFSET))(this, name);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_MOVETOATTRIBUTE_1_OFFSET))(this, i);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_EOF_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_CLOSE_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READ_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Void VerifyVersion(::System::Int32 requiredVersion, ::System::Xml::BinXmlToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_VERIFYVERSION_OFFSET))(this, requiredVersion, token);
		}

		::System::Void AddInitNamespace(::System::String* prefix, ::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ADDINITNAMESPACE_OFFSET))(this, prefix, uri);
		}

		::System::Void AddName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ADDNAME_OFFSET))(this);
		}

		::System::Void AddQName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ADDQNAME_OFFSET))(this);
		}

		::System::Void NameFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_NAMEFLUSH_OFFSET))(this);
		}

		::System::Void SkipExtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SKIPEXTN_OFFSET))(this);
		}

		::System::Int32 ReadQNameRef()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READQNAMEREF_OFFSET))(this);
		}

		::System::Int32 ReadNameRef()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READNAMEREF_OFFSET))(this);
		}

		::System::Boolean FillAllowEOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_FILLALLOWEOF_OFFSET))(this);
		}

		::System::Void Fill_(::System::Int32 require)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_FILL__OFFSET))(this, require);
		}

		::System::Void Fill(::System::Int32 require)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_FILL_OFFSET))(this, require);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READBYTE_OFFSET))(this);
		}

		::System::UInt16 ReadUShort()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READUSHORT_OFFSET))(this);
		}

		::System::Int32 ParseMB32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB32_OFFSET))(this);
		}

		::System::Int32 ParseMB32_(::System::Byte b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB32__OFFSET))(this, b);
		}

		::System::Int32 ParseMB32_1(::System::Int32 pos)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB32_1_OFFSET))(this, pos);
		}

		::System::Int32 ParseMB64()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PARSEMB64_OFFSET))(this);
		}

		::System::Xml::BinXmlToken PeekToken()
		{
			return ((::System::Xml::BinXmlToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PEEKTOKEN_OFFSET))(this);
		}

		::System::Xml::BinXmlToken ReadToken()
		{
			return ((::System::Xml::BinXmlToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READTOKEN_OFFSET))(this);
		}

		::System::Xml::BinXmlToken NextToken2(::System::Xml::BinXmlToken token)
		{
			return ((::System::Xml::BinXmlToken(*)(::PVOID, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_NEXTTOKEN2_OFFSET))(this, token);
		}

		::System::Xml::BinXmlToken NextToken1()
		{
			return ((::System::Xml::BinXmlToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_NEXTTOKEN1_OFFSET))(this);
		}

		::System::Xml::BinXmlToken NextToken()
		{
			return ((::System::Xml::BinXmlToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_NEXTTOKEN_OFFSET))(this);
		}

		::System::Xml::BinXmlToken PeekNextToken()
		{
			return ((::System::Xml::BinXmlToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PEEKNEXTTOKEN_OFFSET))(this);
		}

		::System::Xml::BinXmlToken RescanNextToken()
		{
			return ((::System::Xml::BinXmlToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_RESCANNEXTTOKEN_OFFSET))(this);
		}

		::System::String* ParseText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PARSETEXT_OFFSET))(this);
		}

		::System::Int32 ScanText(::System::Int32& start)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SCANTEXT_OFFSET))(this, start);
		}

		::System::String* GetString(::System::Int32 pos, ::System::Int32 cch)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETSTRING_OFFSET))(this, pos, cch);
		}

		::System::String* GetStringAligned(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 cch)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETSTRINGALIGNED_OFFSET))(this, data, offset, cch);
		}

		::System::String* GetAttributeText(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETATTRIBUTETEXT_OFFSET))(this, i);
		}

		::System::Int32 LocateAttribute(::System::String* name, ::System::String* ns)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_LOCATEATTRIBUTE_OFFSET))(this, name, ns);
		}

		::System::Int32 LocateAttribute_1(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_LOCATEATTRIBUTE_1_OFFSET))(this, name);
		}

		::System::Void PositionOnAttribute(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_POSITIONONATTRIBUTE_OFFSET))(this, i);
		}

		::System::Void GrowElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GROWELEMENTS_OFFSET))(this);
		}

		::System::Void GrowAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GROWATTRIBUTES_OFFSET))(this);
		}

		::System::Void ClearAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_CLEARATTRIBUTES_OFFSET))(this);
		}

		::System::Void PushNamespace(::System::String* prefix, ::System::String* ns, ::System::Boolean implied)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_PUSHNAMESPACE_OFFSET))(this, prefix, ns, implied);
		}

		::System::Void PopNamespaces(::System::Xml::XmlSqlBinaryReader_NamespaceDecl* firstInScopeChain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_POPNAMESPACES_OFFSET))(this, firstInScopeChain);
		}

		::System::Void GenerateImpliedXmlnsAttrs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GENERATEIMPLIEDXMLNSATTRS_OFFSET))(this);
		}

		::System::Boolean ReadInit(::System::Boolean skipXmlDecl)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READINIT_OFFSET))(this, skipXmlDecl);
		}

		::System::Void ScanAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SCANATTRIBUTES_OFFSET))(this);
		}

		::System::Void SimpleCheckForDuplicateAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SIMPLECHECKFORDUPLICATEATTRIBUTES_OFFSET))(this);
		}

		::System::Void HashCheckForDuplicateAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_HASHCHECKFORDUPLICATEATTRIBUTES_OFFSET))(this);
		}

		::System::String* XmlDeclValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_XMLDECLVALUE_OFFSET))(this);
		}

		::System::String* CDATAValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_CDATAVALUE_OFFSET))(this);
		}

		::System::Void FinishCDATA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_FINISHCDATA_OFFSET))(this);
		}

		::System::Void FinishEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_FINISHENDELEMENT_OFFSET))(this);
		}

		::System::Boolean ReadDoc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_READDOC_OFFSET))(this);
		}

		::System::Void ImplReadData(::System::Xml::BinXmlToken tokenType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADDATA_OFFSET))(this, tokenType);
		}

		::System::Void ImplReadElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADELEMENT_OFFSET))(this);
		}

		::System::Void ImplReadEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADENDELEMENT_OFFSET))(this);
		}

		::System::Void ImplReadDoctype()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADDOCTYPE_OFFSET))(this);
		}

		::System::Void ImplReadPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADPI_OFFSET))(this);
		}

		::System::Void ImplReadComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADCOMMENT_OFFSET))(this);
		}

		::System::Void ImplReadCDATA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADCDATA_OFFSET))(this);
		}

		::System::Void ImplReadNest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADNEST_OFFSET))(this);
		}

		::System::Void ImplReadEndNest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADENDNEST_OFFSET))(this);
		}

		::System::Void ImplReadXmlText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_IMPLREADXMLTEXT_OFFSET))(this);
		}

		::System::Void UpdateFromTextReader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_UPDATEFROMTEXTREADER_OFFSET))(this);
		}

		::System::Boolean UpdateFromTextReader_1(::System::Boolean needUpdate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_UPDATEFROMTEXTREADER_1_OFFSET))(this, needUpdate);
		}

		::System::Void CheckAllowContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_CHECKALLOWCONTENT_OFFSET))(this);
		}

		::System::Void GenerateTokenTypeMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GENERATETOKENTYPEMAP_OFFSET))(this);
		}

		::System::Type* GetValueType(::System::Xml::BinXmlToken token)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETVALUETYPE_OFFSET))(this, token);
		}

		::System::Void ReScanOverValue(::System::Xml::BinXmlToken token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_RESCANOVERVALUE_OFFSET))(this, token);
		}

		::System::Xml::XmlNodeType ScanOverValue(::System::Xml::BinXmlToken token, ::System::Boolean attr, ::System::Boolean checkChars)
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID, ::System::Xml::BinXmlToken, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SCANOVERVALUE_OFFSET))(this, token, attr, checkChars);
		}

		::System::Xml::XmlNodeType ScanOverAnyValue(::System::Xml::BinXmlToken token, ::System::Boolean attr, ::System::Boolean checkChars)
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID, ::System::Xml::BinXmlToken, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SCANOVERANYVALUE_OFFSET))(this, token, attr, checkChars);
		}

		::System::Xml::XmlNodeType CheckText(::System::Boolean attr)
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_CHECKTEXT_OFFSET))(this, attr);
		}

		::System::Xml::XmlNodeType CheckTextIsWS()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_CHECKTEXTISWS_OFFSET))(this);
		}

		::System::Void CheckValueTokenBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_CHECKVALUETOKENBOUNDS_OFFSET))(this);
		}

		::System::Int32 GetXsdKatmaiTokenLength(::System::Xml::BinXmlToken token)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETXSDKATMAITOKENLENGTH_OFFSET))(this, token);
		}

		::System::Int32 XsdKatmaiTimeScaleToValueLength(::System::Byte scale)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_XSDKATMAITIMESCALETOVALUELENGTH_OFFSET))(this, scale);
		}

		::System::Int64 ValueAsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_VALUEASLONG_OFFSET))(this);
		}

		::System::UInt64 ValueAsULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_VALUEASULONG_OFFSET))(this);
		}

		::System::Decimal ValueAsDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_VALUEASDECIMAL_OFFSET))(this);
		}

		::System::Double ValueAsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_VALUEASDOUBLE_OFFSET))(this);
		}

		::System::String* ValueAsDateTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_VALUEASDATETIMESTRING_OFFSET))(this);
		}

		::System::String* ValueAsString(::System::Xml::BinXmlToken token)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_VALUEASSTRING_OFFSET))(this, token);
		}

		::System::Int16 GetInt16(::System::Int32 pos)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETINT16_OFFSET))(this, pos);
		}

		::System::UInt16 GetUInt16(::System::Int32 pos)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETUINT16_OFFSET))(this, pos);
		}

		::System::Int32 GetInt32(::System::Int32 pos)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETINT32_OFFSET))(this, pos);
		}

		::System::UInt32 GetUInt32(::System::Int32 pos)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETUINT32_OFFSET))(this, pos);
		}

		::System::Int64 GetInt64(::System::Int32 pos)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETINT64_OFFSET))(this, pos);
		}

		::System::UInt64 GetUInt64(::System::Int32 pos)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETUINT64_OFFSET))(this, pos);
		}

		::System::Single GetSingle(::System::Int32 offset)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETSINGLE_OFFSET))(this, offset);
		}

		::System::Double GetDouble(::System::Int32 offset)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_GETDOUBLE_OFFSET))(this, offset);
		}

		::System::Exception* ThrowUnexpectedToken(::System::Xml::BinXmlToken token)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::BinXmlToken))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_THROWUNEXPECTEDTOKEN_OFFSET))(this, token);
		}

		::System::Exception* ThrowXmlException(::System::String* res)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_THROWXMLEXCEPTION_OFFSET))(this, res);
		}

		::System::Exception* ThrowXmlException_1(::System::String* res, ::System::String* arg1, ::System::String* arg2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_THROWXMLEXCEPTION_1_OFFSET))(this, res, arg1, arg2);
		}

		::System::Exception* ThrowNotSupported(::System::String* res)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_THROWNOTSUPPORTED_OFFSET))(this, res);
		}
	};
}
