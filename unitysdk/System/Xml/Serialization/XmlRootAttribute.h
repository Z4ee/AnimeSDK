#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1A009990)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1A00EF40)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A00EF50)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A00EF60)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00EF30)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlRootAttribute_TypeDefinitionIndex = 2010;

	class XmlRootAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* elementName; // 0x18
		::System::Boolean isNullable; // 0x20

		::System::Void _ctor(::System::String* elementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_OFFSET))(this, elementName);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_NAMESPACE_OFFSET))(this, value);
		}
	};
}
