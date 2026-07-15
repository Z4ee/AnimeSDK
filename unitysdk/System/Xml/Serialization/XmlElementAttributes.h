#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Xml::Serialization { class XmlElementAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x19692AD0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19694C70)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x19692E50)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x19692360)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementAttributes_TypeDefinitionIndex = 2001;

	class XmlElementAttributes : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlElementAttribute* get_Item(::System::Int32 a1)
		{
			return ((::System::Xml::Serialization::XmlElementAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlElementAttribute* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlElementAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_ADD_OFFSET))(this, a1);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTES_GET_ORDER_OFFSET))(this);
		}
	};
}
