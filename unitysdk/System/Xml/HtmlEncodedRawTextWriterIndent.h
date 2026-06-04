#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/HtmlEncodedRawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE23C20)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x1AE23560)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE23950)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AE235F0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE23A30)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1AE238D0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE23B30)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE23620)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE235A0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE23490)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlEncodedRawTextWriterIndent_TypeDefinitionIndex = 1791;

	class HtmlEncodedRawTextWriterIndent : public ::System::Xml::HtmlEncodedRawTextWriter
	{
	public:
		::System::String* indentChars; // 0xD0
		::System::Boolean newLineOnAttributes; // 0xD8
		::System::Int32 endBlockPos; // 0xDC
		::System::Int32 indentLevel; // 0xE0

		::System::Void _ctor(::System::IO::TextWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET))(this, a1);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(this);
		}
	};
}
