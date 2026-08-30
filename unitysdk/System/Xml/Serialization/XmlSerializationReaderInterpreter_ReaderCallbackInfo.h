#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Serialization { class XmlSerializationReaderInterpreter; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READERCALLBACKINFO_READOBJECT_OFFSET UNITYSDK_OFFSET(0x17C5E760)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17C521E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReaderInterpreter_ReaderCallbackInfo_TypeDefinitionIndex = 2034;

	class XmlSerializationReaderInterpreter_ReaderCallbackInfo : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri; // 0x10
		::System::Xml::Serialization::XmlTypeMapping* _typeMap; // 0x18

		::System::Void _ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* a1, ::System::Xml::Serialization::XmlTypeMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READERCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* ReadObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READERCALLBACKINFO_READOBJECT_OFFSET))(this);
		}
	};
}
