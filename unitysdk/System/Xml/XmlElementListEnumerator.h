#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlElementList; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLELEMENTLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE4B940)
#define SYSTEM_XML_XMLELEMENTLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DE4B880)
#define SYSTEM_XML_XMLELEMENTLISTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DE4B910)
#define SYSTEM_XML_XMLELEMENTLISTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4B850)

namespace System::Xml
{
	inline static constexpr unsigned int XmlElementListEnumerator_TypeDefinitionIndex = 1763;

	class XmlElementListEnumerator : public ::System::Object
	{
	public:
		::System::Xml::XmlElementList* list; // 0x10
		::System::Xml::XmlNode* curElem; // 0x18
		::System::Int32 changeCount; // 0x20

		::System::Void _ctor(::System::Xml::XmlElementList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElementList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLISTENUMERATOR__CTOR_OFFSET))(this, list);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLISTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLISTENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLISTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
