#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMemberElement.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCFFF60)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberList_TypeDefinitionIndex = 1927;

	class XmlTypeMapMemberList : public ::System::Xml::Serialization::XmlTypeMapMemberElement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERLIST__CTOR_OFFSET))(this);
		}
	};
}
