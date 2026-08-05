#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1F10BB70)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1F10BB50)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10BB40)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayAttribute_TypeDefinitionIndex = 1875;

	class XmlArrayAttribute : public ::System::Attribute
	{
	public:
		::System::String* elementName; // 0x10
		::System::String* ns; // 0x18
		::System::Xml::Schema::XmlSchemaForm form; // 0x20
		::System::Boolean isNullable; // 0x24
		::System::Int32 order; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
