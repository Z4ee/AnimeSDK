#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/ObjectMap.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfoList; }

#define SYSTEM_XML_SERIALIZATION_LISTMAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B0340)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1E4AF920)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E4AEF60)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E4AFD30)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GETARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1E4B0120)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B0460)
#define SYSTEM_XML_SERIALIZATION_LISTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B0470)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ListMap_TypeDefinitionIndex = 1936;

	class ListMap : public ::System::Xml::Serialization::ObjectMap
	{
	public:
		::System::String* _choiceMember; // 0x10
		::System::Xml::Serialization::XmlTypeMapElementInfoList* _itemInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* ob, ::System::Int32 index, ::System::Object* memberValue)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET))(this, ob, index, memberValue);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement_1(::System::String* elementName, ::System::String* ns)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_1_OFFSET))(this, elementName, ns);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindTextElement()
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDTEXTELEMENT_OFFSET))(this);
		}

		::System::Void GetArrayType(::System::Int32 itemCount, ::System::String*& localName, ::System::String*& ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GETARRAYTYPE_OFFSET))(this, itemCount, localName, ns);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GETHASHCODE_OFFSET))(this);
		}
	};
}
