#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/XmlEncodedRawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class BitStack; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x1A04F250)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_ONROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A04F620)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A04F5A0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1A04FCA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1A04F910)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A04FA90)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A04FB90)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A04F920)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A04F370)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A04F630)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A04FA80)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A04F750)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1A04F430)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A04F9D0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A04FC30)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A04FBA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A04F870)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A04F4B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A04FB20)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A04FAA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A04FAB0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A04F340)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F1A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEncodedRawTextWriterIndent_TypeDefinitionIndex = 1824;

	class XmlEncodedRawTextWriterIndent : public ::System::Xml::XmlEncodedRawTextWriter
	{
	public:
		::System::String* indentChars; // 0xA8
		::System::Xml::BitStack* mixedContentStack; // 0xB0
		::System::Xml::ConformanceLevel conformanceLevel; // 0xB8
		::System::Boolean newLineOnAttributes; // 0xBC
		::System::Boolean mixedContent; // 0xBD
		::System::Int32 indentLevel; // 0xC0

		::System::Void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT__CTOR_OFFSET))(this, writer, settings);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT__CTOR_1_OFFSET))(this, stream, settings);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void OnRootElement(::System::Xml::ConformanceLevel currentConformanceLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ConformanceLevel))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_ONROOTELEMENT_OFFSET))(this, currentConformanceLevel);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* target, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, target, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET))(this, settings);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(this);
		}
	};
}
