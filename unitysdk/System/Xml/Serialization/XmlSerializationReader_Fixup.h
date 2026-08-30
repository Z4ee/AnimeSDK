#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Serialization { class XmlSerializationFixupCallback; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1E855BB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP_GET_IDS_OFFSET UNITYSDK_OFFSET(0x1E855BC0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1E855BD0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E855B80)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_Fixup_TypeDefinitionIndex = 2030;

	class XmlSerializationReader_Fixup : public ::System::Object
	{
	public:
		::System::Object* source; // 0x10
		::Il2CppArray<::System::String*>* ids; // 0x18
		::System::Xml::Serialization::XmlSerializationFixupCallback* callback; // 0x20

		::System::Void _ctor(::System::Object* a1, ::System::Xml::Serialization::XmlSerializationFixupCallback* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlSerializationFixupCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlSerializationFixupCallback* get_Callback()
		{
			return ((::System::Xml::Serialization::XmlSerializationFixupCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP_GET_CALLBACK_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Ids()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP_GET_IDS_OFFSET))(this);
		}

		::System::Object* get_Source()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_FIXUP_GET_SOURCE_OFFSET))(this);
		}
	};
}
