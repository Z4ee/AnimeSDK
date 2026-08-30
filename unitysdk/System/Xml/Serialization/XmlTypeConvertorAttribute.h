#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x17C6E200)
#define SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x17C6E210)
#define SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6E220)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeConvertorAttribute_TypeDefinitionIndex = 1992;

	class XmlTypeConvertorAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Method_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPECONVERTORATTRIBUTE_SET_METHOD_OFFSET))(this, a1);
		}
	};
}
