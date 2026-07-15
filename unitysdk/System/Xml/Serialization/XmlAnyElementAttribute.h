#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x19691550)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19691530)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x19691560)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyElementAttribute_TypeDefinitionIndex = 1990;

	class XmlAnyElementAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* elementName; // 0x18
		::System::Int32 order; // 0x20

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
