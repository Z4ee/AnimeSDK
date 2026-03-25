#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/HtmlEncodedRawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x18573750)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x18573010)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x18573470)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x185730A0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18573560)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x185733F0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18573660)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x185730D0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18573050)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18572F40)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlEncodedRawTextWriterIndent_TypeDefinitionIndex = 1790;

	class HtmlEncodedRawTextWriterIndent : public ::System::Xml::HtmlEncodedRawTextWriter
	{
	public:
		::System::String* indentChars; // 0xD0
		::System::Int32 endBlockPos; // 0xD8
		::System::Int32 indentLevel; // 0xDC
		::System::Boolean newLineOnAttributes; // 0xE0

		::System::Void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_OFFSET))(this, writer, settings);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_1_OFFSET))(this, stream, settings);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET))(this, settings);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(this);
		}
	};
}
