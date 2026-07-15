#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_AttributeValueCache_ItemType.h"

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_ITEM_SET_OFFSET UNITYSDK_OFFSET(0x1C79F650)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_ITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79F640)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_AttributeValueCache_Item_TypeDefinitionIndex = 1875;

	class XmlWellFormedWriter_AttributeValueCache_Item : public ::System::Object
	{
	public:
		::System::Object* data; // 0x10
		::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_ITEM__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_ITEM_SET_OFFSET))(this, a1, a2);
		}
	};
}
