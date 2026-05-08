#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1AB23E80)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1AB23E40)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1AB23E60)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB23E30)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB23E20)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementAttribute_TypeDefinitionIndex = 1884;

	class XmlElementAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* elementName; // 0x18
		::System::String* dataType; // 0x20
		::System::Type* type; // 0x28
		::System::Int32 order; // 0x30
		::System::Xml::Schema::XmlSchemaForm form; // 0x34
		::System::Boolean isNullable; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* elementName, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE__CTOR_1_OFFSET))(this, elementName, type);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
