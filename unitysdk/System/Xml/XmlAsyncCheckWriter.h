#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/WriteState.h"
#include "unitysdk/System/Xml/XmlWriter.h"

namespace System { class String; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_XML_XMLASYNCCHECKWRITER_CHECKASYNC_OFFSET UNITYSDK_OFFSET(0x1A033F50)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A0345E0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0346C0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A034610)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1A0345B0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1A034640)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1A034510)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1A034560)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1A034220)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A034330)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A034430)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A034260)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A034090)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0341F0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A034060)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A034140)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A0342F0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A034170)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A0342A0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A0344D0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A034480)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0341A0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x1A034020)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A033FF0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A0340F0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A0343B0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A0343F0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1A034680)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A034370)
#define SYSTEM_XML_XMLASYNCCHECKWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A033EE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckWriter_TypeDefinitionIndex = 1821;

	class XmlAsyncCheckWriter : public ::System::Xml::XmlWriter
	{
	public:
		::System::Threading::Tasks::Task* lastTask; // 0x10
		::System::Xml::XmlWriter* coreWriter; // 0x18

		::System::Void _ctor(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER__CTOR_OFFSET))(this, writer);
		}

		::System::Void CheckAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_CHECKASYNC_OFFSET))(this);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, standalone);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBINHEX_OFFSET))(this, buffer, index, count);
		}

		::System::Xml::WriteState get_WriteState()
		{
			return ((::System::Xml::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_FLUSH_OFFSET))(this);
		}

		::System::String* LookupPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_LOOKUPPREFIX_OFFSET))(this, ns);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
