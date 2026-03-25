#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x185C6BC0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeEventArgs_TypeDefinitionIndex = 1970;

	class XmlAttributeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Xml::XmlAttribute* attr; // 0x10
		::System::Object* o; // 0x18
		::System::String* qnames; // 0x20
		::System::Int32 linePosition; // 0x28
		::System::Int32 lineNumber; // 0x2C

		::System::Void _ctor(::System::Xml::XmlAttribute* attr, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::Object* o, ::System::String* qnames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTARGS__CTOR_OFFSET))(this, attr, lineNumber, linePosition, o, qnames);
		}
	};
}
