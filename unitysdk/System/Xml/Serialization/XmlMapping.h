#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Serialization/SerializationFormat.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Serialization { class ObjectMap; }
namespace System::Xml::Serialization { class SerializationSource; }

#define SYSTEM_XML_SERIALIZATION_XMLMAPPING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4FB800)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB7F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMapping_TypeDefinitionIndex = 1888;

	class XmlMapping : public ::System::Object
	{
	public:
		::System::Xml::Serialization::SerializationSource* source; // 0x10
		::System::String* _namespace; // 0x18
		::System::Xml::Serialization::ObjectMap* map; // 0x20
		::System::String* key; // 0x28
		::System::Collections::ArrayList* relatedMaps; // 0x30
		::System::String* _elementName; // 0x38
		::System::Xml::Serialization::SerializationFormat format; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* elementName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING__CTOR_1_OFFSET))(this, elementName, ns);
		}
	};
}
