#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1C173200)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1C173160)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1C173190)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1C1731C0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1C1731E0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1C173180)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1C1731B0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1C1731D0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1C1731F0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C173150)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C173140)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlRootAttribute_TypeDefinitionIndex = 1897;

	class XmlRootAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* dataType; // 0x18
		::System::String* elementName; // 0x20
		::System::Boolean isNullable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* elementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_1_OFFSET))(this, elementName);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_DataType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_DATATYPE_OFFSET))(this, value);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Void set_ElementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ELEMENTNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void set_IsNullable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ISNULLABLE_OFFSET))(this, value);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_ADDKEYHASH_OFFSET))(this, sb);
		}
	};
}
