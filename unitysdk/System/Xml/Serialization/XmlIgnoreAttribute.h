#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0712E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlIgnoreAttribute_TypeDefinitionIndex = 1886;

	class XmlIgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
