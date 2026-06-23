#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/WriteState.h"
#include "unitysdk/System/Xml/XmlWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define SYSTEM_DATA_DATATEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E8881B0)
#define SYSTEM_DATA_DATATEXTWRITER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x1E887D50)
#define SYSTEM_DATA_DATATEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E8881E0)
#define SYSTEM_DATA_DATATEXTWRITER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x1E887DA0)
#define SYSTEM_DATA_DATATEXTWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1E888180)
#define SYSTEM_DATA_DATATEXTWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1E888210)
#define SYSTEM_DATA_DATATEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1E888030)
#define SYSTEM_DATA_DATATEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1E888150)
#define SYSTEM_DATA_DATATEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1E888060)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1E887F00)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E888000)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E887ED0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E887F70)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1E8880C0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E887FA0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1E888090)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E887FD0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x1E887EA0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E887E70)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E887F40)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1E888120)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1E8880F0)
#define SYSTEM_DATA_DATATEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E887D90)

namespace System::Data
{
	inline static constexpr unsigned int DataTextWriter_TypeDefinitionIndex = 38706;

	class DataTextWriter : public ::System::Xml::XmlWriter
	{
	public:
		::System::Xml::XmlWriter* _xmltextWriter; // 0x18

		::System::Void _ctor(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER__CTOR_OFFSET))(this, w);
		}

		static ::System::Xml::XmlWriter* CreateWriter(::System::Xml::XmlWriter* xw)
		{
			return ((::System::Xml::XmlWriter*(*)(::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_CREATEWRITER_OFFSET))(xw);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, standalone);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Xml::WriteState get_WriteState()
		{
			return ((::System::Xml::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::String* LookupPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_LOOKUPPREFIX_OFFSET))(this, ns);
		}
	};
}
