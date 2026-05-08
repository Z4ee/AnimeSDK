#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_XML_SERIALIZATION_XMLANYATTRIBUTEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77A030)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyAttributeAttribute_TypeDefinitionIndex = 1873;

	class XmlAnyAttributeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYATTRIBUTEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
