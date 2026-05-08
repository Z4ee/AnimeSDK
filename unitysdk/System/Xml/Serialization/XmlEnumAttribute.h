#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1A740370)
#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A740360)
#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A740350)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlEnumAttribute_TypeDefinitionIndex = 1886;

	class XmlEnumAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_1_OFFSET))(this, name);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
