#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SERIALIZATION_XMLMEMBERMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E378310)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMemberMapping_TypeDefinitionIndex = 1891;

	class XmlMemberMapping : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMEMBERMAPPING__CTOR_OFFSET))(this);
		}
	};
}
