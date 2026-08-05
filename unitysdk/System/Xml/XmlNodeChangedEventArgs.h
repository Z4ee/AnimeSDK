#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Xml/XmlNodeChangedAction.h"

namespace System { class String; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLNODECHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2596C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeChangedEventArgs_TypeDefinitionIndex = 1778;

	class XmlNodeChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Xml::XmlNode* oldParent; // 0x10
		::System::String* oldValue; // 0x18
		::System::String* newValue; // 0x20
		::System::Xml::XmlNode* node; // 0x28
		::System::Xml::XmlNode* newParent; // 0x30
		::System::Xml::XmlNodeChangedAction action; // 0x38

		::System::Void _ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::System::String* oldValue, ::System::String* newValue, ::System::Xml::XmlNodeChangedAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNodeChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODECHANGEDEVENTARGS__CTOR_OFFSET))(this, node, oldParent, newParent, oldValue, newValue, action);
		}
	};
}
