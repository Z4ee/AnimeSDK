#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1C172820)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1C1727E0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1C172800)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1727D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayItemAttribute_TypeDefinitionIndex = 1876;

	class XmlArrayItemAttribute : public ::System::Attribute
	{
	public:
		::System::String* elementName; // 0x10
		::System::String* ns; // 0x18
		::System::Type* type; // 0x20
		::System::String* dataType; // 0x28
		::System::Boolean isNullableSpecified; // 0x30
		::System::Boolean isNullable; // 0x31
		::System::Int32 nestingLevel; // 0x34
		::System::Xml::Schema::XmlSchemaForm form; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
