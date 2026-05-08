#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlElementList; }

#define SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AD7AB80)
#define SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AD7AB60)
#define SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AD7AB70)
#define SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD7AB50)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEmptyElementListEnumerator_TypeDefinitionIndex = 1765;

	class XmlEmptyElementListEnumerator : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Xml::XmlElementList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElementList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR__CTOR_OFFSET))(this, list);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEMPTYELEMENTLISTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
