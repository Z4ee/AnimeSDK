#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlEventCache_XmlEventType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x167710)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0xC36980)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING1_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING2_OFFSET UNITYSDK_OFFSET(0x676BA0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_GET_STRING3_OFFSET UNITYSDK_OFFSET(0xA4AEC0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_1_OFFSET UNITYSDK_OFFSET(0x387D9D0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_2_OFFSET UNITYSDK_OFFSET(0x38D0290)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_3_OFFSET UNITYSDK_OFFSET(0x393A0C0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_4_OFFSET UNITYSDK_OFFSET(0x393A0E0)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_5_OFFSET UNITYSDK_OFFSET(0x393A100)
#define SYSTEM_XML_XMLEVENTCACHE_XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x167520)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEventCache_XmlEvent_TypeDefinitionIndex = 1831;

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
