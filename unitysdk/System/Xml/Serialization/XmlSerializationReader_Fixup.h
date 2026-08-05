#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Serialization { class XmlSerializationFixupCallback; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E210)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_Fixup_TypeDefinitionIndex = 1906;

	class XmlSerializationReader_Fixup : public ::System::Object
	{
	public:
		::System::Object* source; // 0x10
		::Il2CppArray<::System::String*>* ids; // 0x18
		::System::Xml::Serialization::XmlSerializationFixupCallback* callback; // 0x20

		::System::Void _ctor(::System::Object* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlSerializationFixupCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP__CTOR_OFFSET))(this, o, callback, count);
		}
	};
}
