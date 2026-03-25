#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlEncodedRawTextWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x185F1F30)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x185F1EF0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x185F1F40)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x185F1FD0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x185F20D0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x185F1FA0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x185F1EB0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185F1F10)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x185F1ED0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x185F1FC0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x185F1EE0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x185F1F20)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x185F1FB0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x185F21F0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x185F2160)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185F1F00)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x185F1EC0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x185F2060)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x185F1FE0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x185F1FF0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x185F1EA0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x185F1E90)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185F1E80)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x185F1DE0)

namespace System::Xml
{
	inline static constexpr unsigned int TextEncodedRawTextWriter_TypeDefinitionIndex = 1816;

	class TextEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter
	{
	public:
		::System::Void _ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_OFFSET))(this, writer, settings);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_1_OFFSET))(this, stream, settings);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, prefix, ns);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* textBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(this, textBlock);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET))(this, data);
		}
	};
}
