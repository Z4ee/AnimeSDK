#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class NamespaceList; }

#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x1E8022D0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1E801FC0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDWILDCARD_OFFSET UNITYSDK_OFFSET(0x1E802810)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_EXISTS_OFFSET UNITYSDK_OFFSET(0x1E803B00)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETNAMESPACELISTSYMBOLS_OFFSET UNITYSDK_OFFSET(0x1E802B60)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETPARTICLE_OFFSET UNITYSDK_OFFSET(0x1E803BA0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E801F90)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_ISUPAENFORCED_OFFSET UNITYSDK_OFFSET(0x1E801FA0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_SET_ISUPAENFORCED_OFFSET UNITYSDK_OFFSET(0x1E801FB0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E801EF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SymbolsDictionary_TypeDefinitionIndex = 2065;

	class SymbolsDictionary : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* particles; // 0x10
		::System::Object* particleLast; // 0x18
		::System::Collections::Hashtable* names; // 0x20
		::System::Collections::Hashtable* wildcards; // 0x28
		::System::Boolean isUpaEnforced; // 0x30
		::System::Int32 last; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsUpaEnforced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_ISUPAENFORCED_OFFSET))(this);
		}

		::System::Void set_IsUpaEnforced(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_SET_ISUPAENFORCED_OFFSET))(this, a1);
		}

		::System::Int32 AddName(::System::Xml::XmlQualifiedName* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAME_OFFSET))(this, a1, a2);
		}

		::System::Void AddNamespaceList(::System::Xml::Schema::NamespaceList* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::NamespaceList*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAMESPACELIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddWildcard(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDWILDCARD_OFFSET))(this, a1, a2);
		}

		::System::Collections::ICollection* GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList* a1)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::System::Xml::Schema::NamespaceList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETNAMESPACELISTSYMBOLS_OFFSET))(this, a1);
		}

		::System::Boolean Exists(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_EXISTS_OFFSET))(this, a1);
		}

		::System::Object* GetParticle(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETPARTICLE_OFFSET))(this, a1);
		}
	};
}
