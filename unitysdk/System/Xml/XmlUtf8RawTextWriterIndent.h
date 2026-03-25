#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/XmlUtf8RawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Xml { class BitStack; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x1864AD20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_ONROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x1864B0C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1864B040)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1864B6C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1864B390)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1864B4F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1864B5B0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1864B3A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1864AE10)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1864B0D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1864B4E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1864B1E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1864AED0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1864B440)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1864B670)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1864B610)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1864B2F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1864AF50)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1864B560)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1864B500)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1864B510)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1864ACF0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUtf8RawTextWriterIndent_TypeDefinitionIndex = 1858;

	class XmlUtf8RawTextWriterIndent : public ::System::Xml::XmlUtf8RawTextWriter
	{
	public:
		::System::Xml::BitStack* mixedContentStack; // 0x78
		::System::String* indentChars; // 0x80
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
