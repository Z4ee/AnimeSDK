#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"

namespace System { class Exception; }
namespace System::Xml { class XmlValidatingReaderImpl; }
namespace System::Xml::Schema { class ValidationEventHandler; }

#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING_ADDHANDLER_OFFSET UNITYSDK_OFFSET(0x1ACDF330)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING_SYSTEM_XML_IVALIDATIONEVENTHANDLING_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1ACDF1B0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING_SYSTEM_XML_IVALIDATIONEVENTHANDLING_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1ACDF1C0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDF1A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlValidatingReaderImpl_ValidationEventHandling_TypeDefinitionIndex = 1741;

	class XmlValidatingReaderImpl_ValidationEventHandling : public ::System::Object
	{
	public:
		::System::Xml::XmlValidatingReaderImpl* reader; // 0x10
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x18

		::System::Void _ctor(::System::Xml::XmlValidatingReaderImpl* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlValidatingReaderImpl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING__CTOR_OFFSET))(this, reader);
		}

		::System::Object* System_Xml_IValidationEventHandling_get_EventHandler()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING_SYSTEM_XML_IVALIDATIONEVENTHANDLING_GET_EVENTHANDLER_OFFSET))(this);
		}

		::System::Void System_Xml_IValidationEventHandling_SendEvent(::System::Exception* exception, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING_SYSTEM_XML_IVALIDATIONEVENTHANDLING_SENDEVENT_OFFSET))(this, exception, severity);
		}

		::System::Void AddHandler(::System::Xml::Schema::ValidationEventHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATIONEVENTHANDLING_ADDHANDLER_OFFSET))(this, handler);
		}
	};
}
