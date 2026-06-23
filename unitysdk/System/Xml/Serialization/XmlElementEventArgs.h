#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlElement; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C172B10)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C172A90)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementEventArgs_TypeDefinitionIndex = 1856;

	class XmlElementEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* qnames; // 0x10
		::System::Object* o; // 0x18
		::System::Xml::XmlElement* elem; // 0x20
		::System::Int32 lineNumber; // 0x28
		::System::Int32 linePosition; // 0x2C

		::System::Void _ctor(::System::Xml::XmlElement* elem, ::System::Int32 lineNumber, ::System::Int32 linePosition, ::System::Object* o, ::System::String* qnames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTARGS__CTOR_OFFSET))(this, elem, lineNumber, linePosition, o, qnames);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTARGS__CTOR_1_OFFSET))(this);
		}
	};
}
