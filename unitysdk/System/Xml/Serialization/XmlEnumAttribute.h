#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x185CA490)
#define SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185CA480)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlEnumAttribute_TypeDefinitionIndex = 1997;

	class XmlEnumAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLENUMATTRIBUTE_GET_NAME_OFFSET))(this);
		}
	};
}
