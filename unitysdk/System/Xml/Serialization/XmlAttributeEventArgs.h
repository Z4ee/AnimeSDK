#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19691E40)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeEventArgs_TypeDefinitionIndex = 1975;

	class XmlAttributeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* o; // 0x10
		::System::Xml::XmlAttribute* attr; // 0x18
		::System::String* qnames; // 0x20
		::System::Int32 linePosition; // 0x28
		::System::Int32 lineNumber; // 0x2C

		::System::Void _ctor(::System::Xml::XmlAttribute* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEEVENTARGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
