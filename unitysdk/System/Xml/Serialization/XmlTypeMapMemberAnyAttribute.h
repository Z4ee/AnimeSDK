#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAF8C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAnyAttribute_TypeDefinitionIndex = 1931;

	class XmlTypeMapMemberAnyAttribute : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERANYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
