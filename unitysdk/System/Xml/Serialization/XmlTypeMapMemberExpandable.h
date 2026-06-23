#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMemberElement.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E0550)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberExpandable_TypeDefinitionIndex = 1928;

	class XmlTypeMapMemberExpandable : public ::System::Xml::Serialization::XmlTypeMapMemberElement
	{
	public:
		::System::Int32 _flatArrayIndex; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE__CTOR_OFFSET))(this);
		}
	};
}
