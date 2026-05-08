#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1AB22CF0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AB22C60)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1AB22CB0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB22C50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_NamespacePrefixForQName_TypeDefinitionIndex = 2113;

	class XmlAtomicValue_NamespacePrefixForQName : public ::System::Object
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* ns; // 0x18

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

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}
	};
}
