#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185CA4A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlIgnoreAttribute_TypeDefinitionIndex = 1998;

	class XmlIgnoreAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLIGNOREATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
