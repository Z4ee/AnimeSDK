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

#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_AMPENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC0B10)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC0BB0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHANGETEXTCONTENTMARK_OFFSET UNITYSDK_OFFSET(0x1AEBDAA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC1030)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AEC0370)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHARS_OFFSET UNITYSDK_OFFSET(0x1AEC0990)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1AEC10B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODESURROGATE_OFFSET UNITYSDK_OFFSET(0x1AEC0BF0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEC0760)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHENCODER_OFFSET UNITYSDK_OFFSET(0x1AEC0630)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AEC0710)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1AEBE6B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GROWTEXTCONTENTMARKS_OFFSET UNITYSDK_OFFSET(0x1AEC1180)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GTENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC0B50)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_INVALIDXMLCHAR_OFFSET UNITYSDK_OFFSET(0x1AEC0CF0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LINEFEEDENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC0BD0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LTENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC0B30)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_QUOTEENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC0B70)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWENDCDATA_OFFSET UNITYSDK_OFFSET(0x1AEC0FF0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWSTARTCDATA_OFFSET UNITYSDK_OFFSET(0x1AEC1010)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_1_OFFSET UNITYSDK_OFFSET(0x1AEC0E50)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_OFFSET UNITYSDK_OFFSET(0x1AEBDB40)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AEBDF90)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_TABENTITY_OFFSET UNITYSDK_OFFSET(0x1AEC0B90)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET UNITYSDK_OFFSET(0x1AEBD240)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1AEBF640)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATASECTION_OFFSET UNITYSDK_OFFSET(0x1AEBE880)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1AEBE6C0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEBF420)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AEBFEA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENTORPI_OFFSET UNITYSDK_OFFSET(0x1AEBED70)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1AEBEC50)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AEBDBE0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1AEBF950)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEBE3C0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEBDFD0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEBE640)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1AEBF350)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEBE160)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEBE430)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENEWLINE_OFFSET UNITYSDK_OFFSET(0x1AEC0DE0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AEBF200)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET UNITYSDK_OFFSET(0x1AEBFFB0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1AEC0310)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1AEBFF30)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEBE290)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEBDEA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEBE4C0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AEBFCF0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEBFD60)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AEBF5D0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1AEBDB70)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEBD8B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AEBD5A0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AEBD640)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEBD110)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEncodedRawTextWriter_TypeDefinitionIndex = 1823;

	class XmlEncodedRawTextWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::IO::TextWriter* writer; // 0x20
		::Il2CppArray<::System::Byte>* bufBytes; // 0x28
		::Il2CppArray<::System::Int32>* textContentMarks; // 0x30
		::System::Text::Encoding* encoding; // 0x38
		::System::String* newLineChars; // 0x40
		::System::Xml::XmlCharType xmlCharType; // 0x48
		::System::IO::Stream* stream; // 0x50
		::System::Text::Encoder* encoder; // 0x58
		::System::Xml::CharEntityEncoderFallback* charEntityFallback; // 0x60
		::Il2CppArray<::System::Char>* bufChars; // 0x68
		::System::Int32 bufBytesUsed; // 0x70
		::System::Int32 contentPos; // 0x74
		::System::Xml::XmlOutputMethod outputMethod; // 0x78
		::System::Int32 cdataPos; // 0x7C
		::System::Xml::XmlStandalone standalone; // 0x80
		::System::Int32 bufPos; // 0x84
		::System::Xml::NewLineHandling newLineHandling; // 0x88
		::System::Boolean useAsync; // 0x8C
		::System::Boolean trackTextContent; // 0x8D
		::System::Boolean inTextContent; // 0x8E
		::System::Boolean autoXmlDeclaration; // 0x8F
		::System::Int32 lastMarkPos; // 0x90
		::System::Boolean inAttributeValue; // 0x94
		::System::Boolean writeToNull; // 0x95
		::System::Boolean hadDoubleBracket; // 0x96
		::System::Int32 attrEndPos; // 0x98
		::System::Int32 textPos; // 0x9C
		::System::Int32 bufLen; // 0xA0
		::System::Boolean omitXmlDeclaration; // 0xA4
		::System::Boolean closeOutput; // 0xA5
		::System::Boolean checkCharacters; // 0xA6
		::System::Boolean mergeCDataSections; // 0xA7

		::System::Void _ctor(::System::Xml::XmlWriterSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET))(this, a1);
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

		::System::Void EncodeChars(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FlushEncoder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHENCODER_OFFSET))(this);
		}

		::System::Void WriteAttributeTextBlock(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void WriteElementTextBlock(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void RawText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_OFFSET))(this, a1);
		}

		::System::Void RawText_1(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteRawWithCharChecking(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET))(this, a1, a2);
		}

		::System::Void WriteCommentOrPi(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENTORPI_OFFSET))(this, a1, a2);
		}

		::System::Void WriteCDataSection(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATASECTION_OFFSET))(this, a1);
		}

		static ::System::Char* EncodeSurrogate(::System::Char* a1, ::System::Char* a2, ::System::Char* a3)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODESURROGATE_OFFSET))(a1, a2, a3);
		}

		::System::Char* InvalidXmlChar(::System::Int32 a1, ::System::Char* a2, ::System::Boolean a3)
		{
			return ((::System::Char*(*)(::PVOID, ::System::Int32, ::System::Char*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_INVALIDXMLCHAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EncodeChar(::System::Char*& a1, ::System::Char* a2, ::System::Char*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*&, ::System::Char*, ::System::Char*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ChangeTextContentMark(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHANGETEXTCONTENTMARK_OFFSET))(this, a1);
		}

		::System::Void GrowTextContentMarks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GROWTEXTCONTENTMARKS_OFFSET))(this);
		}

		::System::Char* WriteNewLine(::System::Char* a1)
		{
			return ((::System::Char*(*)(::PVOID, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENEWLINE_OFFSET))(this, a1);
		}

		static ::System::Char* LtEntity(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LTENTITY_OFFSET))(a1);
		}

		static ::System::Char* GtEntity(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GTENTITY_OFFSET))(a1);
		}

		static ::System::Char* AmpEntity(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_AMPENTITY_OFFSET))(a1);
		}

		static ::System::Char* QuoteEntity(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_QUOTEENTITY_OFFSET))(a1);
		}

		static ::System::Char* TabEntity(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_TABENTITY_OFFSET))(a1);
		}

		static ::System::Char* LineFeedEntity(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LINEFEEDENTITY_OFFSET))(a1);
		}

		static ::System::Char* CarriageReturnEntity(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET))(a1);
		}

		static ::System::Char* CharEntity(::System::Char* a1, ::System::Char a2)
		{
			return ((::System::Char*(*)(::System::Char*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHARENTITY_OFFSET))(a1, a2);
		}

		static ::System::Char* RawStartCData(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWSTARTCDATA_OFFSET))(a1);
		}

		static ::System::Char* RawEndCData(::System::Char* a1)
		{
			return ((::System::Char*(*)(::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWENDCDATA_OFFSET))(a1);
		}

		::System::Void ValidateContentChars(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET))(this, a1, a2, a3);
		}
	};
}
