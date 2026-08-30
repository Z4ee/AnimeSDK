#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Xml/XmlNodeChangedAction.h"

namespace System { class String; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLNODECHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x183F53B0)
#define SYSTEM_XML_XMLNODECHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x183D0E30)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeChangedEventArgs_TypeDefinitionIndex = 1915;

	class XmlNodeChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* newValue; // 0x10
		::System::Xml::XmlNode* newParent; // 0x18
		::System::String* oldValue; // 0x20
		::System::Xml::XmlNode* node; // 0x28
		::System::Xml::XmlNode* oldParent; // 0x30
		::System::Xml::XmlNodeChangedAction action; // 0x38

		::System::Void _ctor(::System::Xml::XmlNode* a1, ::System::Xml::XmlNode* a2, ::System::Xml::XmlNode* a3, ::System::String* a4, ::System::String* a5, ::System::Xml::XmlNodeChangedAction a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNodeChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTARGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Xml::XmlNodeChangedAction get_Action()
		{
			return ((::System::Xml::XmlNodeChangedAction(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTARGS_GET_ACTION_OFFSET))(this);
		}
	};
}
