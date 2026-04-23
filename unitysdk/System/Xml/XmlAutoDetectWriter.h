#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlOutputMethod.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class OnRemoveWriter; }
namespace System::Xml { class XmlEventCache; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLAUTODETECTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A0378B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_CREATEWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x1A036EA0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ENSUREWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x1A036D70)
#define SYSTEM_XML_XMLAUTODETECTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A0378F0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1A037B40)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ISHTMLTAG_OFFSET UNITYSDK_OFFSET(0x1A036E40)
#define SYSTEM_XML_XMLAUTODETECTWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x1A037980)
#define SYSTEM_XML_XMLAUTODETECTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A037A60)
#define SYSTEM_XML_XMLAUTODETECTWRITER_TEXTBLOCKCREATESWRITER_OFFSET UNITYSDK_OFFSET(0x1A0371C0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1A0377F0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1A037850)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1A037130)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A037750)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A037510)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A0372B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A036D00)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A037100)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A037A90)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A037BC0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A037700)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A037AC0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A037AF0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A037340)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A037670)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A0375D0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0370A0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A036D80)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A037B70)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A037460)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A0377A0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1A037930)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A0373D0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1A037A10)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A0379C0)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A036BE0)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A036C70)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A036B60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAutoDetectWriter_TypeDefinitionIndex = 1822;

	class XmlAutoDetectWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::IO::TextWriter* textWriter; // 0x20
		::System::Xml::XmlWriterSettings* writerSettings; // 0x28
		::System::Xml::OnRemoveWriter* onRemove; // 0x30
		::System::IO::Stream* strm; // 0x38
		::System::Xml::XmlRawWriter* wrapped; // 0x40
		::System::Xml::XmlEventCache* eventCache; // 0x48

		::System::Void _ctor(::System::Xml::XmlWriterSettings* writerSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_OFFSET))(this, writerSettings);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* textWriter, ::System::Xml::XmlWriterSettings* writerSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_1_OFFSET))(this, textWriter, writerSettings);
		}

		::System::Void _ctor_2(::System::IO::Stream* strm, ::System::Xml::XmlWriterSettings* writerSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_2_OFFSET))(this, strm, writerSettings);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBINHEX_OFFSET))(this, buffer, index, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_SET_NAMESPACERESOLVER_OFFSET))(this, value);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, prefix, ns);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, prefix);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		static ::System::Boolean IsHtmlTag(::System::String* tagName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_ISHTMLTAG_OFFSET))(tagName);
		}

		::System::Void EnsureWrappedWriter(::System::Xml::XmlOutputMethod outMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlOutputMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_ENSUREWRAPPEDWRITER_OFFSET))(this, outMethod);
		}

		::System::Boolean TextBlockCreatesWriter(::System::String* textBlock)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_TEXTBLOCKCREATESWRITER_OFFSET))(this, textBlock);
		}

		::System::Void CreateWrappedWriter(::System::Xml::XmlOutputMethod outMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlOutputMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_CREATEWRAPPEDWRITER_OFFSET))(this, outMethod);
		}
	};
}
