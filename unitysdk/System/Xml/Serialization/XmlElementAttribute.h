#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x185C9C90)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x185C9CB0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x185C9CD0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x185C9CF0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x185C9CE0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x185C9D00)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x185C9D10)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185C9C80)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementAttribute_TypeDefinitionIndex = 1995;

	class XmlElementAttribute : public ::System::Attribute
	{
	public:
		::System::String* elementName; // 0x10
		::System::String* ns; // 0x18
		::System::String* dataType; // 0x20
		::System::Type* type; // 0x28
		::System::Boolean isNullable; // 0x30
		::System::Xml::Schema::XmlSchemaForm form; // 0x34
		::System::Int32 order; // 0x38

		::System::Void _ctor(::System::String* elementName, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE__CTOR_OFFSET))(this, elementName, type);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaForm get_Form()
		{
			return ((::System::Xml::Schema::XmlSchemaForm(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_FORM_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ORDER_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_TYPE_OFFSET))(this);
		}
	};
}
