#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlEventCache_XmlEventType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x112A0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING1_OFFSET UNITYSDK_OFFSET(0x6020)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING2_OFFSET UNITYSDK_OFFSET(0x14420)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING3_OFFSET UNITYSDK_OFFSET(0x2CFE0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_1_OFFSET UNITYSDK_OFFSET(0x31FA0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_2_OFFSET UNITYSDK_OFFSET(0x3B75510)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_3_OFFSET UNITYSDK_OFFSET(0x3B72690)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_4_OFFSET UNITYSDK_OFFSET(0x3BA3CF0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_5_OFFSET UNITYSDK_OFFSET(0x3BA3D10)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x2E950)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEventCache_XmlEvent_TypeDefinitionIndex = 1838;

	struct alignas(8) XmlEventCache_XmlEvent
	{
		::System::Xml::XmlEventCache_XmlEventType eventType; // 0x10
		::System::String* s1; // 0x18
		::System::String* s2; // 0x20
		::System::String* s3; // 0x28
		::System::Object* o; // 0x30

		::System::Void InitEvent(::System::Xml::XmlEventCache_XmlEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_OFFSET))(this, a1);
		}

		::System::Void InitEvent_1(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void InitEvent_2(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitEvent_3(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitEvent_4(::System::Xml::XmlEventCache_XmlEventType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void InitEvent_5(::System::Xml::XmlEventCache_XmlEventType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_5_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlEventCache_XmlEventType get_EventType()
		{
			return ((::System::Xml::XmlEventCache_XmlEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::String* get_String1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING1_OFFSET))(this);
		}

		::System::String* get_String2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING2_OFFSET))(this);
		}

		::System::String* get_String3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING3_OFFSET))(this);
		}

		::System::Object* get_Object()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_OBJECT_OFFSET))(this);
		}
	};
}
