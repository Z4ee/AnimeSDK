#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_ATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x185C6B50)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x185C6B70)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x185C6BA0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x185C6BB0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x185C6B90)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185C6B40)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeAttribute_TypeDefinitionIndex = 1990;

	class XmlAttributeAttribute : public ::System::Attribute
	{
	public:
		::System::String* dataType; // 0x10
		::System::String* ns; // 0x18
		::System::String* attributeName; // 0x20
		::System::Xml::Schema::XmlSchemaForm form; // 0x28

		::System::Void _ctor(::System::String* attributeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE__CTOR_OFFSET))(this, attributeName);
		}

		::System::String* get_AttributeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_ATTRIBUTENAME_OFFSET))(this);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_DataType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_SET_DATATYPE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaForm get_Form()
		{
			return ((::System::Xml::Schema::XmlSchemaForm(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_FORM_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}
	};
}
