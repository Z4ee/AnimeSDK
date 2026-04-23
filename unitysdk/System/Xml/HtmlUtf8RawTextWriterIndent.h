#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/HtmlUtf8RawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x19FB04E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x19FAFE40)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x19FB0200)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x19FAFE80)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x19FB02F0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x19FB0180)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19FB03F0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x19FAFEB0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAFDF0)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlUtf8RawTextWriterIndent_TypeDefinitionIndex = 1794;

	class HtmlUtf8RawTextWriterIndent : public ::System::Xml::HtmlUtf8RawTextWriter
	{
	public:
		::System::String* indentChars; // 0xA0
		::System::Int32 endBlockPos; // 0xA8
		::System::Boolean newLineOnAttributes; // 0xAC
		::System::Int32 indentLevel; // 0xB0

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT__CTOR_OFFSET))(this, stream, settings);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET))(this, settings);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(this);
		}
	};
}
