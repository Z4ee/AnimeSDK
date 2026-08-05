#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_XML_SERIALIZATION_XMLANYATTRIBUTEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE757E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyAttributeAttribute_TypeDefinitionIndex = 1872;

	class XmlAnyAttributeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYATTRIBUTEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
