#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x1D5678B0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1D567810)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1D567840)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1D567870)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D567890)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1D567830)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1D567860)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1D567880)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D5678A0)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D567800)
#define SYSTEM_XML_SERIALIZATION_XMLROOTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5677F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlRootAttribute_TypeDefinitionIndex = 1897;

	class XmlRootAttribute : public ::System::Attribute
	{
	public:
		::System::String* ns; // 0x10
		::System::String* elementName; // 0x18
		::System::String* dataType; // 0x20
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
