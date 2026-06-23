#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA29BD0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_CollectionItemFixup_TypeDefinitionIndex = 1907;

	class XmlSerializationReader_CollectionItemFixup : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::Array* list; // 0x18
		::System::Int32 index; // 0x20

		::System::Void _ctor(::System::Array* list, ::System::Int32 index, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP__CTOR_OFFSET))(this, list, index, id);
		}
	};
}
