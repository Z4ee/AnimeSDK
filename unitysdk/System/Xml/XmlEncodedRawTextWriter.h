#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/NewLineHandling.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlOutputMethod.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoder; }
namespace System::Text { class Encoding; }
namespace System::Xml { class CharEntityEncoderFallback; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_AMPENTITY_OFFSET UNITYSDK_OFFSET(0x18613F40)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET UNITYSDK_OFFSET(0x18613FE0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHANGETEXTCONTENTMARK_OFFSET UNITYSDK_OFFSET(0x18610AE0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHARENTITY_OFFSET UNITYSDK_OFFSET(0x18614460)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18613770)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHARS_OFFSET UNITYSDK_OFFSET(0x18613DC0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x186144E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODESURROGATE_OFFSET UNITYSDK_OFFSET(0x18614020)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x18613B60)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHENCODER_OFFSET UNITYSDK_OFFSET(0x18613A30)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18613B10)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x18611870)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GROWTEXTCONTENTMARKS_OFFSET UNITYSDK_OFFSET(0x186145B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GTENTITY_OFFSET UNITYSDK_OFFSET(0x18613F80)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_INVALIDXMLCHAR_OFFSET UNITYSDK_OFFSET(0x18614120)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LINEFEEDENTITY_OFFSET UNITYSDK_OFFSET(0x18614000)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LTENTITY_OFFSET UNITYSDK_OFFSET(0x18613F60)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_QUOTEENTITY_OFFSET UNITYSDK_OFFSET(0x18613FA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWENDCDATA_OFFSET UNITYSDK_OFFSET(0x18614420)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWSTARTCDATA_OFFSET UNITYSDK_OFFSET(0x18614440)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_1_OFFSET UNITYSDK_OFFSET(0x18614280)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_OFFSET UNITYSDK_OFFSET(0x18610B90)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x18611040)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_TABENTITY_OFFSET UNITYSDK_OFFSET(0x18613FC0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET UNITYSDK_OFFSET(0x18610280)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x186129E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATASECTION_OFFSET UNITYSDK_OFFSET(0x18611B00)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x18611880)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18612770)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x18613290)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENTORPI_OFFSET UNITYSDK_OFFSET(0x18612060)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x18611ED0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x18610C30)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x18612D00)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18611570)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18611090)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x18611800)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x18612680)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18611290)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x186115E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENEWLINE_OFFSET UNITYSDK_OFFSET(0x18614210)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x186124F0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET UNITYSDK_OFFSET(0x186133B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x18613710)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x18613320)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18611400)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x18610F40)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x18611670)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x186130B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18613120)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18612970)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x18610BC0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x18610900)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186105F0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18610690)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18610120)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEncodedRawTextWriter_TypeDefinitionIndex = 1822;

	class XmlEncodedRawTextWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::IO::Stream* stream; // 0x20
		::System::String* newLineChars; // 0x28
		::System::Xml::CharEntityEncoderFallback* charEntityFallback; // 0x30
		::System::IO::TextWriter* writer; // 0x38
		::Il2CppArray<::System::Int32>* textContentMarks; // 0x40
		::Il2CppArray<::System::Byte>* bufBytes; // 0x48
		::System::Xml::XmlCharType xmlCharType; // 0x50
		::System::Text::Encoding* encoding; // 0x58
		::System::Text::Encoder* encoder; // 0x60
		::Il2CppArray<::System::Char>* bufChars; // 0x68
		::System::Int32 bufBytesUsed; // 0x70
		::System::Xml::XmlStandalone standalone; // 0x74
		::System::Boolean writeToNull; // 0x78
		::System::Boolean autoXmlDeclaration; // 0x79
		::System::Boolean trackTextContent; // 0x7A
		::System::Int32 attrEndPos; // 0x7C
		::System::Boolean closeOutput; // 0x80
		::System::Boolean mergeCDataSections; // 0x81
		::System::Boolean inTextContent; // 0x82
		::System::Boolean useAsync; // 0x83
		::System::Int32 bufLen; // 0x84
		::System::Xml::XmlOutputMethod outputMethod; // 0x88
		::System::Int32 lastMarkPos; // 0x8C
		::System::Int32 cdataPos; // 0x90
		::System::Xml::NewLineHandling newLineHandling; // 0x94
		::System::Int32 contentPos; // 0x98
		::System::Boolean omitXmlDeclaration; // 0x9C
		::System::Boolean checkCharacters; // 0x9D
		::System::Boolean inAttributeValue; // 0x9E
		::System::Boolean hadDoubleBracket; // 0x9F
		::System::Int32 bufPos; // 0xA0
		::System::Int32 textPos; // 0xA4

		::System::Void _ctor(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_OFFSET))(this, settings);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET))(this, writer, settings);
		}

		::System::Void _ctor_2(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_2_OFFSET))(this, stream, settings);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* prefix, ::System::String* namespaceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, prefix, namespaceName);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, prefix);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void EncodeChars(::System::Int32 startOffset, ::System::Int32 endOffset, ::System::Boolean writeAllToStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHARS_OFFSET))(this, startOffset, endOffset, writeAllToStream);
		}

		::System::Void FlushEncoder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHENCODER_OFFSET))(this);
		}

		::System::Void WriteAttributeTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteElementTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void RawText(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_OFFSET))(this, s);
		}

		::System::Void RawText_1(::System::Char* pSrcBegin, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_1_OFFSET))(this, pSrcBegin, pSrcEnd);
		}

		::System::Void WriteRawWithCharChecking(::System::Char* pSrcBegin, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET))(this, pSrcBegin, pSrcEnd);
		}

		::System::Void WriteCommentOrPi(::System::String* text, ::System::Int32 stopChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENTORPI_OFFSET))(this, text, stopChar);
		}

		::System::Void WriteCDataSection(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATASECTION_OFFSET))(this, text);
		}

		static ::System::Char* EncodeSurrogate(::System::Char* pSrc, ::System::Char* pSrcEnd, ::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODESURROGATE_OFFSET))(pSrc, pSrcEnd, pDst);
		}

		::System::Char* InvalidXmlChar(::System::Int32 ch, ::System::Char* pDst, ::System::Boolean entitize)
		{
			return ((::System::Char*(*)(::PVOID, ::System::Int32, ::System::Char*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_INVALIDXMLCHAR_OFFSET))(this, ch, pDst, entitize);
		}

		::System::Void EncodeChar(::System::Char*& pSrc, ::System::Char* pSrcEnd, ::System::Char*& pDst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*&, ::System::Char*, ::System::Char*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHAR_OFFSET))(this, pSrc, pSrcEnd, pDst);
		}

		::System::Void ChangeTextContentMark(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHANGETEXTCONTENTMARK_OFFSET))(this, value);
		}

		::System::Void GrowTextContentMarks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GROWTEXTCONTENTMARKS_OFFSET))(this);
		}

		::System::Char* WriteNewLine(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::PVOID, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENEWLINE_OFFSET))(this, pDst);
		}

		static ::System::Char* LtEntity(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LTENTITY_OFFSET))(pDst);
		}

		static ::System::Char* GtEntity(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GTENTITY_OFFSET))(pDst);
		}

		static ::System::Char* AmpEntity(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_AMPENTITY_OFFSET))(pDst);
		}

		static ::System::Char* QuoteEntity(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_QUOTEENTITY_OFFSET))(pDst);
		}

		static ::System::Char* TabEntity(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_TABENTITY_OFFSET))(pDst);
		}

		static ::System::Char* LineFeedEntity(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LINEFEEDENTITY_OFFSET))(pDst);
		}

		static ::System::Char* CarriageReturnEntity(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET))(pDst);
		}

		static ::System::Char* CharEntity(::System::Char* pDst, ::System::Char ch)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHARENTITY_OFFSET))(pDst, ch);
		}

		static ::System::Char* RawStartCData(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWSTARTCDATA_OFFSET))(pDst);
		}

		static ::System::Char* RawEndCData(::System::Char* pDst)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWENDCDATA_OFFSET))(pDst);
		}

		::System::Void ValidateContentChars(::System::String* chars, ::System::String* propertyName, ::System::Boolean allowOnlyWhitespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET))(this, chars, propertyName, allowOnlyWhitespace);
		}
	};
}
