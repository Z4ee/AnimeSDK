#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMemberExpandable.h"

namespace System::Xml::Serialization { class ListMap; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_GET_LISTMAP_OFFSET UNITYSDK_OFFSET(0x1A02C8F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_SET_LISTMAP_OFFSET UNITYSDK_OFFSET(0x1A02C900)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00CD20)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberFlatList_TypeDefinitionIndex = 2041;

	class XmlTypeMapMemberFlatList : public ::System::Xml::Serialization::XmlTypeMapMemberExpandable
	{
	public:
		::System::Xml::Serialization::ListMap* _listMap; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::ListMap* get_ListMap()
		{
			return ((::System::Xml::Serialization::ListMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_GET_LISTMAP_OFFSET))(this);
		}

		::System::Void set_ListMap(::System::Xml::Serialization::ListMap* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ListMap*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST_SET_LISTMAP_OFFSET))(this, value);
		}
	};
}
