#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class WeakReference; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlElementList; }
namespace System::Xml { class XmlNodeChangedEventArgs; }
namespace System::Xml { class XmlNodeChangedEventHandler; }

#define SYSTEM_XML_XMLELEMENTLISTLISTENER_ONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1D2E0CD0)
#define SYSTEM_XML_XMLELEMENTLISTLISTENER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1D2E0F40)
#define SYSTEM_XML_XMLELEMENTLISTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E0B50)

namespace System::Xml
{
	inline static constexpr unsigned int XmlElementListListener_TypeDefinitionIndex = 1765;

	class XmlElementListListener : public ::System::Object
	{
	public:
		::System::WeakReference* elemList; // 0x10
		::System::Xml::XmlDocument* doc; // 0x18
		::System::Xml::XmlNodeChangedEventHandler* nodeChangeHandler; // 0x20

		::System::Void _ctor(::System::Xml::XmlDocument* doc, ::System::Xml::XmlElementList* elemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlElementList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLISTLISTENER__CTOR_OFFSET))(this, doc, elemList);
		}

		::System::Void OnListChanged(::System::Object* sender, ::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLISTLISTENER_ONLISTCHANGED_OFFSET))(this, sender, args);
		}

		::System::Void Unregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLISTLISTENER_UNREGISTER_OFFSET))(this);
		}
	};
}
