#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERNAMESPACES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F2290)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberNamespaces_TypeDefinitionIndex = 1933;

	class XmlTypeMapMemberNamespaces : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERNAMESPACES__CTOR_OFFSET))(this);
		}
	};
}
