#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Xml::Serialization { class XmlAnyElementAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x1B095390)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B0954A0)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B095930)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyElementAttributes_TypeDefinitionIndex = 1998;

	class XmlAnyElementAttributes : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlAnyElementAttribute* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlAnyElementAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_ADD_OFFSET))(this, a1);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTES_GET_ORDER_OFFSET))(this);
		}
	};
}
