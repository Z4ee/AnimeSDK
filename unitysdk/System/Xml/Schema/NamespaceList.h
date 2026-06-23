#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/NamespaceList_ListType.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_1_OFFSET UNITYSDK_OFFSET(0x1C16BED0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET UNITYSDK_OFFSET(0x1C16BE40)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1C16BC20)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_COMPARESETTOOTHER_OFFSET UNITYSDK_OFFSET(0x1C16CE50)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET UNITYSDK_OFFSET(0x1C16BDC0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_INTERSECTION_OFFSET UNITYSDK_OFFSET(0x1C16CF70)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ISSUBSET_OFFSET UNITYSDK_OFFSET(0x1C16C400)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_REMOVENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1C16D680)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C16BF00)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_UNION_OFFSET UNITYSDK_OFFSET(0x1C16C850)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C16B870)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16B860)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceList_TypeDefinitionIndex = 2069;

	class NamespaceList : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* set; // 0x10
		::System::String* targetNamespace; // 0x18
		::System::Xml::Schema::NamespaceList_ListType type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* namespaces, ::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_1_OFFSET))(this, namespaces, targetNamespace);
		}

		::System::Xml::Schema::NamespaceList* Clone()
		{
			return ((::System::Xml::Schema::NamespaceList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_CLONE_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Enumerate()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET))(this);
		}

		::System::Boolean Allows(::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET))(this, ns);
		}

		::System::Boolean Allows_1(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_1_OFFSET))(this, qname);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean IsSubset(::System::Xml::Schema::NamespaceList* sub, ::System::Xml::Schema::NamespaceList* super)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ISSUBSET_OFFSET))(sub, super);
		}

		static ::System::Xml::Schema::NamespaceList* Union(::System::Xml::Schema::NamespaceList* o1, ::System::Xml::Schema::NamespaceList* o2, ::System::Boolean v1Compat)
		{
			return ((::System::Xml::Schema::NamespaceList*(*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_UNION_OFFSET))(o1, o2, v1Compat);
		}

		::System::Xml::Schema::NamespaceList* CompareSetToOther(::System::Xml::Schema::NamespaceList* other)
		{
			return ((::System::Xml::Schema::NamespaceList*(*)(::PVOID, ::System::Xml::Schema::NamespaceList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_COMPARESETTOOTHER_OFFSET))(this, other);
		}

		static ::System::Xml::Schema::NamespaceList* Intersection(::System::Xml::Schema::NamespaceList* o1, ::System::Xml::Schema::NamespaceList* o2, ::System::Boolean v1Compat)
		{
			return ((::System::Xml::Schema::NamespaceList*(*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_INTERSECTION_OFFSET))(o1, o2, v1Compat);
		}

		::System::Void RemoveNamespace(::System::String* tns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_REMOVENAMESPACE_OFFSET))(this, tns);
		}
	};
}
