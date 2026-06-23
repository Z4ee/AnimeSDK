#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Serialization { class ClassMap; }
namespace System::Xml::Serialization { class XmlSerializationReaderInterpreter; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO_FIXUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x1D476490)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D476480)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReaderInterpreter_FixupCallbackInfo_TypeDefinitionIndex = 1909;

	class XmlSerializationReaderInterpreter_FixupCallbackInfo : public ::System::Object
	{
	public:
		::System::Xml::Serialization::ClassMap* _map; // 0x10
		::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri; // 0x18
		::System::Boolean _isValueList; // 0x20

		::System::Void _ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri, ::System::Xml::Serialization::ClassMap* map, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::ClassMap*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO__CTOR_OFFSET))(this, sri, map, isValueList);
		}

		::System::Void FixupMembers(::System::Object* fixup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPCALLBACKINFO_FIXUPMEMBERS_OFFSET))(this, fixup);
		}
	};
}
