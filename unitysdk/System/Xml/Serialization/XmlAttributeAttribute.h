#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1ECAF0C0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_ATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x1ECAF080)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1ECAF0A0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECAF070)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAF060)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeAttribute_TypeDefinitionIndex = 1878;

	class XmlAttributeAttribute : public ::System::Attribute
	{
	public:
		::System::String* attributeName; // 0x10
		::System::String* ns; // 0x18
		::System::Type* type; // 0x20
		::System::String* dataType; // 0x28
		::System::Xml::Schema::XmlSchemaForm form; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* attributeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE__CTOR_1_OFFSET))(this, attributeName);
		}

		::System::String* get_AttributeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_ATTRIBUTENAME_OFFSET))(this);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
