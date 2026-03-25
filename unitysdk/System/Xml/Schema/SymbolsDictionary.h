#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class NamespaceList; }

#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x18596150)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAME_OFFSET UNITYSDK_OFFSET(0x18596010)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDWILDCARD_OFFSET UNITYSDK_OFFSET(0x18596540)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_EXISTS_OFFSET UNITYSDK_OFFSET(0x18596F50)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETNAMESPACELISTSYMBOLS_OFFSET UNITYSDK_OFFSET(0x185966D0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETPARTICLE_OFFSET UNITYSDK_OFFSET(0x18596F80)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18595FE0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GET_ISUPAENFORCED_OFFSET UNITYSDK_OFFSET(0x18595FF0)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_SET_ISUPAENFORCED_OFFSET UNITYSDK_OFFSET(0x18596000)
#define SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x18595F40)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SymbolsDictionary_TypeDefinitionIndex = 2053;

	class SymbolsDictionary : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* wildcards; // 0x10
		::System::Collections::Hashtable* names; // 0x18
		::System::Object* particleLast; // 0x20
		::System::Collections::ArrayList* particles; // 0x28
		::System::Int32 last; // 0x30
		::System::Boolean isUpaEnforced; // 0x34

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

		::System::Void set_IsUpaEnforced(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_SET_ISUPAENFORCED_OFFSET))(this, value);
		}

		::System::Int32 AddName(::System::Xml::XmlQualifiedName* name, ::System::Object* particle)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAME_OFFSET))(this, name, particle);
		}

		::System::Void AddNamespaceList(::System::Xml::Schema::NamespaceList* list, ::System::Object* particle, ::System::Boolean allowLocal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::NamespaceList*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDNAMESPACELIST_OFFSET))(this, list, particle, allowLocal);
		}

		::System::Void AddWildcard(::System::String* wildcard, ::System::Object* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_ADDWILDCARD_OFFSET))(this, wildcard, particle);
		}

		::System::Collections::ICollection* GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList* list)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::System::Xml::Schema::NamespaceList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETNAMESPACELISTSYMBOLS_OFFSET))(this, list);
		}

		::System::Boolean Exists(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_EXISTS_OFFSET))(this, name);
		}

		::System::Object* GetParticle(::System::Int32 symbol)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYMBOLSDICTIONARY_GETPARTICLE_OFFSET))(this, symbol);
		}
	};
}
