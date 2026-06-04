#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/HtmlUtf8RawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE259D0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x1AE253A0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE25700)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AE253E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE257E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1AE25680)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE258E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE25410)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE25350)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlUtf8RawTextWriterIndent_TypeDefinitionIndex = 1794;

	class HtmlUtf8RawTextWriterIndent : public ::System::Xml::HtmlUtf8RawTextWriter
	{
	public:
		::System::String* indentChars; // 0xA0
		::System::Boolean newLineOnAttributes; // 0xA8
		::System::Int32 indentLevel; // 0xAC
		::System::Int32 endBlockPos; // 0xB0

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET))(this, a1);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(this);
		}
	};
}
