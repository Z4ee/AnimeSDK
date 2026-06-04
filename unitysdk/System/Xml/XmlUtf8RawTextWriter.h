#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/NewLineHandling.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlOutputMethod.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_AMPENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF5F60)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF5FC0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF6500)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARTOUTF8_OFFSET UNITYSDK_OFFSET(0x1AEF6690)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AEF5B70)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1AEF65E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODEMULTIBYTEUTF8_OFFSET UNITYSDK_OFFSET(0x1AEF62D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODESURROGATE_OFFSET UNITYSDK_OFFSET(0x1AEF5FE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEF5D20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHENCODER_OFFSET UNITYSDK_OFFSET(0x1AEF5CD0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AEF5CE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1AEF4040)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GTENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF5F80)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_INVALIDXMLCHAR_OFFSET UNITYSDK_OFFSET(0x1AEF6130)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ISSURROGATEBYTE_OFFSET UNITYSDK_OFFSET(0x1AEF5F50)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LINEFEEDENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF5FD0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LTENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF5F70)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_QUOTEENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF5F90)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWENDCDATA_OFFSET UNITYSDK_OFFSET(0x1AEF64D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWSTARTCDATA_OFFSET UNITYSDK_OFFSET(0x1AEF64E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_1_OFFSET UNITYSDK_OFFSET(0x1AEF6370)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_OFFSET UNITYSDK_OFFSET(0x1AEF36C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AEF3AA0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_TABENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF5FB0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET UNITYSDK_OFFSET(0x1AEF3090)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1AEF4F20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATASECTION_OFFSET UNITYSDK_OFFSET(0x1AEF4280)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1AEF4050)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF4CD0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AEF5770)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENTORPI_OFFSET UNITYSDK_OFFSET(0x1AEF4720)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1AEF45E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AEF3760)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1AEF5210)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEF3E50)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEF3AE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEF4000)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1AEF4C30)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEF3C50)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEF3E90)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENEWLINE_OFFSET UNITYSDK_OFFSET(0x1AEF6310)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AEF4B00)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET UNITYSDK_OFFSET(0x1AEF5810)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1AEF5B30)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1AEF57C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEF3D50)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEF39F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEF3EF0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AEF55A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF55E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AEF4EE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1AEF36F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEF3500)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AEF33F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEF2F80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUtf8RawTextWriter_TypeDefinitionIndex = 1858;

	class XmlUtf8RawTextWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Xml::XmlCharType xmlCharType; // 0x20
		::System::Text::Encoding* encoding; // 0x28
		::System::IO::Stream* stream; // 0x30
		::Il2CppArray<::System::Byte>* bufBytes; // 0x38
		::System::String* newLineChars; // 0x40
		::System::Int32 contentPos; // 0x48
		::System::Int32 attrEndPos; // 0x4C
		::System::Int32 bufLen; // 0x50
		::System::Int32 textPos; // 0x54
		::System::Xml::NewLineHandling newLineHandling; // 0x58
		::System::Int32 bufPos; // 0x5C
		::System::Boolean useAsync; // 0x60
		::System::Boolean hadDoubleBracket; // 0x61
		::System::Xml::XmlStandalone standalone; // 0x64
		::System::Int32 cdataPos; // 0x68
		::System::Boolean inAttributeValue; // 0x6C
		::System::Boolean writeToNull; // 0x6D
		::System::Boolean autoXmlDeclaration; // 0x6E
		::System::Boolean closeOutput; // 0x6F
		::System::Boolean omitXmlDeclaration; // 0x70
		::System::Boolean mergeCDataSections; // 0x71
		::System::Boolean checkCharacters; // 0x72
		::System::Xml::XmlOutputMethod outputMethod; // 0x74

		::System::Void _ctor(::System::Xml::XmlWriterSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void FlushEncoder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHENCODER_OFFSET))(this);
		}

		::System::Void WriteAttributeTextBlock(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void WriteElementTextBlock(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void RawText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_OFFSET))(this, a1);
		}

		::System::Void RawText_1(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteRawWithCharChecking(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET))(this, a1, a2);
		}

		::System::Void WriteCommentOrPi(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENTORPI_OFFSET))(this, a1, a2);
		}

		::System::Void WriteCDataSection(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATASECTION_OFFSET))(this, a1);
		}

		static ::System::Boolean IsSurrogateByte(::System::Byte a1)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ISSURROGATEBYTE_OFFSET))(a1);
		}

		static ::System::Byte* EncodeSurrogate(::System::Char* a1, ::System::Char* a2, ::System::Byte* a3)
		{
			return ((::System::Byte*(*)(::System::Char*, ::System::Char*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODESURROGATE_OFFSET))(a1, a2, a3);
		}

		::System::Byte* InvalidXmlChar(::System::Int32 a1, ::System::Byte* a2, ::System::Boolean a3)
		{
			return ((::System::Byte*(*)(::PVOID, ::System::Int32, ::System::Byte*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_INVALIDXMLCHAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EncodeChar(::System::Char*& a1, ::System::Char* a2, ::System::Byte*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*&, ::System::Char*, ::System::Byte*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODECHAR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Byte* EncodeMultibyteUTF8(::System::Int32 a1, ::System::Byte* a2)
		{
			return ((::System::Byte*(*)(::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODEMULTIBYTEUTF8_OFFSET))(a1, a2);
		}

		static ::System::Void CharToUTF8(::System::Char*& a1, ::System::Char* a2, ::System::Byte*& a3)
		{
			return ((::System::Void(*)(::System::Char*&, ::System::Char*, ::System::Byte*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARTOUTF8_OFFSET))(a1, a2, a3);
		}

		::System::Byte* WriteNewLine(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENEWLINE_OFFSET))(this, a1);
		}

		static ::System::Byte* LtEntity(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LTENTITY_OFFSET))(a1);
		}

		static ::System::Byte* GtEntity(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GTENTITY_OFFSET))(a1);
		}

		static ::System::Byte* AmpEntity(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_AMPENTITY_OFFSET))(a1);
		}

		static ::System::Byte* QuoteEntity(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_QUOTEENTITY_OFFSET))(a1);
		}

		static ::System::Byte* TabEntity(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_TABENTITY_OFFSET))(a1);
		}

		static ::System::Byte* LineFeedEntity(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LINEFEEDENTITY_OFFSET))(a1);
		}

		static ::System::Byte* CarriageReturnEntity(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET))(a1);
		}

		static ::System::Byte* CharEntity(::System::Byte* a1, ::System::Char a2)
		{
			return ((::System::Byte*(*)(::System::Byte*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARENTITY_OFFSET))(a1, a2);
		}

		static ::System::Byte* RawStartCData(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWSTARTCDATA_OFFSET))(a1);
		}

		static ::System::Byte* RawEndCData(::System::Byte* a1)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWENDCDATA_OFFSET))(a1);
		}

		::System::Void ValidateContentChars(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET))(this, a1, a2, a3);
		}
	};
}
