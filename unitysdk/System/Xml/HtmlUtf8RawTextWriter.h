#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/AttributeProperties.h"
#include "unitysdk/System/Xml/ElementProperties.h"
#include "unitysdk/System/Xml/XmlStandalone.h"
#include "unitysdk/System/Xml/XmlUtf8RawTextWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Xml { class ByteStack; }
namespace System::Xml { class TernaryTreeReadOnly; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x18573890)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET UNITYSDK_OFFSET(0x18574500)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x18573E60)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18574880)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x18574940)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x18573A00)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18574490)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18574030)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x18574820)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18574190)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x185747C0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x18574DC0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x18574800)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEMETAELEMENT_OFFSET UNITYSDK_OFFSET(0x18573EC0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x185745E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185742F0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x18573D30)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x18574730)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x185748E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x185749A0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x185739F0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x185739E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18573860)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlUtf8RawTextWriter_TypeDefinitionIndex = 1792;

	class HtmlUtf8RawTextWriter : public ::System::Xml::XmlUtf8RawTextWriter
	{
	public:
		static ::System::Xml::TernaryTreeReadOnly** StaticGet_elementPropertySearch()
		{
			return (::System::Xml::TernaryTreeReadOnly**)Il2CppClass::FromTypeDefinitionIndex(HtmlUtf8RawTextWriter_TypeDefinitionIndex)->GetStaticField(0x7620);
		}
		static ::System::Xml::TernaryTreeReadOnly** StaticGet_attributePropertySearch()
		{
			return (::System::Xml::TernaryTreeReadOnly**)Il2CppClass::FromTypeDefinitionIndex(HtmlUtf8RawTextWriter_TypeDefinitionIndex)->GetStaticField(0x7628);
		}
		::Il2CppArray<::System::Byte>* uriEscapingBuffer; // 0x78
		::System::Xml::ByteStack* elementScope; // 0x80
		::System::String* mediaType; // 0x88
		::System::Xml::ElementProperties currentElementProperties; // 0x90
		::System::Xml::AttributeProperties currentAttributeProperties; // 0x94
		::System::Boolean endsWithAmpersand; // 0x98
		::System::Boolean doNotEscapeUriAttributes; // 0x99

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER__CTOR_OFFSET))(this, stream, settings);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteProcessingInstruction(::System::String* target, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, target, text);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_INIT_OFFSET))(this, settings);
		}

		::System::Void WriteMetaElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEMETAELEMENT_OFFSET))(this);
		}

		::System::Void WriteHtmlElementTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteHtmlAttributeTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteHtmlAttributeText(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteUriAttributeText(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void OutputRestAmps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET))(this);
		}
	};
}
