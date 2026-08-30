#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/ObjectMap.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfoList; }

#define SYSTEM_XML_SERIALIZATION_LISTMAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B08B780)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1B08A9D0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1B089B70)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_FINDTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1B08AF70)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GETARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1B08B4E0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B08B9A0)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x1B089B50)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_SET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B089B40)
#define SYSTEM_XML_SERIALIZATION_LISTMAP_SET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x1B089B60)
#define SYSTEM_XML_SERIALIZATION_LISTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08B9B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ListMap_TypeDefinitionIndex = 2059;

	class ListMap : public ::System::Xml::Serialization::ObjectMap
	{
	public:
		::System::String* _choiceMember; // 0x10
		::System::Xml::Serialization::XmlTypeMapElementInfoList* _itemInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP__CTOR_OFFSET))(this);
		}

		::System::Void set_ChoiceMember(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_SET_CHOICEMEMBER_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ItemInfo()
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GET_ITEMINFO_OFFSET))(this);
		}

		::System::Void set_ItemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfoList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_SET_ITEMINFO_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDELEMENT_1_OFFSET))(this, a1, a2);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindTextElement()
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_FINDTEXTELEMENT_OFFSET))(this);
		}

		::System::Void GetArrayType(::System::Int32 a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GETARRAYTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_LISTMAP_GETHASHCODE_OFFSET))(this);
		}
	};
}
