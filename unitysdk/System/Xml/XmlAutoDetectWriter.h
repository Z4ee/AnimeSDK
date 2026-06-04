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

#define SYSTEM_XML_XMLAUTODETECTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AEA94F0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_CREATEWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x1AEA8B50)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ENSUREWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x1AEA8A20)
#define SYSTEM_XML_XMLAUTODETECTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AEA9530)
#define SYSTEM_XML_XMLAUTODETECTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1AEA9780)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ISHTMLTAG_OFFSET UNITYSDK_OFFSET(0x1AEA8AF0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x1AEA95C0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AEA96A0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_TEXTBLOCKCREATESWRITER_OFFSET UNITYSDK_OFFSET(0x1AEA8E80)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1AEA9430)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1AEA9490)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1AEA8DF0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEA9390)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AEA9170)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1AEA8F30)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AEA89B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEA8DC0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEA96D0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEA9800)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1AEA9340)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEA9700)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEA9730)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AEA8FB0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1AEA92B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1AEA9220)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEA8D60)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEA8A30)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEA97B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AEA90C0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEA93E0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1AEA9570)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AEA9040)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1AEA9650)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AEA9600)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AEA8890)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AEA8920)
#define SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA8810)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAutoDetectWriter_TypeDefinitionIndex = 1822;

	class XmlAutoDetectWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Xml::OnRemoveWriter* onRemove; // 0x20
		::System::IO::Stream* strm; // 0x28
		::System::IO::TextWriter* textWriter; // 0x30
		::System::Xml::XmlWriterSettings* writerSettings; // 0x38
		::System::Xml::XmlEventCache* eventCache; // 0x40
		::System::Xml::XmlRawWriter* wrapped; // 0x48

		::System::Void _ctor(::System::Xml::XmlWriterSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBASE64_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBINHEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_SET_NAMESPACERESOLVER_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		static ::System::Boolean IsHtmlTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_ISHTMLTAG_OFFSET))(a1);
		}

		::System::Void EnsureWrappedWriter(::System::Xml::XmlOutputMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlOutputMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_ENSUREWRAPPEDWRITER_OFFSET))(this, a1);
		}

		::System::Boolean TextBlockCreatesWriter(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_TEXTBLOCKCREATESWRITER_OFFSET))(this, a1);
		}

		::System::Void CreateWrappedWriter(::System::Xml::XmlOutputMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlOutputMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_CREATEWRAPPEDWRITER_OFFSET))(this, a1);
		}
	};
}
