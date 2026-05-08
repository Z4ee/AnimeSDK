#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB24160)
#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB240E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNodeEventArgs_TypeDefinitionIndex = 1859;

	class XmlNodeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Xml::XmlNode* xmlNode; // 0x10
		::System::Object* o; // 0x18
		::System::Int32 lineNumber; // 0x20
		::System::Int32 linePosition; // 0x24

		::System::Void _ctor(::System::Xml::XmlNode* xmlNode, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_OFFSET))(this, xmlNode, lineNumber, linePosition, o);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_1_OFFSET))(this);
		}
	};
}
