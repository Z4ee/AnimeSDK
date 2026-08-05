#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMemberExpandable.h"

namespace System::Xml::Serialization { class ListMap; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E2D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberFlatList_TypeDefinitionIndex = 1929;

	class XmlTypeMapMemberFlatList : public ::System::Xml::Serialization::XmlTypeMapMemberExpandable
	{
	public:
		::System::Xml::Serialization::ListMap* _listMap; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERFLATLIST__CTOR_OFFSET))(this);
		}
	};
}
