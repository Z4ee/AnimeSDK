#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlEventCache_XmlEvent.h"
#include "unitysdk/System/Xml/XmlEventCache_XmlEventType.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"
#include "unitysdk/System/Xml/Xsl/Runtime/StringConcat.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_1_OFFSET UNITYSDK_OFFSET(0x183E1640)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_2_OFFSET UNITYSDK_OFFSET(0x183E1730)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_3_OFFSET UNITYSDK_OFFSET(0x183E14F0)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_4_OFFSET UNITYSDK_OFFSET(0x183E1420)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_5_OFFSET UNITYSDK_OFFSET(0x183E1A00)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x183E01F0)
#define SYSTEM_XML_XMLEVENTCACHE_CLOSE_OFFSET UNITYSDK_OFFSET(0x183E1CB0)
#define SYSTEM_XML_XMLEVENTCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183E1DA0)
#define SYSTEM_XML_XMLEVENTCACHE_ENDEVENTS_OFFSET UNITYSDK_OFFSET(0x183E01A0)
#define SYSTEM_XML_XMLEVENTCACHE_EVENTSTOWRITER_OFFSET UNITYSDK_OFFSET(0x183E0230)
#define SYSTEM_XML_XMLEVENTCACHE_FLUSH_OFFSET UNITYSDK_OFFSET(0x183E1CF0)
#define SYSTEM_XML_XMLEVENTCACHE_NEWEVENT_OFFSET UNITYSDK_OFFSET(0x183E20B0)
#define SYSTEM_XML_XMLEVENTCACHE_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x183E1F20)
#define SYSTEM_XML_XMLEVENTCACHE_TOBYTES_OFFSET UNITYSDK_OFFSET(0x183E1B80)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x183E1AD0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x183E1C00)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x183E15F0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x183E19A0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x183E1840)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x183E1690)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x183E13B0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x183E15B0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDBASE64_OFFSET UNITYSDK_OFFSET(0x183E2070)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x183E1F60)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x183E1950)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x183E1FC0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x183E2020)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x183E16E0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x183E1900)
#define SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET UNITYSDK_OFFSET(0x183E18B0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x183E1550)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x183E1490)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x183E17D0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x183E1A50)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x183E1D30)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x183E1780)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x183E1ED0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x183E1E50)
#define SYSTEM_XML_XMLEVENTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x183E0190)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEventCache_TypeDefinitionIndex = 1836;

	class XmlEventCache : public ::System::Xml::XmlRawWriter
	{
	public:
		::Il2CppArray<::System::Xml::XmlEventCache_XmlEvent>* pageCurr; // 0x20
		::System::Xml::Xsl::Runtime::StringConcat singleText; // 0x28
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Xml::XmlEventCache_XmlEvent>*>* pages; // 0x60
		::System::String* baseUri; // 0x68
		::System::Int32 pageSize; // 0x70
		::System::Boolean hasRootNode; // 0x74

		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EndEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ENDEVENTS_OFFSET))(this);
		}

		::System::Void EventsToWriter(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_EVENTSTOWRITER_OFFSET))(this, a1);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEBASE64_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEBINHEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_FLUSH_OFFSET))(this);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITENAMESPACEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEndBase64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDBASE64_OFFSET))(this);
		}

		::System::Void AddEvent(::System::Xml::XmlEventCache_XmlEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(this, a1);
		}

		::System::Void AddEvent_1(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddEvent_2(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddEvent_3(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddEvent_4(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AddEvent_5(::System::Xml::XmlEventCache_XmlEventType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_5_OFFSET))(this, a1, a2);
		}

		::System::Int32 NewEvent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_NEWEVENT_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* ToBytes(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_TOBYTES_OFFSET))(a1, a2, a3);
		}
	};
}
