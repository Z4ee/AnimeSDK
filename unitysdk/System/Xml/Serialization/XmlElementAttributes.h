#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Text { class StringBuilder; }
namespace System::Xml::Serialization { class XmlElementAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1DE759E0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x1DE75900)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DE757F0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1DE75B20)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE75F00)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementAttributes_TypeDefinitionIndex = 1884;

	class XmlElementAttributes : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlElementAttribute* get_Item(::System::Int32 index)
		{
			return ((::System::Xml::Serialization::XmlElementAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlElementAttribute* attribute)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlElementAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADD_OFFSET))(this, attribute);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADDKEYHASH_OFFSET))(this, sb);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ORDER_OFFSET))(this);
		}
	};
}
