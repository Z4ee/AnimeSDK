#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1D0DE530)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D0DE510)
#define SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DE500)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAnyElementAttribute_TypeDefinitionIndex = 1873;

	class XmlAnyElementAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* elementName; // 0x18
		::System::Int32 order; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLANYELEMENTATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
