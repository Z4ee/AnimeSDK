#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlElement; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE78210)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementEventArgs_TypeDefinitionIndex = 1973;

	class XmlElementEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* qnames; // 0x10
		::System::Object* o; // 0x18
		::System::Xml::XmlElement* elem; // 0x20
		::System::Int32 linePosition; // 0x28
		::System::Int32 lineNumber; // 0x2C

		::System::Void _ctor(::System::Xml::XmlElement* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTEVENTARGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
