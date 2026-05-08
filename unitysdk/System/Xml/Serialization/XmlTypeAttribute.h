#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x19D4BA70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x19D4BA50)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4BA40)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeAttribute_TypeDefinitionIndex = 1922;

	class XmlTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* typeName; // 0x18
		::System::Boolean includeInSchema; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
