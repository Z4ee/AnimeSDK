#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1AE75270)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1AE75290)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x1AE752B0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLESPECIFIED_OFFSET UNITYSDK_OFFSET(0x1AE752E0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1AE752D0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE752C0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NESTINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE75300)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AE752F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayItemAttribute_TypeDefinitionIndex = 1989;

	class XmlArrayItemAttribute : public ::System::Attribute
	{
	public:
		::System::String* dataType; // 0x10
		::System::String* ns; // 0x18
		::System::Type* type; // 0x20
		::System::String* elementName; // 0x28
		::System::Boolean isNullable; // 0x30
		::System::Boolean isNullableSpecified; // 0x31
		::System::Xml::Schema::XmlSchemaForm form; // 0x34
		::System::Int32 nestingLevel; // 0x38

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaForm get_Form()
		{
			return ((::System::Xml::Schema::XmlSchemaForm(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_FORM_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Boolean get_IsNullableSpecified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLESPECIFIED_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_NestingLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NESTINGLEVEL_OFFSET))(this);
		}
	};
}
