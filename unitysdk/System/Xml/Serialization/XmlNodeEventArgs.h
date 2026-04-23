#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A005290)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNodeEventArgs_TypeDefinitionIndex = 1975;

	class XmlNodeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* o; // 0x10
		::System::Xml::XmlNode* xmlNode; // 0x18
		::System::Int32 lineNumber; // 0x20
		::System::Int32 linePosition; // 0x24

		::System::Void _ctor(::System::Xml::XmlNode* xmlNode, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_OFFSET))(this, xmlNode, lineNumber, linePosition, o);
		}
	};
}
