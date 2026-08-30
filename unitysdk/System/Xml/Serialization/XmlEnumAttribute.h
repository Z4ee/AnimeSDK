#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E83E6E0)
#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E83E6D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlEnumAttribute_TypeDefinitionIndex = 2009;

	class XmlEnumAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_GET_NAME_OFFSET))(this);
		}
	};
}
