#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_XML_SERIALIZATION_XMLINCLUDEATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B098DB0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlIncludeAttribute_TypeDefinitionIndex = 2011;

	class XmlIncludeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLINCLUDEATTRIBUTE_GET_TYPE_OFFSET))(this);
		}
	};
}
