#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Serialization { class XmlSerializationCollectionFixupCallback; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F14B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_CollectionFixup_TypeDefinitionIndex = 1906;

	class XmlSerializationReader_CollectionFixup : public ::System::Object
	{
	public:
		::System::Object* collection; // 0x10
		::System::String* id; // 0x18
		::System::Object* collectionItems; // 0x20
		::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback; // 0x28

		::System::Void _ctor(::System::Object* collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP__CTOR_OFFSET))(this, collection, callback, id);
		}
	};
}
