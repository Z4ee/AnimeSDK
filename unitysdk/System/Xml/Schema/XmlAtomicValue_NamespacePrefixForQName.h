#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x19FD8F30)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x19FD8F80)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD7BB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_NamespacePrefixForQName_TypeDefinitionIndex = 2171;

	class XmlAtomicValue_NamespacePrefixForQName : public ::System::Object
	{
	public:
		::System::String* ns; // 0x10
		::System::String* prefix; // 0x18

		::System::Void _ctor(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME__CTOR_OFFSET))(this, prefix, ns);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}
	};
}
