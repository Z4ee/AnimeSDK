#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1D188B80)
#define SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1D188B60)
#define SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D188B50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlChoiceIdentifierAttribute_TypeDefinitionIndex = 1881;

	class XmlChoiceIdentifierAttribute : public ::System::Attribute
	{
	public:
		::System::String* memberName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
