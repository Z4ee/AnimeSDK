#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/XmlUtf8RawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Xml { class BitStack; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x1A085670)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_ONROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A0859F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A085970)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1A085FF0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1A085CC0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A085E20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A085EE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A085CD0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A085750)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A085A00)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A085E10)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A085B10)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1A085800)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A085D70)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A085FA0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A085F40)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A085C20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A085880)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A085E90)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A085E30)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A085E40)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A085640)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUtf8RawTextWriterIndent_TypeDefinitionIndex = 1859;

	class XmlUtf8RawTextWriterIndent : public ::System::Xml::XmlUtf8RawTextWriter
	{
	public:
		::System::String* indentChars; // 0x78
		::System::Xml::BitStack* mixedContentStack; // 0x80
		::System::Boolean mixedContent; // 0x88
		::System::Boolean newLineOnAttributes; // 0x89
		::System::Int32 indentLevel; // 0x8C
		::System::Xml::ConformanceLevel conformanceLevel; // 0x90

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT__CTOR_OFFSET))(this, stream, settings);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void OnRootElement(::System::Xml::ConformanceLevel currentConformanceLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ConformanceLevel))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_ONROOTELEMENT_OFFSET))(this, currentConformanceLevel);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* target, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, target, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET))(this, settings);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(this);
		}
	};
}
