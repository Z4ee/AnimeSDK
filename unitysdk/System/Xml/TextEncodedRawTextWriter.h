#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlEncodedRawTextWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1AE9EEC0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE9EE80)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1AE9EED0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AE9EF60)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AE9F060)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1AE9EF30)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AE9EE40)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE9EEA0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE9EE60)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1AE9EF50)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE9EE70)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AE9EEB0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AE9EF40)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1AE9F180)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1AE9F0F0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE9EE90)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE9EE50)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AE9EFF0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AE9EF70)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AE9EF80)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1AE9EE30)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AE9EE20)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE9EE10)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9ED70)

namespace System::Xml
{
	inline static constexpr unsigned int TextEncodedRawTextWriter_TypeDefinitionIndex = 1817;

	class TextEncodedRawTextWriter : public ::System::Xml::XmlEncodedRawTextWriter
	{
	public:
		::System::Void _ctor(::System::IO::TextWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET))(this, a1);
		}
	};
}
