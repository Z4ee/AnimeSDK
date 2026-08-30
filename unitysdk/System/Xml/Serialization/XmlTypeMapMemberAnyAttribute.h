#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C44120)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAnyAttribute_TypeDefinitionIndex = 2054;

	class XmlTypeMapMemberAnyAttribute : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
