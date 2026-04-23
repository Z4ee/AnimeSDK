#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/AttributeProperties.h"
#include "unitysdk/System/Xml/ElementProperties.h"
#include "unitysdk/System/Xml/XmlEncodedRawTextWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class ByteStack; }
namespace System::Xml { class TernaryTreeReadOnly; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x19FAC240)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET UNITYSDK_OFFSET(0x19FACFF0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x19FAC8A0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x19FAD3C0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x19FAD480)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x19FAC3E0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19FACF50)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x19FACA70)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x19FAD360)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x19FACC00)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x19FAD300)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x19FAD990)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x19FAD340)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEMETAELEMENT_OFFSET UNITYSDK_OFFSET(0x19FAC900)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x19FAD0B0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19FACD90)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x19FAC740)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x19FAD230)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x19FAD420)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x19FAD510)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x19FAC3D0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x19FAC3C0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FAC390)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAC190)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlEncodedRawTextWriter_TypeDefinitionIndex = 1790;

	class HtmlEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter
	{
	public:
		static ::System::Xml::TernaryTreeReadOnly** StaticGet_elementPropertySearch()
		{
			return (::System::Xml::TernaryTreeReadOnly**)Il2CppClass::FromTypeDefinitionIndex(HtmlEncodedRawTextWriter_TypeDefinitionIndex)->GetStaticField(0xCE40);
		}
		static ::System::Xml::TernaryTreeReadOnly** StaticGet_attributePropertySearch()
		{
			return (::System::Xml::TernaryTreeReadOnly**)Il2CppClass::FromTypeDefinitionIndex(HtmlEncodedRawTextWriter_TypeDefinitionIndex)->GetStaticField(0xCE48);
		}
		::Il2CppArray<::System::Byte>* uriEscapingBuffer; // 0xA8
		::System::Xml::ByteStack* elementScope; // 0xB0
		::System::String* mediaType; // 0xB8
		::System::Xml::AttributeProperties currentAttributeProperties; // 0xC0
		::System::Boolean doNotEscapeUriAttributes; // 0xC4
		::System::Boolean endsWithAmpersand; // 0xC5
		::System::Xml::ElementProperties currentElementProperties; // 0xC8

		::System::Void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_OFFSET))(this, writer, settings);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET))(this, stream, settings);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteProcessingInstruction(::System::String* target, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, target, text);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_INIT_OFFSET))(this, settings);
		}

		::System::Void WriteMetaElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEMETAELEMENT_OFFSET))(this);
		}

		::System::Void WriteHtmlElementTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteHtmlAttributeTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteHtmlAttributeText(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteUriAttributeText(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void OutputRestAmps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET))(this);
		}
	};
}
