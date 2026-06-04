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

#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x1AE21C60)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET UNITYSDK_OFFSET(0x1AE22880)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE22220)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AE22BE0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AE22CA0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AE21E00)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE227F0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE223F0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1AE22B80)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE22540)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1AE22B20)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x1AE231B0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1AE22B60)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEMETAELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE22280)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AE22910)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE22690)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE22100)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AE22A50)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AE22C40)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x1AE22D30)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1AE21DF0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AE21DE0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE21DB0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE21BB0)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlEncodedRawTextWriter_TypeDefinitionIndex = 1790;

	class HtmlEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter
	{
	public:
		static ::System::Xml::TernaryTreeReadOnly** StaticGet_attributePropertySearch()
		{
			return (::System::Xml::TernaryTreeReadOnly**)Il2CppClass::FromTypeDefinitionIndex(HtmlEncodedRawTextWriter_TypeDefinitionIndex)->GetStaticField(0x13FD0);
		}
		static ::System::Xml::TernaryTreeReadOnly** StaticGet_elementPropertySearch()
		{
			return (::System::Xml::TernaryTreeReadOnly**)Il2CppClass::FromTypeDefinitionIndex(HtmlEncodedRawTextWriter_TypeDefinitionIndex)->GetStaticField(0x13FD8);
		}
		::System::String* mediaType; // 0xA8
		::Il2CppArray<::System::Byte>* uriEscapingBuffer; // 0xB0
		::System::Xml::ByteStack* elementScope; // 0xB8
		::System::Boolean doNotEscapeUriAttributes; // 0xC0
		::System::Boolean endsWithAmpersand; // 0xC1
		::System::Xml::ElementProperties currentElementProperties; // 0xC4
		::System::Xml::AttributeProperties currentAttributeProperties; // 0xC8

		::System::Void _ctor(::System::IO::TextWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_INIT_OFFSET))(this, a1);
		}

		::System::Void WriteMetaElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEMETAELEMENT_OFFSET))(this);
		}

		::System::Void WriteHtmlElementTextBlock(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void WriteHtmlAttributeTextBlock(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void WriteHtmlAttributeText(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET))(this, a1, a2);
		}

		::System::Void WriteUriAttributeText(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET))(this, a1, a2);
		}

		::System::Void OutputRestAmps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET))(this);
		}
	};
}
