#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1E83CAB0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlChoiceIdentifierAttribute_TypeDefinitionIndex = 2005;

	class XmlChoiceIdentifierAttribute : public ::System::Attribute
	{
	public:
		::System::String* memberName; // 0x10

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}
	};
}
