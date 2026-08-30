#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_COLLECTION_OFFSET UNITYSDK_OFFSET(0x17C52120)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x17C52140)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x17C52130)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4D7A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_CollectionItemFixup_TypeDefinitionIndex = 2031;

	class XmlSerializationReader_CollectionItemFixup : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::Array* list; // 0x18
		::System::Int32 index; // 0x20

		::System::Void _ctor(::System::Array* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Array* get_Collection()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_COLLECTION_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_INDEX_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_ID_OFFSET))(this);
		}
	};
}
