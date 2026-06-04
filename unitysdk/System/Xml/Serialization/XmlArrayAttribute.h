#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1AE75210)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x1AE75230)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1AE75240)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE75250)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1AE75260)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayAttribute_TypeDefinitionIndex = 1988;

	class XmlArrayAttribute : public ::System::Attribute
	{
	public:
		::System::String* elementName; // 0x10
		::System::String* ns; // 0x18
		::System::Int32 order; // 0x20
		::System::Xml::Schema::XmlSchemaForm form; // 0x24
		::System::Boolean isNullable; // 0x28

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaForm get_Form()
		{
			return ((::System::Xml::Schema::XmlSchemaForm(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_FORM_OFFSET))(this);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
