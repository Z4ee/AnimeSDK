#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Serialization { class ClassMap; }
namespace System::Xml::Serialization { class XmlSerializationReaderInterpreter; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO_FIXUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x1AE919A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE8FC80)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeDefinitionIndex = 2022;

	class XmlSerializationReaderInterpreter_FixupCallbackInfo : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri; // 0x10
		::System::Xml::Serialization::ClassMap* _map; // 0x18
		::System::Boolean _isValueList; // 0x20

		::System::Void _ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* a1, ::System::Xml::Serialization::ClassMap* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::ClassMap*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FixupMembers(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO_FIXUPMEMBERS_OFFSET))(this, a1);
		}
	};
}
