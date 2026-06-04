#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1AE81430)
#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AE9DDA0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTextAttribute_TypeDefinitionIndex = 2032;

	class XmlTextAttribute : public ::System::Attribute
	{
	public:
		::System::String* dataType; // 0x10
		::System::Type* type; // 0x18

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_TYPE_OFFSET))(this);
		}
	};
}
