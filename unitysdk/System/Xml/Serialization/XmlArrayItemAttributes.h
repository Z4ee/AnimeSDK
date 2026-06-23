#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Text { class StringBuilder; }
namespace System::Xml::Serialization { class XmlArrayItemAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1DE47230)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x1DE47150)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DE47040)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE47360)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayItemAttributes_TypeDefinitionIndex = 1877;

	class XmlArrayItemAttributes : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlArrayItemAttribute* get_Item(::System::Int32 index)
		{
			return ((::System::Xml::Serialization::XmlArrayItemAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlArrayItemAttribute* attribute)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlArrayItemAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADD_OFFSET))(this, attribute);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
