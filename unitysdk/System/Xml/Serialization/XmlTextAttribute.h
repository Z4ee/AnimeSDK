#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1D0DEEA0)
#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1D0DEE80)
#define SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DEE70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTextAttribute_TypeDefinitionIndex = 1920;

	class XmlTextAttribute : public ::System::Attribute
	{
	public:
		::System::String* dataType; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTEXTATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
