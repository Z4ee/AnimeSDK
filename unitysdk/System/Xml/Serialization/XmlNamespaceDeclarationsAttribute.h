#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_XML_SERIALIZATION_XMLNAMESPACEDECLARATIONSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB810)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlNamespaceDeclarationsAttribute_TypeDefinitionIndex = 1893;

	class XmlNamespaceDeclarationsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLNAMESPACEDECLARATIONSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
