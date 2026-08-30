#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XObject.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Linq { class XName; }
namespace System::Xml::Linq { class XNamespace; }

#define SYSTEM_XML_LINQ_XATTRIBUTE_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E7BB290)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_ISNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1E7B9290)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E7BAEE0)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E7BAEF0)
#define SYSTEM_XML_LINQ_XATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E7BAF00)
#define SYSTEM_XML_LINQ_XATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BAF10)
#define SYSTEM_XML_LINQ_XATTRIBUTE_VALIDATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E7BAA70)
#define SYSTEM_XML_LINQ_XATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BAE70)
#define SYSTEM_XML_LINQ_XATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BA370)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XAttribute_TypeDefinitionIndex = 3907;

	class XAttribute : public ::System::Xml::Linq::XObject
	{
	public:
		::System::Xml::Linq::XName* name; // 0x20
		::System::String* value; // 0x28
		::System::Xml::Linq::XAttribute* next; // 0x30

		::System::Void _ctor(::System::Xml::Linq::XName* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XName*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNamespaceDeclaration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_ISNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Xml::Linq::XName* get_Name()
		{
			return ((::System::Xml::Linq::XName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_TOSTRING_OFFSET))(this);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_GETPREFIXOFNAMESPACE_OFFSET))(this, a1);
		}

		static ::System::Void ValidateAttribute(::System::Xml::Linq::XName* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Xml::Linq::XName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XATTRIBUTE_VALIDATEATTRIBUTE_OFFSET))(a1, a2);
		}
	};
}
