#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_COLLECTION_OFFSET UNITYSDK_OFFSET(0x1A016800)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A016820)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A016810)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0137E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_CollectionItemFixup_TypeDefinitionIndex = 2020;

	class XmlSerializationReader_CollectionItemFixup : public ::System::Object
	{
	public:
		::System::Array* list; // 0x10
		::System::String* id; // 0x18
		::System::Int32 index; // 0x20

		::System::Void _ctor(::System::Array* list, ::System::Int32 index, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONITEMFIXUP__CTOR_OFFSET))(this, list, index, id);
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
