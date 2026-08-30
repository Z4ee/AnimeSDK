#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/NamespaceList_ListType.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_1_OFFSET UNITYSDK_OFFSET(0x1E7F7640)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET UNITYSDK_OFFSET(0x1E7F7550)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET UNITYSDK_OFFSET(0x1E7F7470)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_EXCLUDED_OFFSET UNITYSDK_OFFSET(0x1E7F7460)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E7F7450)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F76E0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F6FA0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F6F90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceList_TypeDefinitionIndex = 2167;

	class NamespaceList : public ::System::Object
	{
	public:
		::System::String* targetNamespace; // 0x10
		::System::Collections::Hashtable* set; // 0x18
		::System::Xml::Schema::NamespaceList_ListType type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Xml::Schema::NamespaceList_ListType get_Type()
		{
			return ((::System::Xml::Schema::NamespaceList_ListType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_Excluded()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_EXCLUDED_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Enumerate()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET))(this);
		}

		::System::Boolean Allows(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET))(this, a1);
		}

		::System::Boolean Allows_1(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET))(this);
		}
	};
}
