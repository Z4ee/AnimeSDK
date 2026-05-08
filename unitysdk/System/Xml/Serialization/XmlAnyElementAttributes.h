#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Text { class StringBuilder; }
namespace System::Xml::Serialization { class XmlAnyElementAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1ACDBB50)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x1ACDBA70)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ACDB960)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1ACDBD40)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDC120)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyElementAttributes_TypeDefinitionIndex = 1875;

	class XmlAnyElementAttributes : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlAnyElementAttribute* get_Item(::System::Int32 index)
		{
			return ((::System::Xml::Serialization::XmlAnyElementAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlAnyElementAttribute* attribute)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlAnyElementAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADD_OFFSET))(this, attribute);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADDKEYHASH_OFFSET))(this, sb);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ORDER_OFFSET))(this);
		}
	};
}
