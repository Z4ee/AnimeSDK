#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE784D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNodeEventArgs_TypeDefinitionIndex = 1975;

	class XmlNodeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Xml::XmlNode* xmlNode; // 0x10
		::System::Object* o; // 0x18
		::System::Int32 linePosition; // 0x20
		::System::Int32 lineNumber; // 0x24

		::System::Void _ctor(::System::Xml::XmlNode* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNODEEVENTARGS__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
