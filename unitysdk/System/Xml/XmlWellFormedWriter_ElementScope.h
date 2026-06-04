#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Xml { class XmlRawWriter; }

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ELEMENTSCOPE_SET_OFFSET UNITYSDK_OFFSET(0x386E010)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ELEMENTSCOPE_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x386E040)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ELEMENTSCOPE_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x386E080)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_ElementScope_TypeDefinitionIndex = 1864;

	struct alignas(8) XmlWellFormedWriter_ElementScope
	{
		::System::Int32 prevNSTop; // 0x10
		::System::String* prefix; // 0x18
		::System::String* localName; // 0x20
		::System::String* namespaceUri; // 0x28
		::System::Xml::XmlSpace xmlSpace; // 0x30
		::System::String* xmlLang; // 0x38

		::System::Void Set(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ELEMENTSCOPE_SET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEndElement(::System::Xml::XmlRawWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlRawWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ELEMENTSCOPE_WRITEENDELEMENT_OFFSET))(this, a1);
		}

		::System::Void WriteFullEndElement(::System::Xml::XmlRawWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlRawWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ELEMENTSCOPE_WRITEFULLENDELEMENT_OFFSET))(this, a1);
		}
	};
}
