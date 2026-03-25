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

#define SYSTEM_XML_XMLAUTODETECTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x185FCB20)
#define SYSTEM_XML_XMLAUTODETECTWRITER_CREATEWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x185FC110)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ENSUREWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x185FBFE0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x185FCB60)
#define SYSTEM_XML_XMLAUTODETECTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x185FCDB0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ISHTMLTAG_OFFSET UNITYSDK_OFFSET(0x185FC0B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x185FCBF0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x185FCCD0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_TEXTBLOCKCREATESWRITER_OFFSET UNITYSDK_OFFSET(0x185FC430)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x185FCA60)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x185FCAC0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x185FC3A0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x185FC9C0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x185FC780)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x185FC520)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x185FBF70)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185FC370)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x185FCD00)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x185FCE30)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x185FC970)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x185FCD30)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x185FCD60)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x185FC5B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x185FC8E0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x185FC840)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185FC310)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x185FBFF0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x185FCDE0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x185FC6D0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x185FCA10)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x185FCBA0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x185FC640)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x185FCC80)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x185FCC30)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185FBE50)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185FBEE0)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x185FBDD0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAutoDetectWriter_TypeDefinitionIndex = 1821;

	class XmlAutoDetectWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Xml::XmlEventCache* eventCache; // 0x20
		::System::IO::TextWriter* textWriter; // 0x28
		::System::Xml::XmlRawWriter* wrapped; // 0x30
		::System::Xml::OnRemoveWriter* onRemove; // 0x38
		::System::Xml::XmlWriterSettings* writerSettings; // 0x40
		::System::IO::Stream* strm; // 0x48

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
